//#define MLD_DEBUG 1
#ifdef MLD_DEBUG
#define PRINT(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define PRINT(fmt, ...) /* fmt */

#include <vector>
#include <net/ip6/packet_mld.hpp>
#include <net/ip6/packet_icmp6.hpp>
#include <statman>

namespace net::mld
{
  MldPacket::MldPacket(icmp6::Packet& icmp6) : icmp6_(icmp6) {}
  MldPacket2::MldPacket2(icmp6::Packet& icmp6) : icmp6_(icmp6) {}
}
#endif
