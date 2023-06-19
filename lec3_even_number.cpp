#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int sum_even = 0;
    int sum_odd  = 0;
    cout <<"enter the number you want to check"<<endl;
    cin >> n ;
    while(i<=n){        
        if (i%2==0)
        {
            cout <<"The given number is even"<<n<<endl;
            sum_even = sum_even + i;
            
        }
        else{
            cout << "The given number is:ODD"<<endl;
            sum_odd = sum_odd + i;
            
        }
        i = i + 1;
    }
    cout << "The odd sum is : "<<sum_odd<<endl; 
    cout << "The even sum is : "<<sum_even<<endl; 
}
