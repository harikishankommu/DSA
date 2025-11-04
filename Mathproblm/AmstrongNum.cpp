//371=(3)^3+(7)^3+(1)^3
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int original = number;
    int sum = 0;
    int count = 0;
    
    // Count the number of digits
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        cout<<digit<<" ";
        count++;
        temp =temp/ 10;
      
    }
      cout<<endl<<count<<endl;

    // Calculate the sum of digits raised to power n
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        cout<<pow(digit,count)<<" ";
        temp=temp/ 10;
    }

    return (sum == original);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout <<endl<< num << " is an Armstrong number." << endl;
    else
        cout <<endl<< num << " is not an Armstrong number." << endl;

    return 0;
}
