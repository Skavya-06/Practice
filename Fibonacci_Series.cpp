#include <iostream>
int main() {
    int n;
    int x=0;
    int y=1;
    int z=0;
    std::cout<<"Enter a number";
    std::cin>>n;
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    for (int i=0; i<n+1; i+=2 ){
        z=x+y;
        std::cout<<z<<std::endl;
        x=y;
        y=z;
    }
    return 0;
}