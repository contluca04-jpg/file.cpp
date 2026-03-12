#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maiuscola;
int minuscola;
int carspeciale;
int numeri;
int vocal;

string parola;

void gigi(){
cout<<"dammi una parola: ";
cin>>parola;

    for(int i=0; i<parola.size(); i++){

        if(parola[i]>='A' && parola[i]<='Z'){

            maiuscola++;
            if((parola[i]=='A') || (parola[i]=='E') || (parola[i]=='I') || (parola[i]=='O') || (parola[i]=='U')){

                vocal++;
                
            }
            
        }
        else 
        if(parola[i]>='a' && parola[i]<='z' ){

            minuscola++;
            if((parola[i]=='a') || (parola[i]=='e') || (parola[i]=='i') || (parola[i]=='o') || (parola[i]=='u')){

                vocal++;
                
            }
            
        } 
        else
           
        if(!(parola[i]>='A' && parola[i]<='Z') && !(parola[i]>='a' && parola[i]<='z') && !(parola[i]>='0' && parola[i]<='9')){

            carspeciale++;
        }
        else
        if(parola[i]>='0' && parola[i]<='9'){

            numeri++;
        }

         
    }


}

void stampa(){

    cout<<"la tua parola: "<<endl;
cout<<"lettere maiuscole: "<<maiuscola<<endl;
cout<<"lettere minuscole: "<<minuscola<<endl;
cout<<"caratteri speciali: "<<carspeciale<<endl;
cout<<"i numeri sono: "<<numeri<<endl;
cout<<"le vocali sono: "<<vocal;
}

int main(){
gigi();
stampa();
return 0;
}