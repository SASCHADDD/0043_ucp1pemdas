/*  1. deklarasi variabel adalah suatu cara dalam pemrogaman gunanya untuk memanggil variabel ke dalam step pemrogaman selanjutnya
 contoh deklarasi variael adalah :

 #include <iostream>
 using namespace std;
 
 
 int umur;
 string nama;
 char jenis_kelamin;
 
/* 2. conditional statment adalah cara untuk menampilkan sebuah data yang sesuai dengan ketentuan dari sang programmer,
jika hasilnya true maka program akan mengeluarkan output tertentu dan jika hasilnyya false maka program akan mengeluarkan output tertentu.
contoh conditional statement :
  #include <iostream>
using namespace std;

int main()
{
    int nMatematika, nBahasa, nFisika;
    string status; 
    float rerata;

    cout << "Nilai Matematika : " << endl;
    cin >> nMatematika;
    cout << "Nilai Bahasa : " << endl;
    cin >> nBahasa;
    cout << "Nilai Fisika : " << endl;
    cin >> nFisika;

    rerata = (nMatematika + nBahasa + nFisika) / 3;
    if (rerata > 60 || nMatematika > 70){
        status = "Lulus";
        if (nFisika >= 90) {
            status = "Lulusan terbaik";
        }
    }
    else {
        status = "Tidak lulus";
    }
    cout << "Nilai matematika" << nMatematika;
    cout << "Nilai bahasa: " << nBahasa; 
    cout << "Nilai Fisika: " << nFisika;
    cout << "Status kelulusan" << status; 
}

    3. struct dalah digunakan untuk membuat data agar lebih terstruktur.
    conoth struct :
    #include<iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};
 
   int main (){
        mahasiswa mhs;
        cout <<"Nomor Mahasiswa : ";
        cin >> mhs.nim;
        cout <<"Nama Mahasiswa :";
        cin >> mhs.nama;
        cout <<"Alamat Mahasiswa :";
        cin >> mhs.alamat;
         cout <<"Umur Mahasiswa :";
        cin >> mhs.umur;
    

            cout<<endl; 
            cout <<"\n NIM :"<< mhs.nim;
            cout <<"\n Nama :"<< mhs.nama;
            cout <<"\n Alamat :"<< mhs.alamat;
            cout <<"\n Umur :"<< mhs.umur;
    }

    4. prosedur dan fungsi adalah sebuah cara untuk membuat data lebih terstruktur.
    contoh prosedur dan fungsi: 
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(){
    int i;
    string nama[5];

    for (i = 1; i > 10; i+=10)
{
        cout << i << ". " << "SELAMAT PUASA" << endl;
    }
    cout << "Nilai i terakhir = " << i << endl;
  for (i = 0; i < 5; i++){
        cout << "Masukkan nama ke-" << i << ":";
        cin >> nama[i];
    }
     for (i = 0; i < 5; i++){
        cout << "Nama ke-" << i << ": " << nama[i] << endl;
    }

}

    5. Looping yaitu perulangan, looping ada 3 yaitu
    1) for ; digunakan untuk mengicrement kan data dan melakukan perulangan yang belum pasti jumlah datanya,biasanya
    for berada di awal.
    2) while ; digunakan untuk perulangan sudah pasti jumlah datanya.biasanya while berada di tengah.
    3. do while ; digunakan untuk perulangan 
    contoh looping :
    
#include <iostream>
using namespace std;

int main(){
    int bilangan;
    srand(time(0));
    bilangan = rand () %10;
    
    cout << "bilangan awal =" << bilangan << endl;
}   do {
    cout << "perulangan do...while" << endl;
    bilangan = rand %10;
    cout << "bilangannya =" << bilangan << endl;

} while (bilangan > 5)
}

  */

 