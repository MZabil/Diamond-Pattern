#include <iostream>
using namespace std;
int main()
{
	//Declaring variabels and checking input
    int row=1, col=1, N, space;
    cout<<"Enter a number: ";
    cin>>N;
    if (N%2==0)
    N = N - 1;
    
    //Printing increasing stars pattern
    space = N-2;
    do
    {
        for(col=1; col<=space; col++)
            cout<<" ";
        	space--;
        for(col=1; col<=(2*row-1); col++)
            cout<<"*";
        cout<<endl;
        row++;
    }
    while (row<=N/2+1);
    
    //Printing decreasing stars pattern
    space = N-(N/2+1);
    row=1;
    do
    {
        for(col=1; col<=space; col++)
            cout<<" ";
        	space++;
        for(col=1; col<=(N-2*row); col++)
            cout<<"*";
        cout<<endl;
        row++;
    }
    while (row<=N/2);
}
