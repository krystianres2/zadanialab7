

#include <iostream>
using namespace std;
void zamien(int a)
{
    if (a == 0)return;
    zamien(a / 2);
    cout << a % 2;
}

int main()
{
    int a;
    cout << "Podaj liczbe naturalna: ";
    cin >> a;
    cout << "Postac binarna liczby " << a << ": ";
    if (a == 0)
        cout << 0;
    else
        zamien(a);
    cout << endl;

}

