#include <RAT/AnyParse.hh>
#include <RAT/Rat.hh>
#include <Mtv.hh>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  auto parser = new RAT::AnyParse(argc, argv);
  auto mtv = MTV::Mtv(parser, argc, argv);
  mtv.Begin();
  mtv.Report();
}
