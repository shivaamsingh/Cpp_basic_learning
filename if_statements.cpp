#include <iostream>

int main()
{
    // if statements = do something if a condition is true
    //                      if not ,then dont do it

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "welcome to the site!";
    }
    else if (age<0){
        std::cout<<"You are not born yet";

    }
    else
    {
        std::cout << "you are not old enough to view this site";
    }

    return 0;
}