#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 100;

void createAccount(string &owner, double &balance);
void deposit(double *balance);
void withdraw(double *balance);
void displayAccounts(const string owners[], const double balances[], int accountCount);

int main()
{
  string owners[MAX_ACCOUNTS];
  double balances[MAX_ACCOUNTS];
  int accountCount = 0;
  int choice;

  do
  {
    cout << "\n--- Menu ---\n";
    cout << "1. Create an account\n";
    cout << "2. Deposit to an account\n";
    cout << "3. Withdraw from an account\n";
    cout << "4. Display all accounts\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      if (accountCount < MAX_ACCOUNTS)
      {
        createAccount(owners[accountCount], balances[accountCount]);
        accountCount++;
      }
      else
      {
        cout << "Maximum number of accounts reached.\n";
      }
      break;
    case 2:
    {
      int accountNumber;
      cout << "Enter account number: ";
      cin >> accountNumber;
      if (accountNumber >= 0 && accountNumber < accountCount)
      {
        deposit(&balances[accountNumber]);
      }
      else
      {
        cout << "Invalid account number.\n";
      }
      break;
    }
    case 3:
    {
      int accountNumber;
      cout << "Enter account number: ";
      cin >> accountNumber;
      if (accountNumber >= 0 && accountNumber < accountCount)
      {
        withdraw(&balances[accountNumber]);
      }
      else
      {
        cout << "Invalid account number.\n";
      }
      break;
    }
    case 4:
      displayAccounts(owners, balances, accountCount);
      break;
    case 5:
      cout << "Exiting the program.\n";
      break;
    default:
      cout << "Invalid choice, please try again.\n";
    }
  } while (choice != 5);

  return 0;
}

void createAccount(string &owner, double &balance)
{
  cout << "Enter account owner's name: ";
  cin >> owner;
  cout << "Enter initial balance: ";
  cin >> balance;
  cout << "Account created for " << owner << " with a balance of: " << balance << "$" << endl;
}

void deposit(double *balance)
{
  double amount;
  cout << "Enter amount to deposit: ";
  cin >> amount;
  if (amount > 0)
  {
    *balance += amount;
    cout << "Balance updated. New balance: " << *balance << "$" << endl;
  }
  else
  {
    cout << "Invalid amount.\n";
  }
}

void withdraw(double *balance)
{
  double amount;
  cout << "Enter amount to withdraw: ";
  cin >> amount;
  if (amount > 0 && *balance >= amount)
  {
    *balance -= amount;
    cout << "Withdrawal successful. New balance: " << *balance << "$" << endl;
  }
  else
  {
    cout << "Insufficient funds or invalid amount.\n";
  }
}

void displayAccounts(const string owners[], const double balances[], int accountCount)
{
  cout << "\n--- List of Accounts ---\n";
  for (int i = 0; i < accountCount; i++)
  {
    cout << "Account " << i + 1 << ": " << owners[i] << ", Balance: " << balances[i] << "$" << endl;
  }
}
