#include <iostream>

class BankAccount
{
private:
  int account_number;
  double balance;

public:
  static int current_account_number;

  BankAccount() : account_number(current_account_number), balance(0)
  {
    current_account_number++;
  }

  void setAccountNumber(int num)
  {
    account_number = num;
  }

  int getAccountNumber()
  {
    return account_number;
  }

  void setBalance(double bal)
  {
    balance = bal;
  }

  double getBalance()
  {
    return balance;
  }

  void depositMoney(double toAdd)
  {
    balance += toAdd;
    std::cout << "Deposit successful! remaining balance: " << balance << std::endl;
  }

  void withdrawMoney(double toWithdraw)
  {
    if (toWithdraw > balance)
    {
      std::cout << "Amount is more than available!" << std::endl;
      return;
    }
    balance -= toWithdraw;
    std::cout << "Withdraw successful! Remaining balance: " << balance << std::endl;
  }
};

int BankAccount::current_account_number = 0;

int main()
{
  int choice;
  std::cout << "Would you like to create a new bank account? (1 - Yes, 0 - No)" << std::endl;
  std::cin >> choice;

  if (choice == 1)
  {
    BankAccount account;

    while (true)
    {
      int option;
      int amount;
      std::cout << "1. Withdraw" << std::endl;
      std::cout << "2. Deposit" << std::endl
                << std::endl;
      std::cout << "3. Quit" << std::endl;
      std::cout << "Enter choice: ";
      if (!(std::cin >> option))
      {
        std::cin.clear();
        std::cin.ignore();
        system("clear");
        std::cout << std::endl
                  << "Invalid!" << std::endl;

        continue;
      }
      if (option == 3)
      {
        break;
      }
      else if (option == 1)
      {
        std::cout << "Enter amount to withdraw: ";
        std::cin >> amount;
        system("clear");

        account.withdrawMoney(amount);
      }
      else if (option == 2)
      {
        std::cout << "Enter amount to deposit: ";
        std::cin >> amount;
        system("clear");
        account.depositMoney(amount);
      }
    }
  }

  std::cout << "Bye bye" << std::endl;

  return 0;
}