// File name: exercise_3
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: 
#include <iostream>
void showmenu();

int main()
{
    using namespace std;
    char choice;
    showmenu();
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'c':
            cout << "You chose carnivore.";
            break;
        case 'p':
            cout << "You chose pianist.";
            break;
        case 't':
            cout << "You chose tree.";
            break;
        case 'g':
            cout << "You chose game.";
            break;
        default:
            cout << "Please enter c, p, t, or g: ";
            cin >> choice;
        }
        if (choice == 'c' || choice == 'p' || choice == 't' || choice == 'g' || choice == 'q')
            break;
    }
    cin.get();
    cin.get();
    return 0;
}

void showmenu()
{
    using namespace std;
    cout << "Please enter one of the following choices:\n"
            "c) carnivore       p) pianist\n"
            "t) tree            g) game\n"
            "enter 'q' to quit...\n";
}
