#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    cout <<"Enter the number to check for prime :"<<endl;
    cin >> number;
    int i = 2;
    while(i<+number)
    {
        if (number % i == 0){
            cout << "NO: The given number"<<number<<"is NOT prime" << endl;
            
        }
        else{
            cout << "YES : The given number"<<number<<"is prime" << endl;
            
        }
        i = i + 1;
    }

}