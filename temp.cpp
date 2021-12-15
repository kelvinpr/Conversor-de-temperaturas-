#include<iostream>

using namespace std;

int main(){

    float c,f,k,conv;

    cout<<"[1]-Celcius";
    cout<<"\n[2]-Kelvin";
    cout<<"\n[3]-Fahrenheit";
    cout<<"\n\nEscriba el grado que quiera convertir: "; cin>>conv;
//Celsius
    if(conv==1){
        int conv2;
        cout<<"\n[1]-kelvin";
        cout<<"\n[2]-Fahrenheit";
        cout<<"\n\nEliga a que grado quiere hacer la conversion: "; cin>>conv2;
        cout<<"\nEscriba los grados en celsius: "; cin>>c;

        if(conv2==1){
            float kel = c+273.15;
            cout<<"\nEl resultado de la conversion es: "<<kel<<" K";
        }

        else if(conv2==2){
            float far = c*1.8+32;
            cout<<"\nEl resultado de la conversion es "<<far<<" F";
        }

    } 
//kelvin
    if(conv==2){
        int conv3;
        cout<<"\n[1]-Celsius";
        cout<<"\n[2]-Fahrenheit";
        cout<<"\n\nEliga a que grado quiere hacer la conversion: "; cin>>conv3;
        cout<<"\nEscriba los grados en kelvin: "; cin>>k;

        if(conv3==1){
            float cel = k-273.15;
            cout<<"\nEl resultado de la conversion es: "<<cel<<" C";
        }
        else if(conv3=2){
            float far = (k-273.15)*9/5+32;
            cout<<"\nEl resultado de la conversion es: "<<far<<" F";
        }

    }
//fahrenheit
    if(conv==3){
        int conv4;
        cout<<"\n[1]-Celsius";
        cout<<"\n[2]-Kelvin";
        cout<<"\n\nEliga a que grado quiere hacer la conversion: "; cin>>conv4;
        cout<<"\nEscriba los grados en Fahrenheit: "; cin>>f;

        if(conv4==1){
            float cel = (f-32)*5/9;
            cout<<"\nEl resultado de la conversion es: "<<cel<<" C";
        }
        else if(conv4==2){
            float kel = (f-32)*5/9+273.15;
            cout<<"\nEl resultado de la conversion es: "<<kel<<" K";
        }
        
    }
    return 0;
}
