#include<iostream>
#include<cmath>
int main(){
    double a,b,c;
    std::cout<<"Enter side A: ";
    std::cin>>a;
    std::cout<<"Enter side B: ";
    std::cin>>b;

    
    c=sqrt(pow(a,2)+pow(b,2));
    //c=sqrt(a+b);

    std::cout<<"side c: "<<c;





    return 0;
}