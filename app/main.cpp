#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
    int n;
    std::cout << "input one integer ";
    std::cin >> n;
 
    std::cout << vsite::oop::v1::to_hex(n) << std::endl;

    vsite::oop::v1::mult_table(n, std::cout);

    return 0;
}
