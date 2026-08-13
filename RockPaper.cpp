#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player ,char computer);


int main(){
 
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"player choice: ";
    showChoice(player);

    computer =getComputerChoice();
    std::cout<<"computer choice: ";
    showChoice(computer);

    chooseWinner(player,computer);



    return 0;
}

char getUserChoice(){
    char player;
    std::cout<<"choose (Rock, Paper, Scissors)\n";
    do{
    std::cout<<"******************************\n";
    std::cout<<" 'r'= Rock\n";
    std::cout<<" 'p'= Paper\n";
    std::cout<<" 's'= Scissors\n";

    std::cin>> player;

    }while(player != 'r' && player != 's' && player != 'p');



     return player;
}


char getComputerChoice(){
   
srand(time(0));

int num = rand()% 3 + 1;

switch(num){
    case 1:
    return 'r';

    case 2:
    return 'p';

    case 3:
    return 's';
}

return 0;

}
void showChoice(char choice){
  switch(choice){
     case 'r':
     std::cout<<" Rock\n";
     break;
    
     case 's':
     std::cout<<" Scissors\n";
     break;

     case 'p':
     std::cout<<" Paper\n";
     break;
   

    }
}
void chooseWinner(char player ,char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                std::cout<<"tie";
          }
          else if (computer == 'p') {
            std::cout<<"player lost\n";
          }
          else {
            std::cout<<"player won!\n";          
          }
          break;


        case 'p': if(computer == 'p'){
                std::cout<<"tie";
          }
          else if (computer == 's') {
            std::cout<<"player lost\n";
          }
          else {
            std::cout<<"player won!\n";          
          }
          break;

        case 's': if(computer == 's'){
                std::cout<<"tie";
          }
          else if (computer == 'r') {
            std::cout<<"player lost\n";
          }
          else {
            std::cout<<"player won!\n";          
          }
          break;
    }



}