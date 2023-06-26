



	#include <iostream>
	#include <cstdlib>
	#include <ctime>
	
	int main() {
	    srand(time(0));
	    int angkaTebakan = rand() % 100 + 1;
	    int tebakan;
	    int jumlahTebakan = 0;
	    bool berhasil = false;
		
		std::cout << "      ----------------------------------------------" << std::endl;
	    std::cout << "     |   Selamat datang di Permainan Tebak Angka!   |" << std::endl;
	    std::cout << "      ---------------------------------------------- \n\n" << std::endl;
	
	    while (!berhasil) {
	    	
	        std::cout << "Pilih 1 angka dari 1-100 = ";
	        std::cin >> tebakan;
	        jumlahTebakan++;
	
	        if (tebakan == angkaTebakan) {
	            
				berhasil = true;
				
				std::cout << "\n" << std::endl;
				std::cout << "   ------------------------------------   " << std::endl;
	            std::cout << "Selamat! Anda berhasil menebak angka " << angkaTebakan << " dengan " << jumlahTebakan << " tebakan." << std::endl;
	            
	        } else if (tebakan < angkaTebakan) {
	        	
	         	std::cout << "\nCLUE : " << std::endl;
	            std::cout << "Angka tebakan terlalu rendah. Silahkan coba lagi! \n" << std::endl;
	            
	        } else {
	        	
				std::cout << "\nCLUE :" << std::endl;
	            std::cout << "Angka tebakan terlalu tinggi. Silahkan coba lagi! \n" << std::endl;
	        }
	    }
	
	    return 0;
	}












