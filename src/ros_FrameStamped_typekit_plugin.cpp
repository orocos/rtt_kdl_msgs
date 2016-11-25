#include <kdl_msgs/boost/FrameStamped.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::DataSource< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::AssignCommand< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::ValueDataSource< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::OutputPort< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::InputPort< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::Property< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::Attribute< kdl_msgs::FrameStamped >;
template class RTT_EXPORT RTT::Constant< kdl_msgs::FrameStamped >;

namespace rtt_roscomm {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_kdl_msgs_FrameStamped() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<kdl_msgs::FrameStamped>("/kdl_msgs/FrameStamped") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<kdl_msgs::FrameStamped> >("/kdl_msgs/FrameStamped[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<kdl_msgs::FrameStamped> >("/kdl_msgs/cFrameStamped[]") );
      }

    
}

