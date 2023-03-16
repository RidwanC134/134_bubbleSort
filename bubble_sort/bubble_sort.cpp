#include <iostream>
using namespace std;

int a[20];              //Deklarasi array a dengan ukuran 20
int n;                  //Deklarasi variable n untuk menyimpan banyaknya elemen pada array

void input() {          //procedure untuk input
    while (true) {      //Looping
        cout << "Masukan banyaknya elemen padad array : ";              //Output ke layar
        cin >> n;       //Input dari pengguna
        if (n <= 20)    //Jika n kurang dari atau sama dengan 20
            break;      //Keluar dari loop
        else {          //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    //Output ke layar
        }
    }
    cout << endl;                                       //Output baris kosong
    cout << "===================" << endl;              //Output ke layar
    cout << "Masukan Elemen Array" << endl;             //Output ke layar
    cout << "===================" << endl;              //Output ke layar
}

int main()
{
    std::cout << "Hello World!\n";
}