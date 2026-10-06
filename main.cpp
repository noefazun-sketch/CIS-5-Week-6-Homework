#include <iostream>
#include <string>

// Homework 6 - Noe Zuniga
// CIS 5 Week 06 - Menu

int main() {

std::string name;
int choice;
int number;

std::cout << "Enter your name: ";
std::getline(std::cin, name);

do {
std::cout << "\nMenu" << std::endl;
std::cout << "1. Say Hello" << std::endl;
std::cout << "2. Countdown" << std::endl;
std::cout << "3. Exit" << std::endl;
std::cout << "Enter your choice: ";
std::cin >> choice;

if (choice == 1) {
std::cout << "Hello " << name << std::endl;
}
else if (choice == 2) {
std::cout << "Enter a number to count down from: ";
std::cin >> number;

while (number >= 0) {
std::cout << number << std::endl;
number = number - 1;
}
}
else if (choice == 3) {
std::cout << "Exiting menu..." << std::endl;
}
else {
std::cout << "Invalid choice." << std::endl;
}

} while (choice != 3);

std::cout << "The Menu is closed" << std::endl;

return 0;
}