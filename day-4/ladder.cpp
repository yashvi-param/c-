#include <iostream>

using namespace std;

int main()
{
    

    cout << "Press 1 for pizza" << endl;
    cout << "Press 2 for Burger" << endl;
    cout << "press 3 for SANDWITCH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "--------------------------------------" << endl; 

    int choice;
    cout << "-------------------------------" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        cout << "--------------------------------" << endl;

    if(choice == 1)
    {
        cout << "your ordered PIZZA" << endl;
    }
    else if(choice == 2)
    {
        cout << "your ordered BURGER" << endl;
    }
    else if(choice == 3)
    {
        cout << "your ordered SANDWITCH" << endl;
    }
    else if(choice == 4)
    {
        cout << "your ordered PASTA" << endl;
    }
    else 
    {
        cout << "plese select the valid choice" << endl;
    }

    cout << "-----------------------" << endl;

    return 0;
}




