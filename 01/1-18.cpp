#include <iostream>
class Range{
  public:
    Range(int num1, int num2){
      int lower = num1<=num2?num1:num2;
      int upper = num1+num2-lower;
      lower_ = lower;
      upper_ = upper;
    }
    void print();
  private:
    int lower_;
    int upper_;
};
void Range::print(){
  for (int i = lower_; i <= upper_; ++i) {
    std::cout << i << std::endl;
  }
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

