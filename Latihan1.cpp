#include <iostream>         //file yang disertakan  line 1-2
using namespace std;        //program utama line 4-21

int main (){

    //numeric luas, P, L
    double Luas, P, L;
    //Display, "Masukkan Panjangnya : "
    cout << "Masukkan Panjangnya : ";
    //Accept P
    cin >> P;
    //Display, "Masukkan Lebarnya : "
    cout << "Masukkan Lebarnya : ";
    //accept L
    cin >> L;
    //Compute Luas = p*L
    Luas = P*L;
    //Display, "Luasnya : " + Luas
    cout << "Luasnya : " << Luas;    
}//end