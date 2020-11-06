#include <iostream>
using namespace std;

int main()
{
    int lines;

    cout << "Welcome to the starry output program" << endl;

    cout << "Please enter the amount of starry lines you want" << endl;
    cin >> lines;

    for (int i = 1; i < (lines) + 1; i++)
    {
        for (int p = 0; p < (i); p++)
        {
            cout << ("*");
        }
        cout << endl;

    }


}
