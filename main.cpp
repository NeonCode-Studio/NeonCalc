#include <iostream>
using namespace std;

int main() {
    cout<<"-===-NeonCalc v0.7-===-"<<endl;
    cout<<"-=Pick a language:write 1 if you want english"<<endl;
    cout<<"-=Wybierz język:napisz 2 jeżeli chcesz polski"<<endl;
    cout<<"-=+-/*"<<endl;
    int laguage;
    cin>>laguage;
    if (laguage == 2){
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
            cout<<"-==Iloraz twoich liczb to: "<<a/b<<endl;
        } else {
            cout<<"Prosze wybierz liczbe z listy!"<<endl;
        }
}else if(laguage == 1) {
    int a;//zmienne 
    int b;//do dzialan
    cout<<"-===-!your choice!-===-"<<endl;
    cout<<"-=Pick 1 if you want addition"<<endl;
    cout<<"-=Pick 2 if you want subtraction"<<endl;
    cout<<"-=Pick 3 if you want multiplication"<<endl;
    cout<<"-=Pick 4 if you want division"<<endl;
    cout<<"-==Your choice is: ";
    int wybor;
    cin>>wybor;
    if (wybor == 1) {
        cout<<"-===-Addition-===-"<<endl;
        cout<<"-=Write first number: ";
        cin>>a;
        cout<<"-=Write second number: ";
        cin>>b;
        cout<<"-==Addition of this two numbers is: "<<a+b<<endl;
    } else if ( wybor == 2) {
        cout<<"-===-Subtraction-===-"<<endl;
        cout<<"-=Write first number: ";
        cin>>a;
        cout<<"-=Write second number: ";
        cin>>b;
        cout<<"-==Subtraction of this two numbers is: "<<a-b<<endl;
    } else if ( wybor == 3 ) {
        cout<<"-===-Multiplication-===-"<<endl;
        cout<<"-=Write first number:";
        cin>>a;
        cout<<"-=Write second number:"<<endl;
        cin>>b;
        cout<<"-==Multiplication of this two numbers is:"<<a*b<<endl;
    } else if ( wybor == 4) {
        cout<<"-===-Division-===-"<<endl;
        cout<<"-=Write first number:";
        cin>>a;
        cout<<"-=Write second number:";
        cin>>b;
        cout<<"-==Division of your two numbers is :"<<a/b<<endl;
    } else {
        cout<<"-==!Please pick a real number!"<<endl;
    }
} else {
    int a;//zmienne 
    int b;//do dzialan
    cout<<"-===-/*-+-===-"<<endl;
    cout<<"-=1 +"<<endl;
    cout<<"-=2 -"<<endl;
    cout<<"-=3 *"<<endl;
    cout<<"-=4 /"<<endl;
    cout<<"-==+-*/*-+ ";
    int wybor;
    cin>>wybor;
    if (wybor == 1) {
        cout<<"-===-++++-===-"<<endl;
        cout<<"-=1.:";
        cin>>a;
        cout<<"-=2.:";
        cin>>b;
        cout<<"-========:"<<a+b<<endl;
    } else if ( wybor == 2) {
        cout<<"-===------===-"<<endl;
        cout<<"-=1.:";
        cin>>a;
        cout<<"-=2. :";
        cin>>b;
        cout<<"-========: "<<a-b<<endl;
    } else if ( wybor == 3 ) {
        cout<<"-===-*****-===-"<<endl;
        cout<<"-=1. :";
        cin>>a;
        cout<<"-=2. :"<<endl;
        cin>>b;
        cout<<"-========:"<<a*b<<endl;
    } else if ( wybor == 4) {
        cout<<"-===-///////-===-"<<endl;
        cout<<"-=1. :";
        cin>>a;
        cout<<"-=2. :";
        cin>>b;
        cout<<"-========:"<<a/b<<endl;
    } else {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }
} }