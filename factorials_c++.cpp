#include <iostream>

using namespace std;

int main()
{
   long long y = 1;
   long long x;
   long long z = 1;
   cout << "enter your number" <<endl;
   cin >> x;
   cout << "your numbers" << endl;
   while( z <= x)
    {
        y = y*z;
        z++;
    }
    cout << y << endl;
} 
