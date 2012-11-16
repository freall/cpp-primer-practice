#include <iostream>
int main()
{
  int num;
  std::cout << "Enter numbers(<Ctrl-D> to end input):" << std::endl;
  int num_of_negtive = 0;
  while (std::cin >> num)
    if (num < 0)
      ++num_of_negtive;
  std::cout << "There are " << num_of_negtive
            << " negtives." << std::endl;
  return 0;
}
