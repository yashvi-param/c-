#include <iostream>

using namespace std;
int main(){

    int a = 50;
    int b = 80;
    int c = 70;

    if(a > b)
    {
        if(a > c)
        {
            cout << "a is greater" << endl;
        }
        else
        {
            cout << "c is greater" << endl;
        }
    }
    else
        {
            if(b > c)
            {
                cout << "b is grater" << endl;
            }
            else
            {
                cout << "c is greater" << endl;
            }
        }

        return 0;
}


