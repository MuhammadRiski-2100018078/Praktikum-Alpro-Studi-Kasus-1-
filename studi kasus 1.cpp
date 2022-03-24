// Studi Kasus 1 
// Nama Kelompok : 
// Muhammad Riski 2100018078 , Septania Shalihati 2100018070 ,Salsabila Putri Amara 2100018100
#include <iostream>
#include <string>
using namespace std;
struct data_BBM{     // struct deklarasi sebuah tipe data
    string kode_BBM;
    string nama_BBM;
    int harga;
};
int main() // maksud dari int di depan main adalah jenis tipe data yang akan di kembalikan nilainya.
{
    string nama, jenis; // tipe data string : befungsi sebagai penampung/wadah dari karakter 
    data_BBM BBM;
    string kode_BBM[2]={"1", "2"};
    string nama_BBM[2]={"Pertalite", "Pertamax"};
    int n, total=0;
    float harga;

    cout << "=====SPBU Pertamina Tugu 44.55215====="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode        Jenis BBM         Harga "<<endl;
    cout << " 1          Pertalite      Rp. 7.000,00"<<endl;
    cout << " 2          Pertamax       Rp. 9.000,00"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    
    // Percabangan else if 
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 7.0000/liter";
        jenis = "Pertalite";
        harga = 7000;
    }
    else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 9.000/liter";
        jenis = "Pertamax";
        harga = 9000;
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout<<"Nama : "; cin>>nama;
        cout << "Jumlah liter    : "; cin >> n;
        total = n*harga;
    cout<< endl;
    cout<<"-------------------SPBU Pertamina Tugu 44.55215---------------------------"<<endl;
    cout<<"Nama pelanggan : "<<nama<<endl;
    cout<<"Jenis BBM      : "<<jenis<<endl;
    cout<<"Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout<<"Jumlah liter   : "<<n<<endl;
    cout<<"Total harga    : Rp. "<<total<<",00"<<endl;
    cout<<"======================================================"<<endl;

    return 0; // untuk mengakhiri eksekusi dari fungsi , dapat juga memberikan nilai pada saat akhir function kepada pemanggil
}
