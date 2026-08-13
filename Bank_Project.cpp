#include <iostream>
#include <iomanip>


void ShowBalance(double balance);
double Deposit();
double Withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*********************\n";
        std::cout << "enter ur choice: \n";
        std::cout << "*********************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;


        std::cin.clear();
        fflush(stdin);


        switch(choice) {
            case 1:
                ShowBalance(balance);
                break;

            case 2:
                balance += Deposit();
                ShowBalance(balance);
                break;

            case 3:
                balance -= Withdraw(balance);
                ShowBalance(balance);
                break;

            case 4:
                std::cout << "thanks for using it\n";
                break;

            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while(choice != 4);

    return 0;
}

void ShowBalance(double balance) {
   std::cout<<"ur balance is : $ "<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}

double Deposit() {
    
    double amount = 0;
    std::cout<<"how much do u want to deposit? :"<<'\n';
    std::cin>>amount;
    
    if(amount >0){
        return amount;    
    }else{
        std::cout<<"invalide amount";
        return 0;
    }


}

double Withdraw(double balance) {
    double amount = 0;
    std::cout<<"enter amount to Withdraw: ";
    std::cin>>amount;


    if(amount > balance){
        std::cout<<"invalide amount";
        return 0;
    }else if(amount <0 ){
        std::cout<<"u stupid nigger ";
        return 0;
    }else{
        return amount;
    }

}