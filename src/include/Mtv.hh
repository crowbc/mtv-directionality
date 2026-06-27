#ifndef __MTV_Mtv__
#define __MTV_Mtv__

#include <Config.hh>
#include <RAT/AnyParse.hh>
#include <RAT/ProcAllocator.hh>
#include <RAT/ProcBlockManager.hh>
#include <RAT/Rat.hh>

namespace MTV {
class Mtv : public RAT::Rat {
public:
  Mtv(RAT::AnyParse *p, int argc, char **argv);
};
} // namespace MTV

#endif // __MTV_Mtv__
