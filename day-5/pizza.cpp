#include <iostream>

using namespace std;
int main(){

    cout << "press 1 for PIZZA" << endl;
    cout << "press 2 for BURGER" << endl;
    cout << "press 3 for SANDWITCH" << endl;
    cout << "press 4 for PASTA" << endl;
    cout << "------------------------" << endl;

int type;
    int choice;
cout << "---------------------------" << endl;
    cout << "enter choice: ";
    cin >> choice;

    cout << "-----------------------------" << endl;


if(choice == 1)
{
    cout << "press 1 for margharita PIZZA" << endl;
    cout << "press 2 for onion PIZZA" << endl;
    cout << "press 3 for tomato PIZZA" << endl;
    cout << "press 4 for volcano PIZZA" << endl;
    cout << "press 5 for double cheese PIZZA" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter Choice: ";
    cin >> type;

    if(type == 1)
    {
        cout << "ypu ordered margharita PIZZA" << endl;
    }
    else if(type == 2)
    {
        cout << "you ordered onion PIZZA" << endl;
    }
    else if (type == 3)
    {
        cout << "you ordered tomato PIZZA" << endl;
    }
    else if (type == 4)
    {
        cout << "you ordered volcano PIZZA" << endl;
    }
    else if (type == 5)
    {
        cout << "you ordered double cheese PIZZA" << endl;
    }
    else 
    {
        cout << "this pizza type is not available" << endl;
    }
    cout << "-----------------------------" << endl;
}

else if (choice == 2)
{
    cout << "press 1 for aloo tikki BURGER" << endl;
    cout << "press 2 for double cheese BURGER" << endl;
    cout << "press 3 for panner BURGER" << endl;
    cout << "press 4 for veg grill BURGER" << endl;
    cout << "press 5 for veg cheese burst" << endl;
    cout << "----------------------------------" << endl;
    cout << "enter choice: ";
    cout >> type;

    if (type == 1)
    {
        cout << "you ordered aloo tikki BURGER" << endl;
    }
    else if (type == 2 )
    {
        cout << "you ordered double cheese BURGER" << endl;
    } 
    else if (type == 3)
    {
        cout << "you ordered paneer BURGER" << endl;
    }
    else if (type == 4)
    {
        cout << "you ordered veg grill BURGER" << endl;
    }
    else if (type == 5)
    {
        cout << "you ordered veg cheese burst" << endl;
    }
    else 
    {
        cout << "this BURGER type is not available" << endl;
    }
        cout << "---------------------------" << endl;
}

else if (choice == 3)
{
    cout << "press 1 for aloo tikki SANDWITCH" << endl;
    cout << "press 2 for double cheese SANDWITCH" << endl;
    cout << "press 3 for panner SANDWITCH" << endl;
    cout << "press 4 for veg grill SANDWITCH" << endl;
    cout << "press 5 for veg cheese burst SANDWITCH" << endl;
    cout << "----------------------------------" << endl;
    cout << "enter choice: ";
    cout >> type;

    if (type == 1)
    {
        cout << "you ordered aloo tikki SANDWITCH" << endl;
    }
    else if (type == 2 )
    {
        cout << "you ordered double cheese SANDWITCH" << endl;
    } 
    else if (type == 3)
    {
        cout << "you ordered paneer SANDWITCH" << endl;
    }
    else if (type == 4)
    {
        cout << "you ordered veg grill SANDWITCH" << endl;
    }
    else if (type == 5)
    {
        cout << "you ordered veg cheese burst" << endl;
    }
    else 
    {
        cout << "this SANDWITCH type is not available" << endl;
    }
        cout << "---------------------------" << endl;
}
// else if (choice == 4)
// {
//     cout << "you ordred PASTA" << endl;
// }

// else{
//     cout << "please select the valid choice...! " << endl;
// }

// cout << "---------------------------" << endl;

return 0;
 }



