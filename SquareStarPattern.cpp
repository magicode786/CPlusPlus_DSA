#include<iostream>
using namespace std;
void squarepattern(int);
void patternA(int);
void pyramid(int);
void pyramidALL(int);
int main()
{
    int PatternSize = 0;
    cout <<" Enter the Pattern Size for StarPattern"<<endl;
    cin >> PatternSize;
    cout <<endl;
    squarepattern(PatternSize);
    cout << endl;
    cout << endl;
    patternA(PatternSize);
    cout << endl;
    cout << endl;
    pyramid(PatternSize);
    cout << endl;
    cout <<endl;
    pyramidALL(PatternSize);
    
}

void squarepattern(int PatternSize)
{
    int i = 1;
    int j=1;
    for (i = 1; i<=PatternSize; i++)
    {
        //char val = 'A';
        for (j=1;j<=PatternSize;j++){
            cout <<'*'<<" ";
        }
        cout<<endl;
        //val = val + 1;
    }
}

void patternA(int PatternSize)
{
    int i = 1;
    int j=1;
    for (i = 1; i<=PatternSize; i++)
    {
        char val = 'A' + i- 1;
        for (j=1;j<=PatternSize;j++){
            cout <<val<<" ";
        }
        cout<<endl;
    }
}

void pyramid(int PatternSize)
{
    int i = 1;
    int j=1;
    int count = 1;
    for (i = 1; i<=PatternSize; i++)
    {
        for (j=PatternSize;j>=i;j--){
            //out<<" ";
            cout <<"*";           
            
        }       
        cout<<endl;
    }
}

