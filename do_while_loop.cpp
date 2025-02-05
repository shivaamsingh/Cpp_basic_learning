#include<iostream>
int main(){
    // do while loop = do some block of code first ,
    //                 then repeat again if condn is true

    int number;

    do{
        std::cout<<"enter a +ve number: ";
        std::cin>>number;
    }while(number<0);

    std::cout<<"the number is: "<<number;













    return 0;
}
