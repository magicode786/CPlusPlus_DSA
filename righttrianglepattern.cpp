#include<iostream>
using namespace std;
void rightTrianglePattern(int);
//void pattern321_func(int);
//void pattern1toN_func(int);
//void pattern1toN_func_cnt(int patternSize);
int main()
{
    int patternSize = 0;
    cout << "Enter the pattern size" <<endl;
    cin >> patternSize;
    rightTrianglePattern(patternSize);
    /*cout <<endl;
    cout <<endl;
    cout <<endl;
    pattern321_func(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toN_func(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toN_func_cnt(patternSize);*/
}


void rightTrianglePattern(int patternSize)
{   
    int i = 1;
    int j=1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<" "<<"*"<<" ";
        }
        cout<<endl;
    }
}