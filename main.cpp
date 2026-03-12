#include <iostream>
#include <vector>
using namespace std;


vector<int> vett;


void mostramenu() {
    cout << "1 visualizza" << endl;
    cout << "2 ordina" << endl;
    cout << "3 media" << endl;
    cout << "4 inserisci" << endl;
    cout << "0 esci" << endl;
}


void visualizza() {
    for(int i = 0; i < vett.size(); i++){
        cout << vett[i] << " ";
    }
    cout << endl;
}


void ordina() {
    bool scambiato;
    for (int i = 0; i < vett.size() - 1; i++) {
        scambiato = false;
        for (int j = 0; j < vett.size() - 1 - i; j++) {
            if (vett[j] > vett[j + 1]) {
                int temp = vett[j];
                vett[j] = vett[j + 1];
                vett[j + 1] = temp;
                scambiato = true;
            }
        }
        if (!scambiato)
            break;
    }
}


double media() {
    if(vett.empty()) return 0;
    int a = 0;
    for(int i = 0; i < vett.size(); i++){
        a = a + vett[i];
        

    }
    return double(a) / vett.size();
}


void creavettore() {
    int numdaagg;
    int a = 0;
    while(true){
        cout << "Inserire il " << a << " numero (0 per uscire): ";
        cin >> numdaagg;
        if(numdaagg == 0){
            if(vett.empty()){
                cout << "Errore: non hai inserito nessun numero, continua!" << endl;
            } else {
                cout << "Vettore creato!" << endl;
                break;
            }
        } else {
            vett.push_back(numdaagg);
            a++;
        }
    }
}
void inserisci(){
    cout<<"vettore ";
    visualizza();
    int pos,numerodaagg;
    cout<<"in che posizione lo vuoi inserire "<<endl;
    cin>>pos;
    cout<<"dammi numero da aggiungere "<<endl;
    cin>>numerodaagg;
    if(pos==vett.size()+1){
        vett.push_back(numerodaagg);
    }else if(pos<=vett.size()&& pos>0){
        vett[pos-1]=numerodaagg;


    }else{
        cout<<"posizione non valida "<<endl;
    }
}
int main() {
    int scelta = 35;
    creavettore();
    while(scelta != 0){
        mostramenu();
        cin >> scelta;
        switch(scelta){
            case 1:
                visualizza();
                break;
            case 2:
                ordina();
                break;
            case 3:
                cout << "Media: " << media() << endl;
                break;
            case 4:
                inserisci();
                break;
            case 0:
                cout << "Fine!" << endl;
                break;
            default:
                cout << "Immetti un numero intero da 0 a 4" << endl;
        }
    }
    return 0;
}