#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    int z;
    std::cin >> z;

    if (( x <= y ) && ( x <= z )) {
        std::cout<<x;
    }
    else if (( y <= x ) && ( y <= z )) {
        std::cout<<y;
    }
    else if (( z <= x ) && ( z <= y )) {
        std::cout<<z;
    }
    std::cout<<"\n";
    return 0; 

}
