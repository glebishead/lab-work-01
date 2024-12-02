#include <iostream>
#include <climits>
#include <cfloat>


int main() {
    /*2-5. Основные типы данных*/
    std::cout << "\ttypename\t|\tsize\t|\tmax\t\t\t|\tmin\t\t\t|" << std::endl;
    std::cout << " void\t\t\t|\t" << 0 << "\t|\t" << "-" << "\t\t\t|\t" << "-" << "\t\t\t|" << std::endl;
    std::cout << " bool\t\t\t|\t" << sizeof(bool) << "\t|\t" << true << "\t\t\t|\t" << false << "\t\t\t|" << std::endl;
    std::cout << " float\t\t\t|\t" << sizeof(float) << "\t|\t" << FLT_MAX << "\t\t|\t" << (-1 * FLT_MAX) << "\t\t|" << std::endl;
    std::cout << " double\t\t\t|\t" << sizeof(double) << "\t|\t" << DBL_MAX << "\t\t|\t" << (-1 * DBL_MAX) << "\t\t|" << std::endl;
    std::cout << " signed char\t\t|\t" << sizeof(signed char) << "\t|\t" << CHAR_MAX << "\t\t\t|\t" << CHAR_MIN << "\t\t\t|" << std::endl;
    std::cout << " unsigned char\t\t|\t" << sizeof(unsigned char) << "\t|\t" << UCHAR_MAX << "\t\t\t|\t" << 0 << "\t\t\t|" << std::endl;
    std::cout << " short int\t\t|\t" << sizeof(short int) << "\t|\t" << SHRT_MAX << "\t\t\t|\t" << SHRT_MIN << "\t\t\t|" << std::endl;
    std::cout << " unsigned short int\t|\t" << sizeof(unsigned short int) << "\t|\t" << USHRT_MAX << "\t\t\t|\t" << 0 << "\t\t\t|" << std::endl;
    std::cout << " int\t\t\t|\t" << sizeof(int) << "\t|\t" << INT_MAX << "\t\t|\t" << INT_MIN << "\t\t|" << std::endl;
    std::cout << " unsigned int\t\t|\t" << sizeof(unsigned int) << "\t|\t" << UINT_MAX << "\t\t|\t" << 0 << "\t\t\t|" << std::endl;
    std::cout << " long int\t\t|\t" << sizeof(long int) << "\t|\t" << LONG_MAX << "\t|\t" << LONG_MIN << "\t|" << std::endl;
    std::cout << " unsigned long int\t|\t" << sizeof(unsigned long int) << "\t|\t" << ULONG_MAX << "\t|\t" << 0 << "\t\t\t|" << std::endl;
    std::cout << " long long int\t\t|\t" << sizeof(long long int) << "\t|\t" << LLONG_MAX << "\t|\t" << LLONG_MIN << "\t|" << std::endl;
    std::cout << " unsigned long long int\t|\t" << sizeof(unsigned long long int) << "\t|\t" << ULLONG_MAX << "\t|\t" << 0 << "\t\t\t|" << std::endl;
    
    /*6. Арифметические операции с типами данных*/
    std::cout << std::endl;
    int n = 2;
    int k = 3;
    std::cout << n << " * " << k << " = " << n * k << std::endl;
    
    std::cout << std::endl;
    double n1 = 2.5;
    double k1 = 3.5;
    std::cout << n1 << " - " << k1 << " = " << n1 - k1 << std::endl;
    
    std::cout << std::endl;
    bool n2 = false;
    bool k2 = true;
    std::cout << n2 << " + " << k2 << " = " << n2 + k2 << std::endl;
    return 0;
}
