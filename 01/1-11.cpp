#include <iostream> 

int main()
{
    int i = 10;
    while (i >= 0 ) {
        std::cout << i << std::endl;
        --i;
    }
    for (int j = 10; j >=0; --j) 
        std::cout << j << std::endl;
    int k = 10;
    do {
        std::cout << k << std::endl;
    } while ( --k >= 0 );
    return 0;
}
