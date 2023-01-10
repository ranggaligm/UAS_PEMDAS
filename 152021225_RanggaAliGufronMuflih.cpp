#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

using namespace std;

int main () {
    float x[20];
    float y[20];
    float xy[20];
    float x2[20];
    float y2[20];
    float n;
    float r;
    float d;
    float totalx;
    float totaly;
    float totalxy;
    float totalx2;
    float totaly2;

    cout << "Masukkan jumlah Data = "; 
	cin >> n;
    cout << endl;
     for (int i = 1; i <= n; i++) {
        do {
            cout << "Data x " << "[" << i << "]" << " = "; cin >> x[i];
            x2[i] = x[i]*x[i];
            totalx = totalx + x[i];
        
        } while (x[i] < 0);
        
        do {
            cout << "Data y " << "[" << i << "]" << " = "; cin >> y[i];
            y2[i] = y[i]*y[i];
            totaly = totaly + y[i];
            
        } while (y[i] < 0);

        xy[i] = x[i]*y[i];
        totalxy = totalxy + xy[i];
        totalx2 = totalx2 + x2[i];
        totaly2 = totaly2 + y2[i];
     }
     cout << endl;
     cout << "Total x   = " << totalx << endl;
     cout << "Total y   = " << totaly << endl;
     cout << "Total x^2 = " << totalx2 << endl;
     cout << "Total y^2 = " << totaly2 << endl;
     cout << "Total xy  = " << totalxy << endl;
     cout << endl;

     cout << "========================================================================================================================";
     r = ((n * totalxy) - (totalx * totaly)) / ((sqrt(n * totalx2 - (totalx * totalx))) *  (sqrt (n * totaly2 - (totaly * totaly))));
     cout << "Nilai Korelasi =  " << r << endl;

     cout << "========================================================================================================================";
     d = (r * r) * 100/100;
     cout << "Nilai Koefisien Determinasi = " << d << endl;
    
	cout << "========================================================================================================================";
	if (r < 0.10) {
		cout << "korelasi diabaikan";
	} 
	else if (r >= 0.10){
		cout << "korelasi rendah";
	}
	else if (r >= 0.50){
		cout << "korelasi sedang";
	}
	else if (r >= 0.30){
		cout << "korelasi moderat";
	}
	else if (r > 0.70){
		cout << "korelasi sangat kuat";
	}
	cout << endl;
    cout << "========================================================================================================================";
    if (r > 0) {
        cout << "Hubungan antara variable X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya" << endl;
    }
    else if (r < 0) {
        cout << "Hubungan antara variable X dan Y adalah negatif, dimana jika nilai X bertambah, maka nilai Y akan mengecil, dan juga sebaliknya" << endl;
     }
    else {
        cout << "Tidak ada hubungan antara variable X dan Y" << endl;
     }
    cout << "========================================================================================================================";
     
return 0;
}
