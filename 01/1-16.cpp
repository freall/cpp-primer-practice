#include <iostream>
int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  std::cout << "v1 is " << v1 << std::endl
            << "v2 is " << v2 << std::endl;
  std::cout << (v1>v2?v1:v2) << std::endl;
  return 0;
}
