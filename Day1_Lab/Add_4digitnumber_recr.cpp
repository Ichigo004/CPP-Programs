#include <iostream>
using namespace std;


int sumOfDigits(int number) {
    
    if (number == 0) {
        return 0;
    }
    
    return number % 10 + sumOfDigits(number / 10);
}

int main() {
    int number;
    
    
    cout << "Enter a 4-digit number: ";
    cin >> number;
      
    if (number < 1000 || number > 9999) {
        cout << "The number must be a 4-digit number." << endl;
        return 1; 
    }
    
    
    int result = sumOfDigits(number);
    cout << "The sum of the digits of " << number << " is " << result << "." << endl;
    
    return 0;
}








 












    













 












    






















   



























   







