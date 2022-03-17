#include <iostream>

int main()
{
  std::string name;
  std::cout << "Enter your name: ";
  // ввод имени
  std::cin >> name;
  std::cout << "Hello, " << name << "\n";
  return 0;
}