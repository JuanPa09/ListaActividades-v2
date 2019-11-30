#include <iostream>
#include "Lista.cpp"
using namespace std;

Lista list;

class Menu{
    public:
    void ingresar(){
        system("cls");
        string dia,actividad;
        cout<<"Ingrese el dia en minusculas:\n";
        cin>>dia;
        cout<<"Ingrese la actividad:\n";
        cin>>actividad;
        list.insertar(dia,actividad);
        system("pause");
        menu();
    }

    void impresion(){
        system("cls");
        string respuesta;
        cout<<"1. dia especifico\n";
        cout<<"2. todos los dias\n";
        cout<<"3. Regresar\n";
        cin>>respuesta;
        if (respuesta=="1")
        {
            string day;
            cout<<"Ingrese el dia\n";
            cin>>day;
            list.imprimirActividades(day);
            system("pause");
            impresion();
        }else if(respuesta=="2"){
            list.imprimirTodas();
            system("pause");
            impresion();
        }else if(respuesta=="3") {
            menu();
        }else{
            impresion();
        }
        
    }


    void menu(){
        system("cls");
        string respuesta;
        cout<<"1. Ingresar actividad\n";
        cout<<"2. Imprimir actividad\n";
        cout<<"3. Salir\n";
        cin>>respuesta;
        if (respuesta=="1")
        {
            ingresar();
        }else if(respuesta=="2"){
            impresion();
        }else if(respuesta=="3") {
            exit(0);
        }else{
            menu();
        }
        
    }

};

int main(){
Menu menu;
menu.menu();
/*
//CARGANDO DATOS
list.insertar("lunes","Programar");
list.insertar("martes","Ejercicio");
list.insertar("lunes","Hacer tarea");
list.insertar("miercoles","Hacer Proyecto EDD");
list.insertar("hello","Hacer tarea");
list.insertar("domingo","tarea");
list.insertar("","");
list.insertar("viernes","examen");
list.insertar("jueves","Descanso");
list.insertar("sabado","Estudiar");
list.insertar("miercoles","Comprar comida");
cout<<"\n";
//IMPRIME LOS DIAS EN ORDEN
list.imprimirDia();
cout<<"\n";
//IMPRIME LAS ACTIVIDADES DE UN DIA ESPECIFICO
//list.imprimirActividades("miercoles");

list.imprimirTodas();
*/

};

