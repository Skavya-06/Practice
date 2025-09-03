#include <iostream>
#include <string>
int main() {
    int a;
    std::cout<<"Enter your number";
    std::cin>>a;
    std::string answer= "Prime number";
    for (int i = 2; i < a; ++i) {
        if (a%i==0){
            answer= "Not a prime number";
            break;
        }
    }
    std::cout<<answer<<std::endl;
    return 0;   
}