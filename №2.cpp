#include <iostream>
using namespace std;

long fibonachi(long a) {

if (a < 2)return a;

return fibonachi(a - 1) + fibonachi(a - 2);
}


int main()
{
int a;
cin >> a;
for (int count=0; count < a; ++count)
cout << fibonachi(count) << " ";

return 0;
}
