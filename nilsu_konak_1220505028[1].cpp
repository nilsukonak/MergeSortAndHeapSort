#include <iostream>
#include <cmath>
using namespace std;

float fonksiyon(float x){
    float sonuc = x * x * x + 3 * x * x - 4 * x + 7 ;
    return sonuc;
}

int main(){
    cout << "Adim\t a\t b\t c\t hata" << endl;

    float a, b, x1, x2, toplam1, hata1;
    int n;

    // 1. ad�mda 
    x1 = 1.0;
    x2 = 5.0;
    
    n = 1;
    a = 1.0;
    b = 5.0;
    toplam1 = (a + b) / 2; 
    hata1 = (b - a) / pow(2.0, n);
 cout << n << "\t" << a << "\t" << b << "\t" << toplam1 << "\t" << hata1<< endl;

    // 2. ad�mda
    float toplam2, hata2;
    
    x1 = 1.0;
    x2 = toplam1;
    
    n = 2; // 
    a = 1.0;
    b = toplam1;
    toplam2 = (a + b) / 2;
     hata2 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam2 << "\t" << hata2<< endl;
    
      // 3. ad�mda
    float toplam3, hata3;

    x1 = 1.0;
    x2 = toplam2;
    

    n = 3;
    a = 1.0;
    b = toplam2;
    toplam3 = (a + b) / 2;
    hata3 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam3 << "\t" << hata3<< endl;
    
         // 4. ad�mda
    float toplam4, hata4;

    x1 = 1.0;
    x2 = toplam3;
    

    n = 4; 
    a = 1.0;
    b = toplam3;
    toplam4 = (a + b) / 2;
    hata4 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam4 << "\t" << hata4<< endl;
    
           // 5. ad�mda
    float toplam5, hata5;

    x1 = 1.0;
    x2 = toplam4;
    

    n = 5; 
    a = 1.0;
    b = toplam4;
    toplam5 = (a + b) / 2;
    hata5 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam5 << "\t" << hata5<< endl;
    
    
           // 6. ad�mda
    float toplam6, hata6;

    x1 = 1.0;
    x2 = toplam5;
    

    n = 6; 
    a = 1.0;
    b = toplam5;
    toplam6 = (a + b) / 2;
    hata6 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam6 << "\t" << hata6<< endl;
    
    
            // 7. ad�mda
    float toplam7, hata7;

    x1 = 1.0;
    x2 = toplam6;
    

    n = 7; 
    a = 1.0;
    b = toplam6;
    toplam7 = (a + b) / 2;
    hata7 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam7 << "\t" << hata7<< endl;
    
      
            // 8. ad�mda
    double toplam8, hata8;

    x1 = 1.0;
    x2 = toplam7;
    

    n = 8; 
    a = 1.0;
    b = toplam7;
    toplam8 = (a + b) / 2;
    hata8 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam8 << "\t" << hata8<< endl;
    
    
              // 9. ad�mda
    long double toplam9, hata9;

    x1 = 1.0;
    x2 = toplam8;
    

    n = 9; 
    a = 1.0;
    b = toplam8;
    toplam9 = (a + b) / 2;
    hata9 = (b - a) / pow(2.0, n);
    cout << n << "\t" << a << "\t" << b << "\t" << toplam9 << "\t" << hata9<< endl;
    
    if (hata9 < 0.0001) {
        cout << "di�er k�k buras�ym�s " << endl;
    }
     cout << "kok ��kt� olarak: "<< hata9 <<"ama cevap:0.01562 / 2^9 yakla��k olarak 0.00003051758" <<endl;
    
     
    
    return 0;


}
