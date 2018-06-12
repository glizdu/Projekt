// Generated by gencpp from file labbot/msgFromLabbot.msg
// DO NOT EDIT!


#ifndef LABBOT_MESSAGE_MSGFROMLABBOT_H
#define LABBOT_MESSAGE_MSGFROMLABBOT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace labbot
{
template <class ContainerAllocator>
struct msgFromLabbot_
{
  typedef msgFromLabbot_<ContainerAllocator> Type;

  msgFromLabbot_()
    : motorRightInput(0.0)
    , motorRightSetpoint(0.0)
    , motorRightOutput(0.0)
    , motorLeftInput(0.0)
    , motorLeftSetpoint(0.0)
    , motorLefttOutput(0.0)  {
    }
  msgFromLabbot_(const ContainerAllocator& _alloc)
    : motorRightInput(0.0)
    , motorRightSetpoint(0.0)
    , motorRightOutput(0.0)
    , motorLeftInput(0.0)
    , motorLeftSetpoint(0.0)
    , motorLefttOutput(0.0)  {
  (void)_alloc;
    }



   typedef float _motorRightInput_type;
  _motorRightInput_type motorRightInput;

   typedef float _motorRightSetpoint_type;
  _motorRightSetpoint_type motorRightSetpoint;

   typedef float _motorRightOutput_type;
  _motorRightOutput_type motorRightOutput;

   typedef float _motorLeftInput_type;
  _motorLeftInput_type motorLeftInput;

   typedef float _motorLeftSetpoint_type;
  _motorLeftSetpoint_type motorLeftSetpoint;

   typedef float _motorLefttOutput_type;
  _motorLefttOutput_type motorLefttOutput;





  typedef boost::shared_ptr< ::labbot::msgFromLabbot_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::labbot::msgFromLabbot_<ContainerAllocator> const> ConstPtr;

}; // struct msgFromLabbot_

typedef ::labbot::msgFromLabbot_<std::allocator<void> > msgFromLabbot;

typedef boost::shared_ptr< ::labbot::msgFromLabbot > msgFromLabbotPtr;
typedef boost::shared_ptr< ::labbot::msgFromLabbot const> msgFromLabbotConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::labbot::msgFromLabbot_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::labbot::msgFromLabbot_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace labbot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'labbot': ['/home/labbot/ROS-labbot/labbot_ws/src/labbot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::labbot::msgFromLabbot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::labbot::msgFromLabbot_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::labbot::msgFromLabbot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::labbot::msgFromLabbot_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::labbot::msgFromLabbot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::labbot::msgFromLabbot_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::labbot::msgFromLabbot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4bf0f6e2fd2b507f5c1d51ceec5b93b5";
  }

  static const char* value(const ::labbot::msgFromLabbot_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4bf0f6e2fd2b507fULL;
  static const uint64_t static_value2 = 0x5c1d51ceec5b93b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::labbot::msgFromLabbot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "labbot/msgFromLabbot";
  }

  static const char* value(const ::labbot::msgFromLabbot_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::labbot::msgFromLabbot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# right motor parameters\n\
float32 motorRightInput\n\
float32 motorRightSetpoint\n\
float32 motorRightOutput\n\
# left motor parameters\n\
float32 motorLeftInput\n\
float32 motorLeftSetpoint\n\
float32 motorLefttOutput\n\
";
  }

  static const char* value(const ::labbot::msgFromLabbot_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::labbot::msgFromLabbot_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motorRightInput);
      stream.next(m.motorRightSetpoint);
      stream.next(m.motorRightOutput);
      stream.next(m.motorLeftInput);
      stream.next(m.motorLeftSetpoint);
      stream.next(m.motorLefttOutput);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msgFromLabbot_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::labbot::msgFromLabbot_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::labbot::msgFromLabbot_<ContainerAllocator>& v)
  {
    s << indent << "motorRightInput: ";
    Printer<float>::stream(s, indent + "  ", v.motorRightInput);
    s << indent << "motorRightSetpoint: ";
    Printer<float>::stream(s, indent + "  ", v.motorRightSetpoint);
    s << indent << "motorRightOutput: ";
    Printer<float>::stream(s, indent + "  ", v.motorRightOutput);
    s << indent << "motorLeftInput: ";
    Printer<float>::stream(s, indent + "  ", v.motorLeftInput);
    s << indent << "motorLeftSetpoint: ";
    Printer<float>::stream(s, indent + "  ", v.motorLeftSetpoint);
    s << indent << "motorLefttOutput: ";
    Printer<float>::stream(s, indent + "  ", v.motorLefttOutput);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LABBOT_MESSAGE_MSGFROMLABBOT_H
