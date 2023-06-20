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
        //print 1st traingle
        int col = 1;
        while(col<=row)
        {
            cout << col;
            col = col + 1;
        }
        //print 2nd triangle
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
   
  

void pyramidALL(int PatternSize)
{
    int i = 1;
    int j=1;
    int count = PatternSize ;
    char space = ' ';
    char star = '*';
    for (i=1;i<=PatternSize;i++)
    {
        //cout<<"Rafeek"<<endl;
        cout << string(count, space)<< "  ";
        cout << string (i,star)<<" ";
        cout << string(count, space)<< "  ";
        count = count - 1;
        cout <<endl;
    }
    /*
      cnt = self.pattern_size
        for row in range(0,self.pattern_size+1):
            print(" "*(cnt), end='')
            print("* "*row)
            cnt = cnt -  1
    */


    
}

