#include<iostream>
using namespace std;
void pattern123_func(int);
void pattern321_func(int);
void pattern1toN_func(int);
void pattern1toN_func_cnt(int);
void patternNcol_func_cnt(int);
void pattern1toNCol_func_cnt(int);
void pattern1toNColminus_func_cnt(int );

int main()
{
    int patternSize = 0;
    cout << "Enter the pattern size" <<endl;
    cin >> patternSize;
    pattern123_func(patternSize);
    cout <<endl;
    cout <<endl;
    cout <<endl;
    pattern321_func(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toN_func(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toN_func_cnt(patternSize);
    cout <<endl;
    cout <<endl;
    patternNcol_func_cnt(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toNCol_func_cnt(patternSize);
    cout <<endl;
    cout <<endl;
    pattern1toNColminus_func_cnt(patternSize);
}


void pattern123_func(int patternSize)
{   
    int i = 1;
    int j=1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=1;j<=patternSize;j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern321_func(int patternSize)
{   
    int i = 1;
    int j=1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=patternSize;j>=1;j--)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern1toN_func(int patternSize)
{   
    int i = 0;
    int j=1;
    for (i=0;i<=2*patternSize;i=i+patternSize)
    {
        for (j=1;j<=patternSize;j++)
        {
            cout<<" "<<i+j<<" ";
        }
        cout<<endl;
        
    }
}

void pattern1toN_func_cnt(int patternSize)
{   
    int i = 1;
    int j=1;
    int count = 1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=1;j<=patternSize;j++)
        {
            cout<<" "<<count<<" ";
            count++;
        }
        cout<<endl;
        
        
    }
}

void patternNcol_func_cnt(int patternSize)
{   
    int i = 1;
    int j=1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern1toNCol_func_cnt(int patternSize)
{   
    int i = 1;
    int j=1;
    int count = 1;
    for (i=1;i<=patternSize;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<" "<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }
}

void pattern1toNColminus_func_cnt(int patternSize)
{   
    int i = 1;
    int j=1;
    
    for (i=1;i<=patternSize;i++)
    {
        int count = i;
        for (j=1;j<=i;j++)
        {
            cout<<" "<<count<<" ";
            //count = count + 1;
            count = count - 1; //or  i-j+1
        }
        cout<<endl;
        count = count - 1;

    }
}