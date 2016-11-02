// Generated by gencpp from file gazebo_msgs/SetJointTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H
#define GAZEBO_MSGS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>
#include <geometry_msgs/Pose.h>

namespace gazebo_msgs
{
template <class ContainerAllocator>
struct SetJointTrajectoryRequest_
{
  typedef SetJointTrajectoryRequest_<ContainerAllocator> Type;

  SetJointTrajectoryRequest_()
    : model_name()
    , joint_trajectory()
    , model_pose()
    , set_model_pose(false)
    , disable_physics_updates(false)  {
    }
  SetJointTrajectoryRequest_(const ContainerAllocator& _alloc)
    : model_name(_alloc)
    , joint_trajectory(_alloc)
    , model_pose(_alloc)
    , set_model_pose(false)
    , disable_physics_updates(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_name_type;
  _model_name_type model_name;

   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _joint_trajectory_type;
  _joint_trajectory_type joint_trajectory;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _model_pose_type;
  _model_pose_type model_pose;

   typedef uint8_t _set_model_pose_type;
  _set_model_pose_type set_model_pose;

   typedef uint8_t _disable_physics_updates_type;
  _disable_physics_updates_type disable_physics_updates;




  typedef boost::shared_ptr< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJointTrajectoryRequest_

typedef ::gazebo_msgs::SetJointTrajectoryRequest_<std::allocator<void> > SetJointTrajectoryRequest;

typedef boost::shared_ptr< ::gazebo_msgs::SetJointTrajectoryRequest > SetJointTrajectoryRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::SetJointTrajectoryRequest const> SetJointTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/jade/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/ahmed/autoProject/Trial2/src/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "649dd2eba5ffd358069238825f9f85ab";
  }

  static const char* value(const ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x649dd2eba5ffd358ULL;
  static const uint64_t static_value2 = 0x069238825f9f85abULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/SetJointTrajectoryRequest";
  }

  static const char* value(const ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string model_name\n\
trajectory_msgs/JointTrajectory joint_trajectory\n\
geometry_msgs/Pose model_pose\n\
bool set_model_pose\n\
bool disable_physics_updates\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
# Each trajectory point specifies either positions[, velocities[, accelerations]]\n\
# or positions[, effort] for the trajectory to be executed.\n\
# All specified values are in the same order as the joint names in JointTrajectory.msg\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name);
      stream.next(m.joint_trajectory);
      stream.next(m.model_pose);
      stream.next(m.set_model_pose);
      stream.next(m.disable_physics_updates);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJointTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::SetJointTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_name);
    s << indent << "joint_trajectory: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_trajectory);
    s << indent << "model_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.model_pose);
    s << indent << "set_model_pose: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_model_pose);
    s << indent << "disable_physics_updates: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_physics_updates);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H