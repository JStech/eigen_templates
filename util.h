#include <Eigen/Core>

namespace util {

class Utils {
 public:
  template <typename D1, typename D2>
  static void UsefulFunction(Eigen::MatrixBase<D1>& input, Eigen::MatrixBase<D2>& output);
};

}
