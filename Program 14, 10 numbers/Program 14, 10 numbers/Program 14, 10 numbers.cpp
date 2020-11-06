#include <iostream>
using namespace std;

int main()
{
    bool loopBreak = false;
    float mean;
    float sum;
    float num1;
    float num2;
    float currentIt = 2;

    cout << "Please enter a number" << endl;
    cin >> num1;
    

    cout << "Please enter another number" << endl;
    cin >> num2;

    sum = num1 + num2;
    mean = sum / (currentIt);

    cout << "The sum of both numbers is: " << sum << endl;
    cout << "The mean of both numbers is: " << mean << endl;

    do
    {
        currentIt += 1;

        cout << "Please enter a number" << endl;
        cin >> num1;

        if (num1 == 0)
            loopBreak = true;

        sum += num1;
        mean = sum / (currentIt);

        cout << "The sum of all numbers is: " << sum << endl;
        cout << "The mean of all numbers is: " << mean << endl;

    } while (loopBreak == false);



}

