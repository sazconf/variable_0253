#include <iostream>
using namespace std;

    // program untuk menghitung luas persegi panjang

int main() 
{    // begin

    // numeric(float, double, int) nPanjang, nLebar, nLuas
    float Panjang, lebar, luas;
    // display 'masukan panjang :'
    cout << "masukan panjang :";
    // accept nPanjang
    cin >> Panjang;
    // display 'masukan lebar :'
    cout << "masukan lebar :";
    // accept nLebar
    cin >> lebar;
    // compute nLuas = nPanjang * nLebar
    luas = Panjang * lebar;
    // display 'luas persegi panjang = ' + nLuas
    cout << "luas persegi panjang =" <<luas << endl;

} // end