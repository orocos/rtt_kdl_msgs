#include <kdl_msgs/boost/Wrench.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Skip templates if kdl_msgs::Wrench is only an alias for KDL::Wrench.
#ifdef BOOST_NO_CXX11_TEMPLATE_ALIASES

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::DataSource< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::AssignCommand< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::ValueDataSource< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::OutputPort< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::InputPort< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::Property< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::Attribute< kdl_msgs::Wrench >;
template class RTT_EXPORT RTT::Constant< kdl_msgs::Wrench >;

#endif // BOOST_NO_CXX11_TEMPLATE_ALIASES

namespace rtt_roscomm {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_kdl_msgs_Wrench() {
          types::TypeInfo *ti = types::Types()->getTypeInfo< ::KDL::Wrench >();
          if (!ti) {
              log(Error) << "The kdl_typekit package has to be imported before rtt_kdl_msgs." << endlog();
              return;
          }
          ti->addAlias("/kdl_msgs/Wrench");

          // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
          RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<kdl_msgs::Wrench> >("/kdl_msgs/Wrench[]") );
          RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<kdl_msgs::Wrench> >("/kdl_msgs/cWrench[]") );
      }

    
}

