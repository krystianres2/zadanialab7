

#include <iostream>
using namespace std;
float ciag(int n)
{
    if (n == 1)
        return 0;
     if (n == 2)
        return 0.5;
     if(n>2)
        return(-ciag(n - 1) * ciag(n - 2));


}
int main()
{
    int n;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> n;
    cout << n << " wyraz ciagu ma wartosc " << ciag(n) << endl;
}

