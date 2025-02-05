#include<iostream>
int main(){
    double temp;
    char unit;
    std::cout<<"**********temp conversion**********\n";
    std::cout<<"F=farenheit\n";
    std::cout<<"C= Celcuius\n";
    std::cout<<"wht unit would u like to convert to:";
    std::cin>>unit;


    if (unit == 'F' || unit == 'f')
    {
        std::cout<< "enter the temp in  celcius:";
        std::cin>>temp;

        temp = (1.8*temp)+32.0;
        std::cout<<"temp is "<< temp<<"F\n";


    }
    else if (unit =='C' || unit == 'c')
    {
        std::cout<<"enter the temp in fareheit:";
        std::cin>>temp;
        temp =(temp-32)/1.8;
        std::cout<<"temp is "<<temp<<"c\n";
    }
    else{
        std::cout<<"plz enter in only c or f\n";
    }

















    std::cout<<"************************************";
    return 0;
}