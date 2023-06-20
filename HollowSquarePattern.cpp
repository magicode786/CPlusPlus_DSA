#include<iostream>
using namespace std;
int main()
{
    int patternSize = 0;
    cout << "Enter the PatternSize: "<<endl;
    cin >> patternSize;
    int i = 1;
    int j = 1;
    for (i = 1;i<=patternSize;i++)
    {
        for(j=1;j<=patternSize;j++)
        {
            if (i==1 || i==patternSize)
            {
                cout<< "*";
            }
            else if (j==1 || j==patternSize)
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout <<endl;
    }


}