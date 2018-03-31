#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <iomanip> //std::setprecision i std::fixed

//callback function
//wykonywana z kazdą odebraną wiadomością

void poseMessageReceived( const sensor_msgs::JointState& msg)
{
ROS_INFO_STREAM(std::setprecision(2)<<std::fixed<<"position:\n"<<double(msg.position[0]));
}

int main(int argc, char **argv)
{
	ros::init(argc,argv,"odbierz_pose");
	ros::NodeHandle nh;
	ros::Subscriber sub = nh.subscribe("joint_states", 1000, &poseMessageReceived);

ros::spin();
}
