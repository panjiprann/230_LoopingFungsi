#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350;

void input()
{
    cout << "masukkan jumlah Adidas = ";
    cin >> nAdidas;

    cout << "masukkan jumlah Puma = ";
    cin >> nPuma;

    cout << "masukkan jumlah New Balance = ";
    cin >> nNB;

    cout << "masukkan jumlah Compass = ";
    cin >> nCompass;

    cout << "masukkan jumlah Nike = ";
    cin >> nNike;

}

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike);
}

  void display(){

    cout << endl;
    cout << "==================" << endl;
    cout << endl;
    cout << "jumlah puma = " << nPuma << endl;
    cout << endl;
    cout << "Total Harga = Rp." << TotalHarga() << endl;

 }

int main()
{

}
