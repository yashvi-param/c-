#include<iostream>

using namespace std;

int main(){

int start,row;

cout << "enter the  starting number: ";
cin >> start;
cout << "enter the number of row: ";
cin >> row;

int num=start;

for (int i=1; i<=row; i++)
{
    for (int j=1; j<=i; j++)
    {
        cout << num << " ";
        num++;
    }
    
    cout << endl;
}

    return 0;
}