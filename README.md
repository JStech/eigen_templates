Compiling fails with this output:
```
[ 50%] Building CXX object CMakeFiles/util.dir/util.cpp.o
[ 50%] Linking CXX executable main
/usr/bin/ld: CMakeFiles/main.dir/main.cpp.o: in function `main':
main.cpp:(.text+0x233): undefined reference to `void util::Utils::UsefulFunction<Eigen::Matrix<double, 3, 3, 0, 3, 3>,
  Eigen::Matrix<double, 3, 3, 0, 3, 3> >(Eigen::MatrixBase<Eigen::Matrix<double, 3, 3, 0, 3, 3> >&,
  Eigen::MatrixBase<Eigen::Matrix<double, 3, 3, 0, 3, 3> >&)'
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make[2]: *** [CMakeFiles/main.dir/build.make:84: main] Error 1
make[1]: *** [CMakeFiles/Makefile2:78: CMakeFiles/main.dir/all] Error 2
make[1]: *** Waiting for unfinished jobs....
/home/johns/eigen_templates/util.cpp:10:22: error: explicit instantiation of 'UsefulFunction' does not refer to a
  function template, variable template, member function, member class, or static data member
template void Utils::UsefulFunction<Eigen::Matrix3d, Eigen::Matrix3d>(Eigen::Matrix3d& input, Eigen::Matrix3d& output);
                     ^
/home/johns/eigen_templates/util.cpp:6:13: note: candidate template ignored: could not match 'void
  (Eigen::MatrixBase<Matrix<double, 3, 3, 0, 3, 3> > &, Eigen::MatrixBase<Matrix<double, 3, 3, 0, 3, 3> > &)' against
  'void (Eigen::Matrix3d &, Eigen::Matrix3d &)' (aka 'void (Matrix<double, 3, 3> &, Matrix<double, 3, 3> &)')
void Utils::UsefulFunction(Eigen::MatrixBase<D1>& input, Eigen::MatrixBase<D2>& output) {
            ^
1 error generated.
make[2]: *** [CMakeFiles/util.dir/build.make:63: CMakeFiles/util.dir/util.cpp.o] Error 1
make[1]: *** [CMakeFiles/Makefile2:105: CMakeFiles/util.dir/all] Error 2
make: *** [Makefile:84: all] Error 2
```
