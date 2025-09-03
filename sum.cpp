#include <iostream>
int main() {
    int a;
    int sum=0;
    std::cout<<"Enter a number";
    std::cin>>a;
    for (int i=1;i<a+1;++i){
        sum=sum+(10*i);
    }
    std::cout<<sum<<std::endl;
    return 0;
}