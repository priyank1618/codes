#include <iostream>
using namespace std;
int fact(int n)
{
    // base case
    if (n == 0)
        return 1;

        
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "enter the num for factorial"<< endl;
    cin >> n;
    int c = fact(n);
    cout << c << endl;
    return 0;
}