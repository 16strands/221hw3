#include <iostream>


int log(int num, int base){ 
    int count = 0;
    while ( num > 1 ) {
        num = num/base;
        count++;
    }
    return count;

}


int main(){
    int num;
    int base;
    int result;
    std::cin>>num>>base;
    if ((num >= 1) && (base >= 1)) {
        result = log(num, base);
        std::cout<<result;
    }
    else {
        std::cout<<"Both inputs must be non-negative";

    }
    std::cout<<"\n";
    return 0;
}
