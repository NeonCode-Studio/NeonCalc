#include <iostream>
using namespace std;

int main() {
    cout<<"-===-NeonCalc v0.1-===-"<<endl;
    int a;//zmienne 
    int b;//do dzialan
    cout<<"-===-!Masz wybór!-===-"<<endl;
    cout<<"-=Wybierz 1 jeżeli chcesz skorzystac z dodawania"<<endl;
    cout<<"-=Wybierz 2 jeżeli chcesz skorzystac z odejmowania"<<endl;
    cout<<"-=Wybierz 3 jeżeli chcesz skorzystac z mnozenia"<<endl;
    cout<<"-=Wybierz 4 jeżeli chcesz skorzystac z dzielenia"<<endl;
    cout<<"-==Moj wybor to: ";
    int wybor;
    cin>>wybor;
    if (wybor == 1) {
        cout<<"-===-Dodawnie-===-"<<endl;
        cout<<"-=Podaj pierwsza liczbe:";
        cin>>a;
        cout<<"-=Podaj Druga liczbe:";
        cin>>b;
        cout<<"-==Suma twoich dwóch liczb to:"<<a+b<<endl;
    } else if ( wybor == 2) {
        cout<<"-===-Odejmowanie-===-"<<endl;
        cout<<"-=Podaj pierwsza liczbe:";
        cin>>a;
        cout<<"-=Podaj druga liczbe:";
        cin>>b;
        cout<<"-==Róznica twoich liczb to: "<<a-b<<endl;
    } else if ( wybor == 3 ) {
        cout<<"-===-Mnozenie-===-"<<endl;
        cout<<"-=Podaj pierwsza liczbe:";
        cin>>a;
        cout<<"-=Podaj druga liczbe:"<<endl;
        cin>>b;
        cout<<"-==Iloczyn twoich liczb to:"<<a*b<<endl;
    } else if ( wybor == 4) {
        cout<<"-===-Dzielenie-===-"<<endl;
        cout<<"-=Podaj pierwsza liczbe:";
        cin>>a;
        cout<<"-=Podaj druga liczbe:";
        cin>>b;
        cout<<"-==Iloraz twoich liczb to:"<<a/b<<endl;
    } else {
        cout<<"Prosze wybierz liczbe z listy!"<<endl;
    }
}