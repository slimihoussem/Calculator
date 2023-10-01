#include <iostream>
#include <ctime>

int main()
{
std::srand(std::time(0)); // Seed
bool status = false;
char op[] {'+', '-','*','/',};
double z;
double result;
char decision;
std::cout << "Welcome to the greatest calculator on Earth." << std::endl;

while (!status)
{
    int x = std::rand()%200;
    int y = std::rand()%200;
    int i = std::rand()%4;

    std::cout << "What's the result of "<< x <<" "<< op[i] << " " << y << " : " ;
    std::cin >> z ;
    
    switch(i){
        case 0: 
            result = x+y; 
            break;
        case 1: 
            result = x-y;
            break;
        case 2: 
            result = x*y;
            break;
        case 3: 
            result = x/y;
            break;
    }

    if(result!=z) 
    {
        std::cout << "Naah! the correct result is : " << result << std::endl;
    } else 
    {
        std::cout << "Congratulations! You got the result " << result << " right!"<<std::endl;
    }

    std::cout << std::endl;
    std::cout << "Do you want me to try again ? (Y | N) : " ;
    std::cin >> decision;

    status = ((decision=='Y')||(decision=='y')) ? false : true;
}

std::cout << "See you later!" << std::endl;

return 0;
}
