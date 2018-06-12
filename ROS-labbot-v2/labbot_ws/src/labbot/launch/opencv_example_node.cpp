#include "ros/ros.h"
#include <iostream>
#include "cv_bridge/cv_bridge.h"
#include "sensor_msgs/Image.h"
#include <opencv2/opencv.hpp>
#include <image_transport/image_transport.h>
#include<vector>

using namespace std;
using namespace cv;
cv::Mat detectedEdges;
vector<Vec3f> circles;
void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{ 


cv::Mat gray;
  // Convert the image to grayscale
 cv::Mat image = cv_bridge::toCvShare(msg, "bgr8")->image;

 cv::cvtColor( image, gray, CV_BGR2GRAY );
  
  cv::GaussianBlur( gray, gray, cv:: Size(9, 9), 2, 2 );// cv::Size( 21, 21 ), 5, 5 );
   int lowThreshold=10;
  int ratio = 3;
  int kernel_size = 3;

  //cv::Canny( gray, detectedEdges, lowThreshold, lowThreshold*ratio, kernel_size );
  
  cv::Mat hsv_image;
  cv::cvtColor(image, hsv_image, cv::COLOR_BGR2HSV);
  cv::Mat result;
  cv::inRange(hsv_image, cv::Scalar(115, 100,100), cv::Scalar(125, 255, 255), result);
  image.setTo(cv::Scalar(50,200,200),result);


int rows_img;
int cols_img;
int rows_res;
int cols_res;
cv::Size s_img=image.size();
cv::Size s_res=result.size();
cout<<"Image: "<<rows_img<<"x"<<cols_img<<endl<<"Result: "<<rows_res<<"x"<<cols_res<<endl;




 
HoughCircles( result, circles, HOUGH_GRADIENT, 1, gray.rows/8, 10, 80, 0, 100 );
for( size_t i = 0; i < circles.size(); i++ )
{
   Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
   int radius = cvRound(circles[i][2]);
   // circle center
   circle( result, center, 3, Scalar(0,255,0), -1, 8, 0 );
   // circle outline
   circle( result, center, radius, Scalar(0,0,255), 3, 8, 0 );
 }



 
  imshow("Image",image);
  imshow("Image edited", result);
  waitKey(5);

  
}

int main(int argc, char **argv)
{
  cout<<"SIEMANECZKOoooo"<<endl;

  //initialize node
  ros::init(argc, argv, "cv_example");

  // node handler
  ros::NodeHandle n;
  
  // subsribe topic
  ros::Subscriber sub = n.subscribe("/camera/rgb/image_raw", 1000, imageCallback);

  // publish
  image_transport::ImageTransport it(n);
  image_transport::Publisher pub = it.advertise("camera/imageEdges", 1);
  
  sensor_msgs::ImagePtr msg;
  
  ros::Rate loop_rate(5);
  while (n.ok()) {
    // Check if grabbed frame is actually full with some content
    if(!detectedEdges.empty()) {
      msg = cv_bridge::CvImage(std_msgs::Header(), "mono8", detectedEdges).toImageMsg();
      pub.publish(msg);
      cv::waitKey(1);
    }
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
