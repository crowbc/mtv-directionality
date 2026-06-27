#include <Mtv.hh>

namespace MTV {
Mtv::Mtv(RAT::AnyParse *p, int argc, char **argv)
    : Rat(p, argc, argv) {
  // Append an additional data directory (for ratdb and geo)
  char *mtvdata = getenv("MTVDATA");
  if (mtvdata != NULL) {
    ratdb_directories.insert(static_cast<std::string>(mtvdata) +
                             "/ratdb");
    model_directories.insert(static_cast<std::string>(mtvdata) +
                             "/models");
  }
  // Initialize a geometry factory
  // Include a new type of processor
  // Add a unique component to the datastructure
}
} // namespace MTV
