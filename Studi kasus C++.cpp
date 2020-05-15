#include<iostream> //berguna sebagai standar input output
#include<unistd.h> //untuk Fungsi Sleep
using namespace std;

int develop_data(){
	cout<<"Rosliana Hakim\n";
	cout<<"F1B019128\n";
	cout<<"<><><><><><><><><><><><><><><><><><><><><><><>\n";
	cout<<"============ Program Aplikasi Grab ===========\n";
	cout<<"<><><><><><><><><><><><><><><><><><><><><><>\n\n";
}

void keluar()
{
 cout<<"\n======================================"<<endl;
 cout<<"\n======================================"<<endl;
 cout<<"\n==============TERIMA KASIH============"<<endl;
 cout<<"\n====Sudah menggunakan layanan kami===="<<endl;
 cout<<"\n======================================"<<endl;
}

int main() {    

   develop_data();
   
    //login
	string NIM = "F1B019128";
	string pw = "020100";
	string NIM_in;
	string pw_in;
	int login;
	
	//GO
	
	int client;
	int gps;
	int total;
	int total1;
	string tujuan;
	int i;
	int jarak;
	int bayar;
	int diskon;
	int akhir;
	int saldo=1000000;
	
	//Y/N
	int Y,y,N,n;
	
	//tarif
	int food;
	int food1 = 25000;
	int food2 = 30000;
	int food3 = 75000;
	int pil;
	int pil1 =30000;
	int pil2 =15000;
	int pil3 =15000;
	
	
   int pilihmenu;
   int layanan;

 

   cout << "Pilih Bahasa\n";  
   cout << "1.Bahasa Indonesia\n" ;
   cout << "2.English\n";
   cout << "1/2 :\n" ; cin>>pilihmenu; 
   switch(pilihmenu)
   { case 1:
   		system("cls");      
        cout << "=====Login=====\n";
		cout << "Masukkan NIM anda : "; cin >> NIM_in;
		cout << "\nMasukkan Password anda : "; cin >> pw_in; 
        if (NIM_in == NIM && pw_in == pw)
		{    
		menuutama:
    	system("cls");        
       	cout << "=======Menu Utama======\n" << endl;            
       	cout << "     Pelayanan Grabe      " << endl;            
       	cout << " =====================\n\n";    
		cout << " \n\n1.  GrabBiKe" << endl; 
		cout << " \n\n2.  GrabCar" << endl; 
		cout << " \n\n3.  grabFood" << endl;  
		cout << " \n\n4.  GrabSend" << endl; 
		cout << " \n\n5.  Keluar"<<endl; 
     	cout << " \n\nMasukan Pilihan =  "; cin>>layanan;
     		switch(layanan)
     		{
     		case 1 : 
				 system("cls"); 
     				cout << "     Lakukan Pemesanan GrabBike\n";
     				cout << "================================\n\n"; 
     				cout << "\nTarif Grabbike = Rp. 7.000/km";
					cout << "\nHidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<" Berhasil Dihidupkan...";
							cout<<" Masukkan Jumlah Penumpang : ";cin>>client;
							cout << "MASUKAN TUJUAN ANDA : ";
		                    cin>>tujuan;
		                    cout << "JARAK : ";
	                       	cin>>jarak;
		                    bayar=jarak*7000;
                            cout<<"bayar"<<bayar;
		                    if ((bayar>=50000)){
                            diskon=bayar*0.28;
                            akhir=bayar-diskon;
                            cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                            }else {
                            akhir=bayar;
                            }
                            cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                    cout<<"sisa saldo anda =  \n"<<(saldo-7000*jarak)<<endl;	
						
							cout<<"\nTunggu Pengemudi Di Lokasi Anda";
							sleep(5);
							goto menuutama;
							break;
							
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
						}
					break;
					 
				case 2 : 
				 system("cls"); 
     				cout << "     Lakukan Pemesanan GrabCar\n";
     				cout << "================================\n\n";
					cout << "\nHidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<"\nBerhasil Dihidupkan";
				system ("cls");
					cout<<" Lakukan pemesanan Grabcar\n";
					cout<<"===============================\n\n";
					cout<<" n\n\n1.  Unram - Ampenan ";
					cout<<" \n2. Unram - Gomong ";
					cout<<" \n3. Unram - Kekalik";
					cout<<" \n\npilih Tujuan anda : ";cin>>pil;
					switch(pil){
						case 1:
							system("cls");
							cout<<"\n    Anda memilih unram - Ampenan ";
							cout<<"\n===============================\n\n";
							cout<<"\nHarga Rp."<<pil1;
							cout<<"\pesan Anda sedang di proses.....";
							cout<<"\nMasukkan Jumlah Penumpang : ";cin>>client;
							 
		                    cout << "JARAK : ";
	                       	cin>>jarak;
		                    bayar=jarak*30000;
                            cout<<"bayar"<<bayar;
		                    if ((bayar>=50000)){
                            diskon=bayar*0.28;
                            akhir=bayar-diskon;
                            cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                            }else {
                            akhir=bayar+30000;
                            }
                            cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                    cout<<"sisa saldo anda =  \n"<<saldo-(30000*jarak)<<endl;	
							cout<<"\nTunggu Pengemudi Di Lokasi Anda";
							sleep(5);
							goto menuutama;
							break;
							
								case 2:
									system("cls"); 
									cout <<"\n     Anda Memilih Tujuan Unam - Gomong";
									cout <<"\n================================\n";
									cout <<"\nHarga Rp."<<pil2;
									cout <<"\nPesanan Anda Sedang Di Proses.....";
								
		                            cout << "JARAK : ";
	                            	cin>>jarak;
		                            bayar=jarak*15000;
                                    cout<<"bayar"<<bayar;
		                            if ((bayar>=50000)){
                                    diskon=bayar*0.28;
                                    akhir=bayar-diskon;
                                    cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                                    }else {
                                    akhir=bayar+15000;
                                    }
                                    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                            cout<<"sisa saldo anda =  \n"<<saldo-(15000*jarak)<<endl;
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									sleep(5);
									goto menuutama;
									break;
									
								case 3:
									system("cls"); 
									cout <<"\n     Anda Memilih Tujuan Unram-Kekalik";
									cout <<"\n================================\n\n";
									cout <<"\nHarga Rp."<<pil3;
									cout <<"\nPesanan Anda Sedang Di Proses.....";
								
		                            cout << "JARAK : ";
	                            	cin>>jarak;
		                            bayar=jarak*15000;
                                    cout<<"bayar"<<bayar;
		                            if ((bayar>=50000)){
                                    diskon=bayar*0.28;
                                    akhir=bayar-diskon;
                                    cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                                    }else {
                                    akhir=bayar+15000;
                                    }
                                    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                            cout<<"sisa saldo anda =  \n"<<saldo-(3000*jarak)<<endl;
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									sleep(5);
									goto menuutama;
									break;	
			
					}		
						
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
						}
					break;
					
      			case 3: 
      				system("cls"); 
     				cout << "     Lakukan Pemesanan GrabFood\n";
     				cout << "================================\n\n"; 
					cout << "Hidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							system("cls"); 
     						cout << "     Lakukan Pemesanan GrabFood\n";
     						cout << "================================\n\n"; 
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<"\nBerhasil Dihidupkan";
							system("cls"); 
     						cout << "     Lakukan Pemesanan GrabFood\n";
     						cout << "================================\n\n"; 
							cout << "\n\n\n1. Bakso Merecon";
							cout << "\n2. Ayam Geprek";
							cout << "\n3. Paket kfc "; 
							cout<<"\n\nPilih Pesanan Makanan Anda : ";cin>>food;
							switch(food){
								case 1:
									system("cls"); 
									cout <<"\n     Anda Memesan Bakso Merecon";
									cout <<"\n================================\n\n";
									cout <<"\nHarga Rp."<<food1;
									cout <<"\nPesanan Anda Sedang Di Proses.....";
									cout<<" Masukkan jumlah pesanan Anda ";
									cin>>i;
									cout << "MASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "JARAK : ";
	                            	cin>>jarak;
		                            bayar=jarak*5000 +(i*25000);
                                    cout<<"bayar"<<bayar;
		                            if ((bayar>=50000)){
                                    diskon=bayar*0.28;
                                    akhir=bayar-diskon;
                                    cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                                    }else {
                                    akhir=bayar+25000;
                                    }
                                     cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                            cout<<"sisa saldo anda =  \n"<<saldo-(5000*jarak)-(i*25000)<<endl;
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									sleep(5);
									goto menuutama;
									break;
								
								case 2:
									system("cls"); 
									cout <<"\n     Anda Memesan Ayam Geprek";
									cout <<"\n================================\n";
									cout <<"\nHarga Rp."<<food2;
									cout <<"\nPesanan Anda Sedang Di Proses.....";
									cout<<" Masukkan jumlah pesanan Anda ";
									cin>>i;
									cout << "MASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "JARAK : ";
	                            	cin>>jarak;
		                            bayar=jarak*3000 + (i*30000);
                                    cout<<"bayar"<<bayar;
		                            if ((bayar>=50000)){
                                    diskon=bayar*0.28;
                                    akhir=bayar-diskon;
                                    cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                                    }else {
                                    akhir=bayar+30000;
                                    }
                                    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                            cout<<"sisa saldo anda =  \n"<<saldo-(3000*jarak)- (i*30000)<<endl;
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									sleep(5);
									goto menuutama;
									break;
									
								case 3:
									system("cls"); 
									cout <<"\n     Anda Memesan paket kfc";
									cout <<"\n================================\n\n";
									cout <<"\nHarga Rp."<<food3;
									cout <<"\nPesanan Anda Sedang Di Proses.....";
									cout<<" Masukkan jumlah pesanan Anda ";
									cin>>i;
									cout << "MASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "JARAK : ";
	                            	cin>>jarak;
		                            bayar=jarak*5000  + (i*75000);
                                    cout<<"bayar"<<bayar;
		                            if ((bayar>=50000)){
                                    diskon=bayar*0.28;
                                    akhir=bayar-diskon;
                                    cout<<endl<<"selamat anda mendapatkan diskon 28%"<<endl;
                                    }else {
                                    akhir=bayar+75000;
                                    }
                                    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;
		                            cout<<"sisa saldo anda =  \n"<<saldo-(5000*jarak)-(i*75000)<<endl;
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									sleep(5);
									goto menuutama;
									break;
							}
							
							
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
					
						}
					
					break;	
    	     	
    	     	
    	     	case 4 : 
				 system("cls"); 
     				cout << "     Lakukan Pemesanan GrabSend\n";
     				cout << "================================\n\n"; 
     				cout << "Tarif  GrabSend = Rp. 5.000/kg";
					cout << "Hidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<"\nBerhasil Dihidupkan";
							cout<<"\nMasukkan Berat Paket Anda : ";cin>>jarak;
							
							bayar = jarak * 5000 -(i*5000);
							cout<<" bayar"<<bayar;
							if((bayar >= 50000)){
							diskon=bayar*0.28;
							akhir =bayar-diskon;								
							cout<<"\nAnda Mendapat Diskon 28%"<<endl;
							}else {
							akhir=bayar;
							
							}
							cout<<endl<<" jadi total pembayarannya = "<<akhir<<endl;
							cout<<" sisa saldo anda = \n"<<(saldo-5000*jarak)-(i*5000)<<endl;						
							cout<<"\nTunggu Pengemudi Di Lokasi Anda";
							sleep(5);
							goto menuutama;
							break;
							
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
					
						}
					
					break;
    	     	
    	     	case 5:
    	     		system("cls"); 
    	     		keluar();
    	     		
		} // Tutup Menu Utama
           
      		
    return 0;

  case 2 : system("cls");
		cout << "SORRY STILL IN THE MAKING PLANNING"	;
		break;	
 
   }else {            
            cout << "\n*******************************\n";            
            cout << "Username / Password Salah! \n";
     		cout << "*******************************\n\n";            
            
       		}  
}
    
     
   
 }// Tutup Kurung Int Main
