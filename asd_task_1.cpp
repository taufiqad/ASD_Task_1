/**
    NAMA  : Taufiq Akmal Dawami
    NIM   : 1301164426
    KELAS : IF 40 - 02
**/


#include <iostream>
#include <stdlib.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double persentase_uts, persentase_uas, persentase_tubes, minimal_a, minimal_b, minimal_c, minimal_d;
// YOUR CODE ENDS HERE
//=================================================

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
    main_menu();
    return 0;
}

void main_menu(){
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
      daftar menu:
      1. set standar index nilai
      2. set proporsi nilai
      3. input nilai
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Menu Utama \n\n 1. Set Standar Index Nilai \n 2. Set Proporsi Nilai \n 3. Input Nilai \n 4. Keluar \n\n";
    cout << "Pilih menu : ";
    cin >> pilihan;

    do {
        switch (pilihan) {
            case 1:
                system("CLS");
                set_standar();
                system("CLS");
                main_menu();
            case 2 :
                system("CLS");
                set_proporsi_nilai();
                system("CLS");
                main_menu();
            case 3 :
                system("CLS");
                input_nilai();
                system("PAUSE");
                system("CLS");
                main_menu();
        }
    } while (pilihan != 4);
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    do {
        cout << "**NOTE**\n- Total Persentase Harus 100 ! \n- Input Persentase Dalam Persen ! \n\nMasukkan Persentase UTS : ";
        cin >> persentase_uts;
        cout << "Masukkan Persentase TUBES : ";
        cin >> persentase_tubes;
        cout << "Masukkan Persentase UAS : ";
        cin >> persentase_uas;
    } while (persentase_uts + persentase_tubes + persentase_uas != 100);
    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Standar Nilai A : ";
    cin >> minimal_a;
    cout << "Standar Nilai B : ";
    cin >> minimal_b;
    cout << "Standar Nilai C : ";
    cin >> minimal_c;
    cout << "Standar Nilai D : ";
    cin >> minimal_d;
    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    uts=uts*persentase_uts/100;
    tubes=tubes*persentase_tubes/100;
    uas=uas*persentase_uas/100;

    if (uts + uas + tubes >= minimal_a) {
        index = 'A';
    } else if (uts + uas + tubes >= minimal_b) {
        index = 'B';
    } else if (uts + uas + tubes >= minimal_c) {
        index = 'C';
    } else if (uts + uas + tubes >= minimal_d) {
        index = 'D';
    } else {
        index = 'E';
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}

void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Nilai\n" << endl;
    cout << "Input UTS : ";
    cin >> uts;
    cout << "Input TUBES : ";
    cin >> tubes;
    cout << "Input UAS : ";
    cin >> uas;
    cout << "\n\nIndex : " << hitung_index(uts, uas, tubes) << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "\nTerima Kasih";
    cout << "\n1301164426";
    cout << "\nTaufiq Akmal Dawami";
    exit(0);
    // YOUR CODE ENDS HERE
    //=================================================
}
