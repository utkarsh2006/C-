
#include<iostream>
using namespace std;
namespace first{
    int x = 1;

}

namespace second{
    int x = 3;
}
int main(){
 int x = 5;
 int y =  6;
int sum = x + y;
 cout  << y << endl;

cout  << x << endl;
 cout  << sum << std::endl;
 double gpa = 6.9 ;
 char grade = 'A';
 cout  << gpa << endl;
cout  << grade << endl;
  bool student = true;
 cout  << student << endl;
 string name = "utkarsh";
 cout  << name << endl;
    cout  << "Hello World " << name << '\n';

   const  double PI = 3.1469;
    double radius = 10;
    double circumference = 2* PI * radius;
    cout  << PI << std::endl;
    cout << circumference << " cm" << '\n';
    cout << first::x << '\n';
    cout << second::x << '\n';
    cout << 3+4 << endl;
    cout << 3*4 << endl;
    cout << 3-4 << endl;
    cout << 3/4 << endl;
cout << (int)  'f' << endl;
cout << (char) ('f'+ 7) << endl;
int u = 5, t = 8;
cout << u * t << endl;
u = x+y;
t = x*y ;
cout << u << endl;
cout << t << endl;
cout << (bool)0 << endl;
cout << (bool)123 << endl;
int w = 69;
w += 1;
cout << w  << endl;
w -= 1;
cout << w  << endl;
w *= 2;
cout << w  << endl;
w /=3;
cout << w  << endl;
w %= 6;
cout << w  << endl;
int a = 34 , b =12 ;
cout << ++a << endl;
cout << b++  << endl;
cout << "INCREMENT DONE" << endl;
cout << a << endl;
cout << b << endl;
int s ;
cin >> s ;
cout << s << endl;
cout << (char) ('!') << endl;








    return 0;
}

