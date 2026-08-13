#include <iostream>


int main(){
 
    char op;

    double num1;
    double num2;
    double result;
   

    std::cout<<"********* CALCULATOR *********"<<'\n';

    std::cout<<"enter (+ - / *):  ";
    std::cin>>op;
    
    std::cout<<"enter first number:  ";
    std::cin>>num1;

    std::cout<<"enter first second:  ";
    std::cin>>num2;

    switch(op){
        case '+':
        result=num1 + num2;
        std::cout<<"result is:  "<<result<<'\n';
        break;

        case '-':
        result=num1 - num2;
        std::cout<<"result is:  "<<result<<'\n';
        break;

        case '/':
        result=num1 / num2;
        std::cout<<"result is:  "<<result<<'\n';
        break;

        case '*':
        result=num1 * num2;
        std::cout<<"result is:  "<<result<<'\n';
        break;

        default:
        std::cout<<"pla enter only 2 numbers to calculate"<<'\n';
        break;
    }


    std::cout<<"********* CALCULATOR *********";



    return 0;
}