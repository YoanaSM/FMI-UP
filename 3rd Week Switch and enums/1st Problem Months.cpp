#include <iostream>
#include<cassert>


int main()
{
    int number;
    std :: cin >> number;
    assert(number >= 1 && number <= 12);
    switch (number)
    {
        case 1:
            std::cout << "January" << std :: endl;
            break;
        case 2:
            std::cout << "February" << std :: endl;
            break;
        case 3:
            std::cout << "March" << std :: endl;
            break;
        case 4:
            std::cout << "April" << std :: endl;
            break;
        case 5:
            std::cout << "May" << std :: endl;
            break;
        case 6:
            std::cout << "June" << std :: endl;
            break;
        case 7:
            std::cout << "July" << std :: endl;
            break;
        case 8:
            std::cout << "Avgust" << std :: endl;
            break;
        case 9:
            std::cout << "September" << std :: endl;
            break;
        case 10:
            std::cout << "October" << std :: endl;
            break;
        case 11:
            std::cout << "November" << std :: endl;
            break;
        case 12:
            std::cout << "December" << std :: endl;
            break;

    }
// another way with enum
    /* enum Months
     {
         Jan = 1,
         Feb,
         Mar,
         Apr,
         May,
         Jun,
         Jul,
         Aug,
         Sep,
         Oct,
         Nov,
         Dec
     };

     int number;
     std::cin >> number;

     Months month = (Months)number;

     switch (month)
     {
     case Jan:
         std::cout << "January\n"
                   << std::endl;
         break;
     case Feb:
         std::cout << "February\n"
                   << std::endl;
         break;
     case Mar:
         std::cout << "March\n"
                   << std::endl;
         break;
     case Apr:
         std::cout << "April\n"
                   << std::endl;
         break;
     case May:
         std::cout << "May\n"
                   << std::endl;
         break;
     case Jun:
         std::cout << "June\n"
                   << std::endl;
         break;
     case Jul:
         std::cout << "July\n"
                   << std::endl;
         break;
     case Aug:
         std::cout << "August\n"
                   << std::endl;
         break;
     case Sep:
         std::cout << "September\n"
                   << std::endl;
         break;
     case Oct:
         std::cout << "October\n"
                   << std::endl;
         break;
     case Nov:
         std::cout << "November\n"
                   << std::endl;
         break;
     case Dec:
         std::cout << "December\n"
                   << std::endl;
         break;
     default:
         std::cout << "Invalid input!\n"
                   << std::endl;
     }*/
    return 0;
}