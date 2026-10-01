#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{};
    std::cout << "Please enter 3 integers in a row separated by a whitespace\n";
    for (int i = 0; i < 3; i++)
    {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }
    int sum = 0;
    for (int number : numbers)
    {
        sum += number;
    }
    std::cout << "\nYou have entered the following numbers\n";
    for (int number : numbers)
    {
        std::cout << number << " " ;
    }
    std::cout <<"\nThe sum of the numbers is:\n" << sum ;
}