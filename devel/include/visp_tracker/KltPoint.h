// Generated by gencpp from file visp_tracker/KltPoint.msg
// DO NOT EDIT!


#ifndef VISP_TRACKER_MESSAGE_KLTPOINT_H
#define VISP_TRACKER_MESSAGE_KLTPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace visp_tracker
{
template <class ContainerAllocator>
struct KltPoint_
{
  typedef KltPoint_<ContainerAllocator> Type;

  KltPoint_()
    : i(0.0)
    , j(0.0)
    , id(0)  {
    }
  KltPoint_(const ContainerAllocator& _alloc)
    : i(0.0)
    , j(0.0)
    , id(0)  {
  (void)_alloc;
    }



   typedef double _i_type;
  _i_type i;

   typedef double _j_type;
  _j_type j;

   typedef int32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::visp_tracker::KltPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visp_tracker::KltPoint_<ContainerAllocator> const> ConstPtr;

}; // struct KltPoint_

typedef ::visp_tracker::KltPoint_<std::allocator<void> > KltPoint;

typedef boost::shared_ptr< ::visp_tracker::KltPoint > KltPointPtr;
typedef boost::shared_ptr< ::visp_tracker::KltPoint const> KltPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visp_tracker::KltPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visp_tracker::KltPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace visp_tracker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visp_tracker': ['/home/zer0/AGV_ws/src/vision_visp/visp_tracker/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::visp_tracker::KltPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visp_tracker::KltPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visp_tracker::KltPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visp_tracker::KltPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visp_tracker::KltPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visp_tracker::KltPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visp_tracker::KltPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6014cf727908e3e35d0048962e94796f";
  }

  static const char* value(const ::visp_tracker::KltPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6014cf727908e3e3ULL;
  static const uint64_t static_value2 = 0x5d0048962e94796fULL;
};

template<class ContainerAllocator>
struct DataType< ::visp_tracker::KltPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visp_tracker/KltPoint";
  }

  static const char* value(const ::visp_tracker::KltPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visp_tracker::KltPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# KLT point position.\n\
\n\
float64 i      # i position in the image\n\
float64 j      # j position in the image\n\
int32   id     # Point id\n\
";
  }

  static const char* value(const ::visp_tracker::KltPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visp_tracker::KltPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.i);
      stream.next(m.j);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KltPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visp_tracker::KltPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visp_tracker::KltPoint_<ContainerAllocator>& v)
  {
    s << indent << "i: ";
    Printer<double>::stream(s, indent + "  ", v.i);
    s << indent << "j: ";
    Printer<double>::stream(s, indent + "  ", v.j);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISP_TRACKER_MESSAGE_KLTPOINT_H
