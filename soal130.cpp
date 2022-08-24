
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{ int jb,mb,db,hb;
  int js,ms,ds,hs;
  int tempuh,jam,menit,detik;
  
    jb = 8 * 3600;
    mb = 52 * 60;
    db = 45;
    hb = jb+mb+db;
    
    js = 12*3600;
    ms = 15*60;
    ds = 10;
    hs = js+ms+ds;
    
    tempuh = hs-hb;
    jam = tempuh/3600;
    menit = (tempuh - jam * 3600)/60;
    detik = (tempuh - jam * 3600) - (menit*60);
    
 
    cout<<"Waktu yang dutempuh selama"<<endl;
    cout<<jam <<"jam"<<endl;
    cout<<menit <<"menit"<<endl;
    cout<<detik <<"detik"<<endl;
    

  
    return 0;
}
