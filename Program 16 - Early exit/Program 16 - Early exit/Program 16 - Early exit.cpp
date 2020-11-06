#include <iostream>
using namespace std;



int main()
{
    int playerLife = 100;
    int damage;

    cout << "Welcome to early exit" << endl;

    cout << "Player life is currently: " << playerLife << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Question " << i << ": How much damage shall I deal?" << endl;
        cin >> damage;
        playerLife -= damage;

        
        if (playerLife <= 0)
        {
            cout << "Early end.  Player Died!" << endl;
            break;
        }

        cout << "Player life is currently: " << playerLife << endl;
    }
    
    if (playerLife > 0)
    {
        cout << "All questions asked.  Player survived!" << endl;
    }



}
