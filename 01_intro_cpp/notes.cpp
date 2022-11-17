#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// Comma operator ( , )
int main()
{
    int a,b;
    a = (b=3, b+2);
    cout << a << endl;
    cout << b << endl;
    return 0;
}

// conditional operator (condition ? result1 : result2)

int main ()
{
  int a,b,c;

  a=2;
  b=7;
  c = (a>b) ? a : b;

  cout << c << '\n';
}