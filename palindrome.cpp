#include<iostream>
using namespace std;

void pyramidALL(int);
int main()
{
    int PatternSize = 0;    
    cout <<" Enter the Pattern Size for StarPattern"<<endl;
    cin >> PatternSize;
    cout <<endl;
    cout <<endl;
    //pyramidALL(PatternSize);
    int row = 1;
    while(row <=PatternSize)
    {
        //Print Space
        int space = PatternSize - row;
        while(space)
        {
            cout << " ";
            space = space - 1; 
        }
        //print 2nd traingle
        int col = 1;
        while(col<=row)
        {
            cout << col;
            col = col + 1;
        }
        //print 3rd triangle
        //int col = 0;
        int start = row-1;
        while(start)
        {
            cout << start;
            start = start - 1;
        }
        cout <<endl;
        row = row +1 ;
        
    }
}