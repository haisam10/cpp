#include <iostream>
using namespace std;

int main()
{
    int amount;
    int note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;

    cout << "Enter amount: ";
    cin >> amount;

    while (amount > 0)
    {
        switch (amount)
        {
        case 500:
            note500++;
            amount -= 500;
            break;
        case 100:
            note100++;
            amount -= 100;
            break;
        case 50:
            note50++;
            amount -= 50;
            break;
        case 20:
            note20++;
            amount -= 20;
            break;
        case 10:
            note10++;
            amount -= 10;
            break;
        case 5:
            note5++;
            amount -= 5;
            break;
        case 2:
            note2++;
            amount -= 2;
            break;
        case 1:
            note1++;
            amount -= 1;
            break;
        default:
            cout << "Invalid amount!" << endl;
            return 1;
        }
    }

    cout << "Total number of notes:" << endl;
    cout << "500 = " << note500 << endl;
    cout << "100 = " << note100 << endl;
    cout << "50 = " << note50 << endl;
    cout << "20 = " << note20 << endl;
    cout << "10 = " << note10 << endl;
    cout << "5 = " << note5 << endl;
    cout << "2 = " << note2 << endl;
    cout << "1 = " << note1 << endl;

    return 0;
}
