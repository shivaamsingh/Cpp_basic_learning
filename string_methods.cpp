#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter the name: ";
    std::getline(std::cin, name);

    name.erase(0,3);
    std::cout<<name;






    //std::cout<<name.find(' ');
    //name.insert(0,"@");

    //std::cout << "ur username  is now " << name;
    //std::cout<<name.at(1);
    //name.append("@gmail.com");
    // name.clear();

    /*if (name.empty()) {
         std::cout << "You didn't enter your name";
     }
     else if (name.length() > 12) {
         std::cout << "Your name can't be over 12 characters";
     }
     else {
         std::cout << "hello " << name;
     }
 */

    return 0;
}
