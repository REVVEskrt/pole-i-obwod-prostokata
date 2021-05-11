#include <iostream>

using namespace std;

int main()

{
    int a,b,p,obw;
    cout << "Pole prostokata a*b, obwod 2a+2b" << endl;
    cout << "wprowadz a: "; cin >> a;
    cout << "wprowadz b: "; cin >> b;


    obw= 2*a + 2*b;
    cout << "obwod prostokatu wynosi: " << obw << endl;

    p= a*b;
    cout << "pole prostokata wynosi: " << p << endl;


    return 0;
}
