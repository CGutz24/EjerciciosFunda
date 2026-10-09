#include <iostream>
using namespace std;

int main(){
    int dia=0;
    do{
        cout <<"Ingresa el numero del dia de la semana (1-7): "<<endl;
        cin >>dia;
        
        if(dia>=1 && dia<=7){
         switch(dia){
            case 1: 
            cout <<"Lunes "<<endl;
            break;
            case 2:
            cout <<"Martes "<<endl;
            break;
            case 3:
            cout <<"Miercoles "<<endl;
            break;
            case 4:
            cout <<"Jueves "<<endl;
            break;
            case 5:
            cout <<"Viernes "<<endl;
            break;
            case 6:
            cout <<"Sabado "<<endl;
            break;
            case 7:
            cout <<"Domingo "<<endl;
            break;
            default:
            cout <<"Salir "<<endl;
            break;
        }  
        } else { 
        cout <<"Numero invalido elegir un numero 1-7. "<<endl;
        }

    } while (dia<1 || dia>7);
    

    return 0;
}