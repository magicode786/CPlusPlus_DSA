#include<iostream>
using namespace std;
int main()
{
    int length = 0;
    int breadth = 0;
    int area = 0;
    int perimeter = 0;
    cout << "Enter the length and breadth: "<<endl;
    cin >> length;
    cout << "Enter the breadth: "<<endl;
    cin >> breadth;
    area = length * breadth;
    perimeter = 2*(length+breadth);
    cout << "The area of the rectangle is :"<<area<<endl;
    cout << "The perimeter of the rectangle is :"<< perimeter<<endl;


}