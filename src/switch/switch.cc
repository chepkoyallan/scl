#include <iostream>

using std::cin;
using std::cout;
void switch_demo()
{
    int answer;
    cout << "Enter number 0: to quit" << '\n';
    cin >> answer;
    while (answer > 0)
    {
        switch (answer)
        {
        case 1:
            cout << "You entered  1" << '\n';
            break;
        case 2:
        case 3:
            cout << "You entered  2 or 3" << '\n';
            break;
        case 4:
            cout << "You entered  4" << '\n';
        case 5:
            cout << "You entered  5" << '\n';
            break;
        default:
            cout << "You entered 1 - 5" << '\n';
            break;
        }
        cout << "Enter a number, 0 to quit" << '\n';
        cin >> answer;
    }
}
