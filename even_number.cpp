#include <iostream>
int main() {
    int a;
    std::cout<<"Enter a number";
    std::cin>>a;
    for (int i = 2; i < a+1; ++i) {
        if (i% 2 == 0) {
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}