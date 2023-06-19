#include<iostream>
using namespace std;
int main()
{
    int PatternSize = 0;
    cout <<" Enter the Pattern Size for StarPattern"<<endl;
    cin >> PatternSize;
    int i = 1;
    int j=1;
    for (i = 1; i<=PatternSize; i++)
    {
        for (j=1;j<=PatternSize;j++){
            cout <<'*'<<" ";
        }
        cout<<endl;
    }
}