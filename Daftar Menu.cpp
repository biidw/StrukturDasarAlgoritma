#include <iostream>
using namespace std;
int main() {

int kode, harga, jml, total, bayar, kembali;
char mad;

do  {
   
    cout << "       	  DAFTAR MENU DAN HARGA MIXUE            " << endl;
    cout << "====================================================" << endl;
    cout << ""<<endl;
    cout << " --------------------------------------------------" <<endl;
    cout << "|			 DAFTAR MENU		    |	  HARGA	   |" <<endl;
    cout << " --------------------------------------------------" <<endl;
    cout << "|  1. Ice Cream Cone				|  Rp.  8.000  |" <<endl;
    cout << "|  2. Boba Sundae					|  Rp. 16.000  |" <<endl;
    cout << "|  3. Hawaiian Fruit Tea			|  Rp. 22.000  |" <<endl;
    cout << "|  4. Lemon Earl Grey Tea			|  Rp. 12.000  |" <<endl;
    cout << "|  5. Mocha Milkshake				|  Rp. 16.000  |" <<endl;
    cout << "|  6. Creamy Mango Boba			|  Rp. 22.000  |" <<endl;
    cout << "|  7. Americano Coffee				|  Rp. 12.000  |" <<endl;
    cout << "|  8. Fresh Squeezed Lemonade		|  Rp. 10.000  |" <<endl;
    cout << "|  9. Oreo Sundae					|  Rp. 16.000  |" <<endl;
    cout << "| 10. Ice Cream Jasmine Tea		|  Rp. 13.000  |" <<endl;
    cout << "| 11. Coffee Cookies Sundae		|  Rp. 18.000  |" <<endl;
    cout << "| 12. Kiwi Smoothies				|  Rp. 15.000  |" <<endl;
    cout << "| 13. Red Bean Milk Tea			|  Rp. 19.000  |" <<endl;
    cout << "| 14. Coconut Jelly Milk Tea		|  Rp. 19.000  |" <<endl;
    cout << "| 15. Oats Milk Tea				|  Rp. 19.000  |" <<endl;
    cout << " --------------------------------------------------" <<endl;
    cout << " " << endl;
    cout << "\nPilih Menu = " ; cin >> kode;
                                
        switch (kode)  {
                                
			case 1:
            
			cout << '\n' << "Ice Cream Cone" << endl;
            harga = 8000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga       	  : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
                               
 			case 2:
            
			cout << '\n' << "Boba Sundae" << endl;
            harga = 16000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
                               
       
            case 3:
            
			cout << '\n' << "Hawaiian Fruit Tea" << endl;
            harga = 22000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
            
            case 4:
            
			cout << '\n' << "Lemon Earl Grey Tea" << endl;
            harga = 12000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 5:
            
			cout << '\n' << "Mocha Milkshake" << endl;
            harga = 16000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 6:
            
			cout << '\n' << "Creamy Mango Boba" << endl;
            harga = 22000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 7:
            
			cout << '\n' << "Americano Coffee" << endl;
            harga = 12000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 8:
            
			cout << '\n' << "Fresh Squeezed Lemonade" << endl;
            harga = 10000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 9:
            
			cout << '\n' << "Oreo Sundae" << endl;
            harga = 16000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 10:
            
			cout << '\n' << "Ice Cream Jasmine Tea" << endl;
            harga = 13000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 11:
            
			cout << '\n' << "Coffee Cookies Sundae" << endl;
            harga = 18000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 12:
            
			cout << '\n' << "Kiwi Smoothies" << endl;
            harga = 15000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 13:
            
			cout << '\n' << "Red Bean Milk Tea" << endl;
            harga = 19000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 14:
            
			cout << '\n' << "Coconut Jelly Milk Tea" << endl;
            harga = 19000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			
			case 15:
            
			cout << '\n' << "Oats Milk Tea" << endl;
            harga = 19000;
            cout << "Banyaknya yang ingin dipesan = " ; cin >> jml;
            
			total = harga * jml;
            cout << "Total Harga	      : Rp. " << total << endl;
            cout << "Dibayar              : Rp. " ; cin >> bayar;
            
			kembali = bayar - total;
            cout << "Kembali              : Rp." << kembali << endl;
            cout << " " << endl;
            
			cout << "Pesan menu tambahan? (Y/T) = " ; cin >> mad ;
            
			break;
			                   
            default:
            
			cout<<"Kode Yang Anda Masukan Tidak Tersedia";
            
			} 
        }
    
	while (mad/='Y');
    cout << "Terimakasih sudah melakukan pemesan. Silahkan menunggu pesanan anda..." ;
    
	return 0;
}
