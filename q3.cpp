#include <iostream>

int pow(int base, int exponent){
    int result = 1;
    for( int a = 0; a < exponent; a++){
        result = result * base;
    }
    return result;
}

int main(){
    int base;
    int exponent;
    int result;
    std::cin>>base>>exponent;
    if ((base >= 1) && (exponent >= 1)) {
        result = pow(base, exponent);
        std::cout<<result;
    }
    else {
        std::cout<<"Both inputs must be positive";

    }
    std::cout<<"\n";
    return 0;
}
