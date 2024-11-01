#include <iostream>
using namespace std;

const int MAX_PRODUCTS = 100;

string productNames[MAX_PRODUCTS];
int productQuantities[MAX_PRODUCTS];
double productPrices[MAX_PRODUCTS];
int productCount = 0;

void addProduct();
void removeProduct();
void updateQuantity();
void showProducts();
void calculateTotalValue();

int main()
{
  int choice;
  do
  {
    cout << "\n--- Warehouse Management Menu ---\n";
    cout << "1. Add a product\n";
    cout << "2. Remove a product\n";
    cout << "3. Update product quantity\n";
    cout << "4. Show all products\n";
    cout << "5. Calculate total value\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      addProduct();
      break;
    case 2:
      removeProduct();
      break;
    case 3:
      updateQuantity();
      break;
    case 4:
      showProducts();
      break;
    case 5:
      calculateTotalValue();
      break;
    case 6:
      cout << "Exiting the program.\n";
      break;
    default:
      cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 6);

  return 0;
}

void addProduct()
{
  if (productCount < MAX_PRODUCTS)
  {
    cout << "Enter product name: ";
    cin >> productNames[productCount];
    cout << "Enter product quantity: ";
    cin >> productQuantities[productCount];
    cout << "Enter product price: ";
    cin >> productPrices[productCount];
    productCount++;
    cout << "Product added.\n";
  }
  else
  {
    cout << "Warehouse full, cannot add new product.\n";
  }
}

void removeProduct()
{
  string name;
  cout << "Enter product name to remove: ";
  cin >> name;
  for (int i = 0; i < productCount; i++)
  {
    if (productNames[i] == name)
    {
      for (int j = i; j < productCount - 1; j++)
      {
        productNames[j] = productNames[j + 1];
        productQuantities[j] = productQuantities[j + 1];
        productPrices[j] = productPrices[j + 1];
      }
      productCount--;
      cout << "Product removed.\n";
      return;
    }
  }
  cout << "Product not found.\n";
}

void updateQuantity()
{
  string name;
  int newQuantity;
  cout << "Enter product name to update quantity: ";
  cin >> name;
  cout << "Enter new quantity: ";
  cin >> newQuantity;
  for (int i = 0; i < productCount; i++)
  {
    if (productNames[i] == name)
    {
      productQuantities[i] = newQuantity;
      cout << "Quantity updated.\n";
      return;
    }
  }
  cout << "Product not found.\n";
}

void showProducts()
{
  if (productCount == 0)
  {
    cout << "No products in the warehouse.\n";
  }
  else
  {
    cout << "\n--- List of all products ---\n";
    for (int i = 0; i < productCount; i++)
    {
      cout << "Name: " << productNames[i]
           << ", Quantity: " << productQuantities[i]
           << ", Price: " << productPrices[i] << "$" << endl;
    }
  }
}

void calculateTotalValue()
{
  double total = 0;
  for (int i = 0; i < productCount; i++)
  {
    total += productQuantities[i] * productPrices[i];
  }
  cout << "Total value of all products: " << total << "$" << endl;
}
