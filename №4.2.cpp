#include <iostream> // мнд
#include <string>

using namespace std;

long gcd04(long a, long b) {

if (a == b) {
return a;
}
if (a > b) {
long tmp = a;
a = b;
b = tmp;
}
return gcd04(a, b - a);
}


int main()
{
    long a,b;
    cin >> a >> b;

cout << gcd04(a,b) << endl;

return 0;
} 
