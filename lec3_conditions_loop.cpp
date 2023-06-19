#include<iostream>
using namespace std ;
int main()
{
    char c ;
    
    int cnt = 0;
    while(1){
        cin >> c ;
        if ((c>='a') && (c<='z')){
            cout <<"The given character is: lower case "<<c<<endl;
        }
        else if ((c>='A') && (c<='Z')){
            cout <<"The given character is: Upper case "<<c<<endl;
        }
        else if ((c>='0') && (c<='9')){
            cout <<"The given character is: digit  "<<c<<endl;
        }
         else {
        cout<<"not char"<<endl;
        }
    cnt = cnt + 1;
    }
   
    return 0;

    
}

    /*//int a, b,d;
    
    //cin >> a >> b;
    //cout << "a and b is" <<a<<" "<<b<<endl;
    //d = cin.get();
    //cout << "d is" <<d<<endl;
    //if (a>b){
    //    cout<<"a is greater than b"<<endl;
    //}
    //else{
      //  cout<<"b is greater than a"<<endl;
    
    //}*/