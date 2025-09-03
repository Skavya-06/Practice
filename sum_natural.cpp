#include <iostream>
int main() {
    int a;
    std::cout<<"Enter a number";
    std::cin>>a;
    int sum=0;
    for (int i= 1; i< a+1; ++i){
        sum=sum+i;
    }
    std::cout<<sum<<std::endl;
    return 0;
}