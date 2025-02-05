#include <iostream>
int main()
{
    std::string questions[] = {"1.What yr was C++ created?: ",
                               "2.Who invented C++?: ",
                               "3.What is the predecessor of C++?: ",
                               "4.Is the earth flat?: "};
    
    std::string options[][4] = {
        {"A. 1969", "B. 1972", "C. 1983", "D. 1985"},
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Guido van Rossum"},
        {"A. C", "B. C#", "C. Java", "D. Python"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's that?"}};

    char answeKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;
    for (int i = 0; i < size; i++)
    {
        std::cout << "********************\n";
        std::cout << questions[i] << '\n';

        std::cout << "********************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
          std::cout<<options[i][j]<<'\n';
        }
        std::cin>>guess;
        guess=toupper(guess);


        if(guess==answeKey[i]){
            std::cout<<"CORRECT\n";
            score++;

        }
        else
        {
            std::cout<<"WRONG\n";
            std::cout<<"ANSEWR: "<<answeKey[i]<<'\n';
        }
    }
    std::cout<<"***************************\n";
    std::cout<<"*           RESULTS       *\n";
    std::cout<<"***************************\n";
    std::cout<<"CORREECT Gussses: "<<score<<'\n';
    std::cout<<"# of questions: "<<size<<'\n';
    std::cout<<"SCORE: "<<(score/(double)size)*100<<"%";
    return 0;
}