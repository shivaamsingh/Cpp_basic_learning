#include<iostream>
int main(){
    // switch = alt to using many "ekse if" statements 
    // compare one value against matching cases

    char grade;
    std::cout<<"wht letter grade:";
    std::cin>>grade;
    switch (grade)
    {
        case 'A':
        std::cout<<"u did great ";
        break;
        case 'B':
        std::cout<<"u did good";
        break;
        case 'C':
        std::cout<<"u did satisfactory";
        break;
        case 'D':
        std::cout<<"u dont do good";
        break;
        case 'F':
        std::cout<<"u failed";
        break;

    
    default:
    std::cout<<"please only enter in a letter grade (A-F)";
        break;
    }

















  /*  std::cout<<"Enter the month (1-12): ";
    std::cin>> month;
    std::cout<<"enter the month (1-12)";
    std::cin>>month;











    switch (month){
        case 1:
        std::cout<<"it is january";
        break;
        case 2:
        std::cout<<"its february";
        break;
        case 3:
        std::cout<<"its March";
        break;
        case 4:
        std::cout<<"its April";
        break;
        case 5:
        std::cout<<"its may";
        break;
        case 6:
        std::cout<<"its june ";
        break;
        case 7:
        std::cout<<"its july";
        break;
        case 8:
        std::cout<<"its aug ";
        break;
        case 9:
        std::cout<<"its sept ";
        break;
        case 10:
        std::cout<<"its oct ";
        break;
        case 11:
        std::cout<<"its nov";
        break;
        case 12:
        std::cout<<"its dec";
        break;
        default:
        std::cout<<"please enter in only numbers (1-12)";
    }
*/

















    return 0;
}