#include "util.h"

namespace util {

template<typename D1, typename D2>
void Utils::UsefulFunction(Eigen::MatrixBase<D1>& input, Eigen::MatrixBase<D2>& output) {
  output = 2*input;
}

template void Utils::UsefulFunction<Eigen::Matrix3d, Eigen::Matrix3d>(Eigen::Matrix3d& input, Eigen::Matrix3d& output);
}
