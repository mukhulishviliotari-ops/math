#include <iostream>
#include <iterator>
#include <vector>
#include<cmath>
#include<ctime>

//namespace first{
 //int x=122;
//}

//namespace second{
   // int x= 444;
//}





///////////////////////

typedef std::string text_t ;
typedef int number_t;

int main() {
   // std::cout << "Hello, World!" << std::endl;
   int x = 14;
   int y = 2344;

   //std::cout<< x+y <<std::endl;


   std::string name ="oto";
   number_t age = 16;
   std::string MentalHealth = "bad";

   //std::cout<< "hello   " << name << '\n';
   //std::cout<< " you are " << age << '\n';
   //std::cout<< " and your mental health is " << MentalHealth;

  // const int R = 213;
   //const int I = 134;
  // int u = R * I;

   //std::cout<< "this is voltage: "<< u  <<" volts";


//const double PI = 3.14159;

//const int r = 12;

//double circule =PI * r * r ;

//std::cout << circule ;

//std::cout<<second::x;



//?typedef

 text_t Naame = "oto";
  
// std::cout << Naame << '\n';
 // std::cout <<age;


 //////////////////

 number_t students = 20;

 students+=1;
 

 number_t calculate = 2 / 1 + 213 - 213 /2 * 3;

//std::cout<< students << '\n';
//std::cout<< "ur answer is:  "<< calculate << '\n';



/////////////////


//double a=3;
//double b=4;
//double c;


//c=std::max(a,b);
//c=std::min(a,b);
//c = pow(2,3);
//c= sqrt(15);
//std::cout<< "the max number is:  " << c << '\n';


//std::cout << c << '\n';




/////////////////////

//*pithagorean theorem

double a;

//std::cout<< "enter the first side of the triangle (a): ";
//std::cin>> a;



double b;

//std::cout<<"enter the second side (b)";
//std::cin>>b;


double c;


a=pow(a, 2);

b=pow(b,2);

c=sqrt(a+b);

//std::cout<<"side c ="<< c;


//number_t agee;

//std::cout<<"enter ur age: ";
//std::cin>>agee;


//if(agee>=18){
//std::cout<<"i know ur not 18 but anyway...";
//}else{
   //std::cout<<"miss klicked i think?";
//}


/////////////

//?swith

/*number_t month;

std::cout<<"enter montch(1-12)";
std::cin>>month;




switch(month){
    case 1:
       std::cout<<"it is january";
       break;
    
    case 2:
       std::cout<<"it is February";
       break;  

    case 3:
       std::cout<<"it is March";
       break;

    case 4:
       std::cout<<"it is April";
       break;
       
    case 5:
       std::cout<<"it is may";
       break; 
       
    case 6:
       std::cout<<"it is june";
       break;  
       
    case 7:
       std::cout<<"it is July";
       break;    
       
    case 8:
       std::cout<<"it is August";
       break;    

    case 9:
       std::cout<<"it is September";
       break;  

    case 10:
       std::cout<<"it is Octomber";
       break;     
       
    case 11:
       std::cout<<"it is November";
       break;     
       
    case 12:
       std::cout<<"it is December";    

       break;  
       
       default:
       std::cout<<"please enter the month number u idiot";
}*/



///////////////


/*char grade;

std::cout<<"what letter grade:  ";
std::cin>>grade;

switch(grade){
   case 'A':
   std::cout<<"u did great";

   break;

      case 'B':
   std::cout<<"u did great";

   break;

         case 'C':
   std::cout<<"u did bad";

   break;

   default:
   std::cout<<"pls enter A-C";

}*/

/////////////////////////////

//?ternary operator


//number_t number = 40;

//number >= 40 ? std::cout<<"u passed" : std::cout<<"u failed, try harder nex time.";


//number_t number = 8;

//number % 2 == 1 ? std::cout<<"this is odd" : std::cout<<"iwen";


//bool hungry = true;

//hungry == true ? std::cout<<"ur hungry asf" : std::cout<<"ur rich";


//////////////////////////

//?logical operator



/*number_t temp;

std::cout<<"enter the temperature:  ";
std::cin>>temp;

if(temp > 0 && temp < 30){

   std::cout<<"the temperauture is good"<< '\n';

}else{
   std::cout<<"temperature isnt good"<< '\n';
}


bool sunny  =true;

if(!sunny){
    std::cout<<" it is cloudy outside";
}else{
    std::cout<<"it is sunny outside";
}*/


///////////////////////////////////

//?useful string methods


/*std::string nname;

std::cout<<"enter ur name:  ";

std::getline(std::cin, nname);

if(nname.length() > 12){


std::cout<<"its too long bro who named that";

}else{

std::cout<<"good name dude";
   
}*/

//////////////////////////

//?while loops

/*std::string nname;


while(nname.empty()){

std::cout<<"enter ur name:   ";
std::getline(std::cin, nname);

}

std::cout<<"hello   "<<nname;
*/


///////////////////////


//?do while loop


//number_t numberr;

/*while(numberr < 0 ){
   std::cout<<"only positive numbers:  ";
   std::cin>>numberr;
}
*/
//std::cout<<"the number is:  "<< numberr;


//!other way

/*do{
   std::cout<<"enter a positive number:  ";
   std::cin>>numberr;
}while(numberr<0);

std::cout<<"the number is:  " <<numberr;

*/

///////////////////////

//?for loop


/*for(number_t i = 1; i<= 10; i++){
  std::cout<<i<<'\n';
}

 std::cout<<"happy new year  "<<'\n';

*/

///////////////////////////

//?break and  continue

/*for(number_t i =1; i<=20; i++){
  if(i==13){
   break;

   /!* or continue; and it skeeps and continius loop


}
   std::cout<< i <<'\n';
}
*/


///////////////////////////


//? nested loops

/*for(int i=1; i <= 3; i++){

for(int j=1; j <= 10; j++){
   std::cout<< "inner loop:  "<<j<<'\n';
   }
     std::cout<<""<<'\n';
}
*/

/////////////

//!regtangular project with nested loops

/*number_t rows;
number_t columns;
char symbol;


std::cout<<"how many rows :  ";
std::cin>>rows;

std::cout<<"how many columns :  ";
std::cin>>columns;

std::cout<<"enter a symbol:  ";
std::cin>>symbol;

for(int i=1; i<=rows; i++){
   for(int j=1; j<=columns; j++){
      std::cout<<symbol;
   }
   std::cout<<'\n';
}
*/

//? random number generator



/*srand(time(NULL));

number_t number1 =rand() % 6 + 1;
number_t number2 =rand() % 6 + 1;

std::cout<<"first dice:  "<<number1<<'\n';
std::cout<<"second dice:  "<<number2<<'\n';

number_t result = number1 + number2;

std::cout<<"the result is:  "<<result<<'\n';
*/

//? random gift generator



/*srand(time(0));

number_t random_gift = rand() % 5 +1;

switch(random_gift){
   case 1:
      std::cout<<"you won a new car";
      break;
   case 2:
      std::cout<<"you won a new bike";
      break;
   case 3:
      std::cout<<"you won a new phone";
      break;
   case 4:
      std::cout<<"you won a new laptop";
      break;
   case 5:
      std::cout<<"you won a new TV";
      break;
}
*/


//? random number guesser
/*
 int number;
int guess;
int tries;

srand(time(0));
number = rand() % 100 + 1;


std::cout<<"welcome to the number guesser game"<<'\n';


do{
      std::cout<<"enter a number between 1 and 100:  ";
      std::cin>>guess;
      tries++;

      if(guess >number){
         std::cout<<"too high"<<'\n';
      }
      else if(guess <number){
         std::cout<<"too low"<<'\n';
      }
      else{
         std::cout<<"CORRECT!"<<'\n';
      }
}while(guess != number && tries < 5 );

if(tries == 5){
   std::cout<<"you ran out of tries"<<'\n';
   std::cout<<"the number was:  "<<number<<'\n';
}else if(guess == number){
   std::cout<<"you guessed the number in "<<tries<<" tries"<<'\n';
}
*/


////////////////////////////////////



return 0;
}



