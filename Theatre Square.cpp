#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cout << "enter n, m, a \n";
    cin >> n >> m >> a;

    int x = (n * m) / a;

    cout << x << endl;
// ((n + a - 1) / a) * ((m + a - 1) / a)
    return 0;
}