#include <iostream>
#include "context.hpp"

int main(int argc, char** argv) {
  std::cout << "beginning" << std::endl;

  Context ctx("main context");
  auto x = ctx.NewObject();
  auto y = ctx.NewObject();
  std::cout << ctx.ToString() << std::endl;
  
  std::cout << "ending" << std::endl;
}
