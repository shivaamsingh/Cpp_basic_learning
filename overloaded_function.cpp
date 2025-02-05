#include <iostream>
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1,std::string topping2);
int main(){
    bakePizza("pepperoni","mushrooms");

    return 0;
}
void bakePizza(){
    std::cout<<"here is ur pizza \n";
}
void bakePizza(std::string topping1){
    std::cout<<"Here is ur "<<topping1<<" pizza \n";

}
void bakePizza(std::string topping1,std::string topping2){
    std::cout<<"Here is ur "<<topping1<<" and "<<topping2<<" pizza \n";

}