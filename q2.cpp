#include <iostream>

bool isMultiple(int x, int y){
    if (( x % y ) == 0) {
        return true;
    }
    else {
        return false;
    }

}


int main() {
    int num;
    std::cin>>num;
    int count = 0;
    int x;
    for ( int index = 0; index < 10; index++ ) {
        std::cin>>x;
        if (isMultiple(x,num) == true) {
            count = count+1;
    }
    }
    std::cout<<count;
    std::cout<<"\n";
    return 0;

}
