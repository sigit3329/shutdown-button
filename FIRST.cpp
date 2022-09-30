#include <iostream>

using namespace std;

int main(){
	system("color c");
	cout<<"\n\t	|=======================================|\n";
	cout<<"\t	|					|\n";
	cout<<"\t	|	    SIGIT CORPORATION		|\n";
	cout<<"\t	|					|\n";
	cout<<"\t	|=======================================|\n";
	
	cout<<"\n[1] Shutdown biasa";
	cout<<"\n[2] Restart biasa";
	cout<<"\n[3] Shutdown ketika dinyalakan kembali membuka aplikasi yang terbuka saat shutdown";
	cout<<"\n[4] Restart ketika dinyalakan kembali membuka aplikasi yang terbuka saat restart";
	cout<<"\n[5] Shutdown dalam waktu 1 Jam";
	cout<<"\n[6] Shutdown dalam waktu 3 Jam";
	cout<<"\n[7] Shutdown dalam waktu 6 Jam";
	cout<<"\n[8] Restart dalam waktu 1 Jam";
	cout<<"\n[9] Restart dalam waktu 3 Jam";
	cout<<"\n[10] Restart dalam waktu 6 Jam";
	cout<<"\n[11] Masuk BIOS";
	cout<<"\n[12] Hibernate";
	cout<<"\n[13] BATALKAN SHUTDOWN";
	
	int input;
	cout<<"\n\n\tInput [1-13]: ";
	cin>>input;
	
	switch (input)
	{
		case 1:
			system("shutdown -s -t 0");
			break;
		case 2:
			system("shutdown -r -t 0");
			break;
		case 3:
			system("shutdown -sg -t 0");
			break;
		case 4:
			system("shutdown -g -t 0");
			break;
		case 5:
			system("shutdown -s -t 3600");
			break;
		case 6:
			system("shutdown -s -t 10800");
			break;
		case 7:
			system("shutdown -s -t 21600");
			break;
		case 8:
			system("shutdown -r -t 3600");
			break;
		case 9:
			system("shutdown -r -t 10800");
			break;
		case 10:
			system("shutdown -r -t 21600");
			break;
		case 11:
			system("shutdown -r -o -t 0");
			break;
		case 12:
			system("shutdown -h");
			break;
		case 13:
			system("shutdown -a");
			
	}
}
