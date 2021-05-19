// Generated by gencpp from file core_msgs/dist_center.msg
// DO NOT EDIT!


#ifndef CORE_MSGS_MESSAGE_DIST_CENTER_H
#define CORE_MSGS_MESSAGE_DIST_CENTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace core_msgs
{
template <class ContainerAllocator>
struct dist_center_
{
  typedef dist_center_<ContainerAllocator> Type;

  dist_center_()
    : header()
    , size(0)
    , dist()  {
    }
  dist_center_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , size(0)
    , dist(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _size_type;
  _size_type size;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _dist_type;
  _dist_type dist;





  typedef boost::shared_ptr< ::core_msgs::dist_center_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_msgs::dist_center_<ContainerAllocator> const> ConstPtr;

}; // struct dist_center_

typedef ::core_msgs::dist_center_<std::allocator<void> > dist_center;

typedef boost::shared_ptr< ::core_msgs::dist_center > dist_centerPtr;
typedef boost::shared_ptr< ::core_msgs::dist_center const> dist_centerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::core_msgs::dist_center_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::core_msgs::dist_center_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::core_msgs::dist_center_<ContainerAllocator1> & lhs, const ::core_msgs::dist_center_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.size == rhs.size &&
    lhs.dist == rhs.dist;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::core_msgs::dist_center_<ContainerAllocator1> & lhs, const ::core_msgs::dist_center_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::core_msgs::dist_center_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::core_msgs::dist_center_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::core_msgs::dist_center_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::core_msgs::dist_center_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::core_msgs::dist_center_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::core_msgs::dist_center_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::core_msgs::dist_center_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e652f8d15dd8848ad77cfc482f45e66";
  }

  static const char* value(const ::core_msgs::dist_center_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e652f8d15dd8848ULL;
  static const uint64_t static_value2 = 0xad77cfc482f45e66ULL;
};

template<class ContainerAllocator>
struct DataType< ::core_msgs::dist_center_<ContainerAllocator> >
{
  static const char* value()
  {
    return "core_msgs/dist_center";
  }

  static const char* value(const ::core_msgs::dist_center_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::core_msgs::dist_center_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 size\n"
"float32[] dist\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::core_msgs::dist_center_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::core_msgs::dist_center_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.size);
      stream.next(m.dist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct dist_center_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_msgs::dist_center_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::core_msgs::dist_center_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
    s << indent << "dist[]" << std::endl;
    for (size_t i = 0; i < v.dist.size(); ++i)
    {
      s << indent << "  dist[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.dist[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CORE_MSGS_MESSAGE_DIST_CENTER_H
