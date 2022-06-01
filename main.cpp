#include <Eigen/Core>
#include <iostream>
#include "util.h"

int main(int argc, char* argv[]) {
  Eigen::Matrix3d M(3, 3);
  M << 1, 2, 3, 4, 5, 6, 3, 4, 5;
  std::cout << M << "\n\n";
  util::Utils::UsefulFunction(M, M);
  std::cout << M << "\n\n";
  return 0;
}
