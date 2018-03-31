#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	ros::init(argc,argv,"przekaz_predkosc");
	ros::NodeHandle nh;
	ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("cmd_vel_mux/input/teleop", 1000);
srand(time(0));
ros::Rate rate(2); //2Hz
while (ros::ok)
{
geometry_msgs::Twist msg;
msg.linear.x = double(rand())/double(RAND_MAX);
msg.angular.z=2*double(rand())/double(RAND_MAX)-1;
pub.publish(msg);
ROS_INFO_STREAM("Wysylanie randomowej predkosci:\n"<<"linear x=\n"<<msg.linear.x<<"angular z="<<msg.angular.z);
rate.sleep(); //spij do nastepnej iteracji
}
}
