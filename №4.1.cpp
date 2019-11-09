#include <iostream> // ÍÎÊ
#include <string>

using namespace std;


long gcd(long a, long b)
{
    return b ? gcd(b, a % b) : a;
}
long lcm(long a, long b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    long a,b;
    cin >> a >> b;

cout << lcm(a,b) << endl;

return 0;
} 
