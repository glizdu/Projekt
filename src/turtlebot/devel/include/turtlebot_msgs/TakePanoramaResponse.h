// Generated by gencpp from file turtlebot_msgs/TakePanoramaResponse.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H
#define TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_msgs
{
template <class ContainerAllocator>
struct TakePanoramaResponse_
{
  typedef TakePanoramaResponse_<ContainerAllocator> Type;

  TakePanoramaResponse_()
    : status(0)  {
    }
  TakePanoramaResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;



  enum {
    STARTED = 0u,
    IN_PROGRESS = 1u,
    STOPPED = 2u,
  };


  typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TakePanoramaResponse_

typedef ::turtlebot_msgs::TakePanoramaResponse_<std::allocator<void> > TakePanoramaResponse;

typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaResponse > TakePanoramaResponsePtr;
typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaResponse const> TakePanoramaResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'turtlebot_msgs': ['/home/glizdu/Pulpit/turtlebot/src/turtlebot_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ebe3e03b034aa9578d367d7cf6ed627";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ebe3e03b034aa95ULL;
  static const uint64_t static_value2 = 0x78d367d7cf6ed627ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_msgs/TakePanoramaResponse";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 status\n\
uint8 STARTED=0\n\
uint8 IN_PROGRESS=1\n\
uint8 STOPPED=2\n\
";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakePanoramaResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_msgs::TakePanoramaResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMARESPONSE_H
