#include <iostream>
#include <ctime>
int main(){
    srand(time(0));
    int randNum=rand()%5+1;

    switch (randNum){
        case 1 :std::cout<<"u win a bumper  sticker \n";
            break;
            

        case 2 :std::cout<<"u win a t-shirt \n";

            break;

        case 3 :std::cout<<"u win a free lunch  \n";

            break;

        case 4 :std::cout<<"u win a gift card \n";

            break;

        case 5 :std::cout<<"u win a concert ticket \n";

            break;
        
    }








    return 0;
}