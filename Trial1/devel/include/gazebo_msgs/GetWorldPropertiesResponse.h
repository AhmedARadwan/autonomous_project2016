// Generated by gencpp from file gazebo_msgs/GetWorldPropertiesResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIESRESPONSE_H
#define GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct GetWorldPropertiesResponse_
{
  typedef GetWorldPropertiesResponse_<ContainerAllocator> Type;

  GetWorldPropertiesResponse_()
    : sim_time(0.0)
    , model_names()
    , rendering_enabled(false)
    , success(false)
    , status_message()  {
    }
  GetWorldPropertiesResponse_(const ContainerAllocator& _alloc)
    : sim_time(0.0)
    , model_names(_alloc)
    , rendering_enabled(false)
    , success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef double _sim_time_type;
  _sim_time_type sim_time;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _model_names_type;
  _model_names_type model_names;

   typedef uint8_t _rendering_enabled_type;
  _rendering_enabled_type rendering_enabled;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;




  typedef boost::shared_ptr< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetWorldPropertiesResponse_

typedef ::gazebo_msgs::GetWorldPropertiesResponse_<std::allocator<void> > GetWorldPropertiesResponse;

typedef boost::shared_ptr< ::gazebo_msgs::GetWorldPropertiesResponse > GetWorldPropertiesResponsePtr;
typedef boost::shared_ptr< ::gazebo_msgs::GetWorldPropertiesResponse const> GetWorldPropertiesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/jade/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/ahmed/autoProject/Trial1/src/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36bb0f2eccf4d8be971410c22818ba3f";
  }

  static const char* value(const ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36bb0f2eccf4d8beULL;
  static const uint64_t static_value2 = 0x971410c22818ba3fULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/GetWorldPropertiesResponse";
  }

  static const char* value(const ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 sim_time\n\
string[] model_names\n\
bool rendering_enabled\n\
bool success\n\
string status_message\n\
\n\
";
  }

  static const char* value(const ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sim_time);
      stream.next(m.model_names);
      stream.next(m.rendering_enabled);
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetWorldPropertiesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::GetWorldPropertiesResponse_<ContainerAllocator>& v)
  {
    s << indent << "sim_time: ";
    Printer<double>::stream(s, indent + "  ", v.sim_time);
    s << indent << "model_names[]" << std::endl;
    for (size_t i = 0; i < v.model_names.size(); ++i)
    {
      s << indent << "  model_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_names[i]);
    }
    s << indent << "rendering_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rendering_enabled);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIESRESPONSE_H
