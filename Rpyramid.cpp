#include <iostream>
int main() {
    int n;
    std::cout<<"Enter a number";
    std::cin>>n;
    for (int i=1;i<n+1;++i){
        for (int z=1;z<i-1;++z){
            std::cout<<" ";
        }
        for (int j=1;j<=11-2*i;++j){
            std::cout<<"x";
        }
        std::cout<<std::endl;
    
    }
    return 0;
}
