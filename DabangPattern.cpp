#include<iostream>
using namespace std;

int main()
{
    int PatternSize = 0;    
    cout <<" Enter the Pattern Size for StarPattern"<<endl;
    cin >> PatternSize;
    cout <<endl;
    cout <<endl;
    int row = 1;
    int n = PatternSize;
    
   while(row<=PatternSize+1)
   {
    
    //1st Triagnle
    int col = 1;
    while(col<=(n+1-row))
    {
        cout << col;
        cout << " ";
        col = col + 1;
    }
     //Print Star - 2nd Triangle
    int star = (2*row - 2);
    while(star)
    {
        cout << "*";
        cout << " ";
        star = star - 1; 
    }
    int start = n-row+1;
    
    while(start)
    {
        cout << start;
        cout << " ";
        start = start - 1;
    }
    
    cout << endl;
    row  = row +1;

   }

}