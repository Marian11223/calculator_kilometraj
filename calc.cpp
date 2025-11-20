#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int char_hex(char x){
      if(x>='0'&&x<='9')
        return x-'0';
      else if(x == 'A')
         return 10;
      else if(x == 'B')
         return 11;
      else if(x == 'C')
         return 12;
      else if(x == 'D')
         return 13;
      else if(x == 'E')
         return 14;
      else if(x == 'F')
         return 15;
}

int main()
{
char back_consola[5]={'b','a','c','k','\0'},comanda_utilizator[5],nr1[2]={'1','\0'},nr2[2]={'2','\0'},cod_hex_util[6];
int km,nr_hex,nr_km,c1,c2,c3,c4,c5,r1,r2,r3,r4,r5,r6,i,n=6,put,byte,h,l;
bool rulare=true;
while(rulare){
 cout<<"daca vreti sa calculati hex -> kilometraj apasati 1"<<endl;
 cout<<" "<<endl;
 cout<<"daca vreti sa calculati kilometraj -> hex apasati 2"<<endl;
 cout<<" "<<endl;
 cout<<"daca vreti sa iesiti scrieti 'back'"<<endl;
 cin>>comanda_utilizator;
if(strcmp(back_consola,comanda_utilizator)==0){
        system("cls");
        cout<<"apasa enter pentru a inchide";
        rulare=false;
        continue;
}
if(strcmp(comanda_utilizator,nr1) == 0){
        system("cls");
        cout<<"calculator hex --> kilometraj"<<endl;
        cout<<" "<<endl;
        cout<<"dati codul hexazecimal little edian"<<endl;
        nr_km=0;
        put=1;
        for(i=0;i<n;i++){
        cin>>cod_hex_util[i];
        }
        for(i=0;i<n;i+=2){
          h=char_hex(cod_hex_util[i]);
          l=char_hex(cod_hex_util[i+1]);
          byte=h*16+l;
          nr_km +=byte*put;
          put *=256;
          }
    cout<<" "<<endl;
    cout<<"nr de kilometrii este: "<<nr_km<<endl;
        cin>>comanda_utilizator;
    if(strcmp(back_consola,comanda_utilizator)==0){
        system("cls");
        continue;
        }
}
if(strcmp(comanda_utilizator,nr2) == 0){
    system("cls");
    cout<<"calculator kilometraj --> hex"<<endl;
    cout<<" "<<endl;
    cout<<"dati nr de km"<<endl;
    cin>>km;
    r1=km%16;
    c1=km/16;
    r2=c1%16;
    c2=c1/16;
    r3=c2%16;
    c3=c2/16;
    r4=c3%16;
    c4=c3/16;
    r5=c4%16;
    c5=c4/16;
    r6=c5%16;
    cout<<" "<<endl;
    cout<<km<<" km in hexazecimal little edian sunt: ";

    if(r2 >= 10){
        if(r2 == 10) cout << "A";
        else if(r2 == 11) cout<<"B";
        else if(r2 == 12) cout<<"C";
        else if(r2 == 13) cout<<"D";
        else if(r2 == 14) cout<<"E";
        else if(r2 == 15) cout<<"F";
    } else {
        cout<<r2;
    }

    if(r1 >= 10){
        if(r1 == 10) cout<<"A";
        else if(r1 == 11) cout<<"B";
        else if(r1 == 12) cout<<"C";
        else if(r1 == 13) cout<<"D";
        else if(r1 == 14) cout<<"E";
        else if(r1 == 15) cout<<"F";
    } else {
        cout<<r1;
    }
cout<<" ";
    if(r4 >= 10){
        if(r4 == 10) cout<<"A";
        else if(r4 == 11) cout<<"B";
        else if(r4 == 12) cout<<"C";
        else if(r4 == 13) cout<<"D";
        else if(r4 == 14) cout<<"E";
        else if(r4 == 15) cout<<"F";
    } else {
        cout<<r4;
    }

    if(r3 >= 10){
        if(r3 == 10) cout <<"A";
        else if(r3 == 11) cout<<"B";
        else if(r3 == 12) cout<<"C";
        else if(r3 == 13) cout<<"D";
        else if(r3 == 14) cout<<"E";
        else if(r3 == 15) cout<<"F";
    } else {
        cout<<r3;
    }
cout<<" ";
    if(r6 >= 10){
        if(r6 == 10) cout<<"A";
        else if(r6 == 11) cout<<"B";
        else if(r6 == 12) cout<<"C";
        else if(r6 == 13) cout<<"D";
        else if(r6 == 14) cout<<"E";
        else if(r6 == 15) cout<<"F";
    } else {
        cout << r6;
    }

    if(r5 >= 10){
        if(r5 == 10) cout<<"A";
        else if(r5 == 11) cout<<"B";
        else if(r5 == 12) cout<<"C";
        else if(r5 == 13) cout<<"D";
        else if(r5 == 14) cout<<"E";
        else if(r5 == 15) cout<<"F";
    } else {
        cout<<r5;
    }

    cin>>comanda_utilizator;
    if(strcmp(back_consola,comanda_utilizator)==0){
        system("cls");
        continue;
    }
  }
 }
}
