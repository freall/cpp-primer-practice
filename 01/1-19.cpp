#include <iostream>
class Range{
  public:
    Range(int num1, int num2):
    lower_(num1<=num2?num1:num2),
    upper_(num1+num2-lower_){}
    void print();
  private:
    int lower_;
    int upper_;
};
void Range::print(){
  int count(1);
  for (int i = lower_; i <= upper_; ++i, ++count) {
    std::cout << i << "\t";
    if (count == 10){
      std::cout << std::endl;
      count = 0;
    }
  }
  std::cout << std::endl;
}
int main()
{
  int num1, num2;
  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> num1 >> num2;
  Range range(num1, num2);
  range.print();
  return 0;
}

