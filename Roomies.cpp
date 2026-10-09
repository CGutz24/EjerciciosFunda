#include <iostream>
using namespace std;

//Juan busca Roomies y les permite llevar mascotas. 
//pero con ciertas reglas: 
//si llega una sola persona, puede llevar 2 mascota grandes o 3 pequeñas, 
//si llega una pareja, acepta 1 mascota grande o 2 pequeñas. 
//Cree un programa donde lea los datos del/los Roomies (ofrezca la opción si leer para 1 o 2 personas) y el numero y tipo de mascotas
//luego determine si se acepta o no, de ser aceptado, muestre los datos de los nuevos Roomies y sus mascotas, si no, solo infórmelo por consola.


int main(){
    int Personas=0,M=0, MascotaGrande=0, MascotaPeque=0,Mascotas=0;

    cout<<"Ingrese el numero de personas: 1 o 2 "<<endl;
    cin>>Personas;
    
    if(Personas==1){
        cout<<"Tiene Mascotas? "<<endl;
        cout<<"1. Si "<<endl;
        cout<<"2. No "<<endl;
        cin>>M;
       
        switch(M){
            case 1:
            cout<<"Ingrese el numero de mascotas: "<<endl;
            cin>>Mascotas;

            cout<<"Ingrese el numero de mascotas pequeñas: "<<endl;
            cin>>MascotaPeque;

            cout<<"Ingrese el numero de mascotas grandes: "<<endl;
            cin>>MascotaGrande;

            if(Mascotas>3){
                cout<<"Solo se permite un maximo de 3 mascotas para una persona"<<endl;
            }
            else if(Mascotas==0){
                cout<<"Puede ser Roomie :) "<<endl;
            }
            if(MascotaPeque>2 && MascotaGrande>3){
                
                cout<<"No Puedes ser Roomie."<<endl;
            }
            else{
                cout<<"Puede vivir en el edificio :)"<<endl;
                cout<<"El numero de mascotas es: "<<Mascotas<<endl;
                cout<<"Mascotas Grandes: "<<MascotaGrande<<endl;
                cout<<"Mascotas Pequeñas: "<<MascotaPeque<<endl;
            }
            break;

            case 2:
            cout<<"Puedes ser Roomie :) "<<endl;
            break;

            default:
            cout<<"Salir "<<endl;
            break;
        }   

    }
    if(Personas==2){
        cout<<"Tiene mascotas? "<<endl;
        cout<<"1. Si "<<endl;
        cout<<"2. No "<<endl;
        cin>>M;

        switch(M){
            case 1: 
            cout<<"Ingrese el numero de mascotas: "<<endl;
            cin>>Mascotas;
            cout<<"Ingrese el numero de mascotas pequeñas: "<<endl;
            cin>>MascotaPeque;
            cout<<"Ingrese el numero de mascotas grandes: "<<endl;
            cin>>MascotaGrande;

            if(Mascotas>2){
                cout<<"Solo se permite un maximo de 2 mascotas para dos personas. "<<endl;
            }
            else if(Mascotas==0){
                cout<<"Ustedes pueden ser Roomies :) "<<endl;
            }
            if(MascotaPeque>1 && MascotaPeque>2){
                cout<<"No pueden ser Roomies, solo se permiten 2 mascotas grandes o una mascota pequeña"<<endl;
            }
            else{
                cout<<"Si pueden ser Roomies :) "<<endl;
                cout<<"Mascotas: "<<Mascotas<<endl;
                cout<<"Mascotas Grandes: "<<MascotaGrande<<endl;
                cout<<"Mascotas Pequeñas: "<<MascotaPeque<<endl;
            }
            break;

            case 2:
            cout<<"Pueden ser Roomies :) "<<endl;
            break;

            default:
            cout<<"Salir "<<endl;
            break;
        }

    }


    return 0;
}
