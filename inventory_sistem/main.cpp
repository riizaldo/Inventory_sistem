#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random, inventori_max=6;
    int pilihan;
    string titem;
    char y = 'y';
    vector <string> item  ;//{"pedang", "pistol"} // variabel vektor bernama tes, support c++11
    vector <string> k_item {"pedang", "pistol", "hulahop", "meriam"} ;
    vector <string>::iterator iter; //menjelajah vector seperti index
    /*item.push_back("bumerang"); // pengisian variabel  tes -> item1
    item.push_back("kipas"); // pengisian variabel  tes -> item2
    */
    cout << "\t Inventory Sistem" << endl;
    cout << "Jumlah Item Tersedia : 4" << endl;
    cout << "max kapasitas inventory : " << inventori_max ;

    while(y=='y'){

    cout << "\t\nInventory Sistem" << endl;
    cout << "Jumlah Item Tersedia : "<< inventori_max << endl;
    cout << "1. Tampilkan Inventory" << endl;
    cout << "2. Hapus Item" << endl;
    cout << "3. Tambah item" << endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> pilihan ;

    if(pilihan==1) {
        if(item.empty()) { //cek ksong atau tidak
            cout << "kosong belum ada item" << endl;
        }
        for(iter = item.begin();iter != item.end();iter++){  //size mengikuti elemen
            cout << *iter << endl; //sperti manggil pointer
        }
    }else if(pilihan==2) {
        if(item.empty()){
            cout << "kosong belum ada item" << endl;
        }
        else {
        int hapus;

            if(hapus<=item.size()) {
                cout << "hapus item ke - " ;
                cin >> hapus ;
                inventori_max++;
            }else{
                cout << "index kelebihan ";
            }
        //item.erase(item.begin()); //yang terhapus adalah yang pertama
        //item.erase(item.begin()+1); //yang terhapus adalah yang kedua
        item.erase(item.begin()+hapus-1); //yang terhapus adalah yang kedua
        }
    }else if(pilihan==3){
        //cout << "Masukkan nama item anda : " ;
        if(inventori_max>=1) {
        int rand();
        srand(time(NULL));
        random =(rand()%k_item.size());
//        random = 0+ (rand()%4)+1;
        titem = k_item[random];
        //cin >> titem;
        item.push_back(titem);
        cout << "Selamat anda mendapatkan item " << titem << endl;
        inventori_max--;
        }else{
            cout << "inventory penuh " << endl;
            }
    }
    cout << "apakah anda ingin kembali ke menu? (y/n)" ; cin >> y;
}



    /*cout << "\nItem setelah dihapus \n";
        for(iter = item.begin();iter != item.end();iter++){  //size mengikuti elemen
        cout << *iter << endl; //sperti manggil pointer
    }


    /*string input;
    cout << "inputan : "; cin >> input;
    item.push_back(input);
    */


    /*for(iter = item.begin();iter != item.end();iter++){  //size mengikuti elemen
        cout << *iter << endl; //sperti manggil pointer
    }

    cout << "\n \n";

    for(int i=0;i<item.size();i++){  //size mengikuti elemen
        cout << item[i] << endl;
    }

    if(item.empty()) { //cek ksong atau tidak
        cout << "kosong" << endl;
    }
*/
    // menghapus elemen vector


    /*cout << tes[0] << endl;
    cout << tes[1] << endl;
    cout << tes[2] << endl;
    cout << tes[3] << endl;
    cout << tes[4] << endl; */

    return 0;
}
