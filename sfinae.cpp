// enable_if example: two ways of using enable_if
#include <iostream>
#include <type_traits>

int func(...) { return 0; }

template <typename T>
typename std::enable_if<std::is_integral<T>::value,bool>::type
  func (T i) {return 1;}

int func(float f) { return 2;}

int main() {

  std::cout << func(nullptr) << " ";
  std::cout << func(2)       << " ";
  std::cout << func(2.f)     << " ";
  std::cout << func("hello") << " ";
  std::cout << func(2.0)     << std::endl;

  return 0;
}
