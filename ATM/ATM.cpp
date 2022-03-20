#include <iostream>

void showMenu() {
    std::cout << "----------MENU----------" << std::endl;
    std::cout << std::endl;
    std::cout << "  1. Check Balance \n";
    std::cout << "  2. Deposit Balance \n";
    std::cout << "  3. Withdrawal Balance \n";
    std::cout << "  4. Back to Menu" << std::endl;
    std::cout << "  5. Exit" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;

}

int main()
{
    // ATM Machine, Check Balance, Deposit, Withdrawal, Show Menu
    int option;
    double balance = 500;

    do {
        showMenu();

        // user choose option
        std::cout << "Please Chooese an Option: ";
        std::cin >> option;

        switch (option) {
        case 1: std::cout << "Your Balance : $" << balance << std::endl; break;
            std::cout << std::endl;

        case 2: std::cout << "Deposit Amount: ";
            double depositAmount;
            std::cin >> depositAmount;
            std::cout << "Deposit Amount is: $" << depositAmount << std::endl;
            balance += depositAmount;
            std::cout << "Current Balance in Your Account is: $" << balance << std::endl;
            break;
            std::cout << std::endl;

        case 3: std::cout << "Withdrawal Amount: ";
            double withDrawAmount;
            std::cin >> withDrawAmount;
            std::cout << "Withdraw Amount is: $" << withDrawAmount << std::endl;
            if (withDrawAmount <= balance) {
                balance -= withDrawAmount;
            }
            else {
                std::cout << "Insufficent Balance to do the Transection! " << balance << " $ is Remaining" << std::endl;
            }
            std::cout << "Current Balance in Your Account is: $" << balance << std::endl;
            break;
            std::cout << std::endl;

        }
    } while (option != 5);

    system("pause > 0");
}
