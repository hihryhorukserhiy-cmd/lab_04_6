#include <iostream> 
#include <cmath> 
#include <iomanip>

using namespace std;

int main()
{
    double S, Sn;
    int k, i;

    S = 0;
    k = 1;
    while (k <= 20)
    {
        Sn = 0;
        i = k;
        while (i <= 40 - k)
        {
            Sn += (double)i * i;
            i++;
        }
        S += (1 + sqrt(Sn)) / ((double)k * k);
        k++;
    }
    cout << S << endl;

    S = 0;
    k = 1;
    do {
        Sn = 0;
        i = k;
        do {
            Sn += (double)i * i;
            i++;
        } while (i <= 40 - k);
        S += (1 + sqrt(Sn)) / ((double)k * k);
        k++;
    } while (k <= 20);
    cout << S << endl;

    S = 0;
    for (k = 1; k <= 20; k++)
    {
        Sn = 0;
        for (i = k; i <= 40 - k; i++)
        {
            Sn += (double)i * i;
        }
        S += (1 + sqrt(Sn)) / ((double)k * k);
    }
    cout << S << endl;

    S = 0;
    for (k = 20; k >= 1; k--)
    {
        Sn = 0;
        for (i = 40 - k; i >= k; i--)
        {
            Sn += (double)i * i;
        }
        S += (1 + sqrt(Sn)) / ((double)k * k);
    }
    cout << S << endl;

    return 0;
}
