#include <iostream>
#include <vector>

typedef std::string text_t ;
typedef int number_t;

int main(){

    text_t name;
    number_t age;
    number_t birth_year;

   number_t current_year = 2026;


   std::cout<<"whats ur name bro:  "<<'\n';
   std::cin>> name;

   std::cout<<"whats ur age bro:  "<<'\n';
   std::cin>> age;

   std::cout<<"whats ur birth year bro:  "<<'\n';
   std::cin>> birth_year;


  if(current_year - birth_year == age){
   std::cout<<"ur age is correct"<<'\n';
   std::cout<<"hello  "<< name <<'\n';
   std::cout<<"ur age is  "<< age <<'\n';
   std::cout<<"ur birth year is  "<< birth_year <<'\n';
  }
  else{
   std::cout<<"ur age is not correct"<<'\n';  
    std::cout<<"ur age is not 16 or birth year is not correct"<<'\n';
  }

   return 0;
}