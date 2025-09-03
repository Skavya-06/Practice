#include <iostream>
int main() {
    int a;
    std::cout<<"Enter a number";
    std::cin>>a;
    for (int i = 1; i < a+1; ++i) {
        std::cout<<i<<std::endl;
    }
    return 0;
}
