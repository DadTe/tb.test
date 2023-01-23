#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;
    int x;
    cout << ("Enter x= ");
    cin >> x;
    int rez;
    for (int i = 1; i < 5; i++)
    {
        sum = (cos(sum) * log(i * x));
    }
    rez = sum / (x = 5 + 5);
    cout << "Y= " << sum << endl;

    system("pause");
    return 0;
}
