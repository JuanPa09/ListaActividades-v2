#include <string> 

using namespace std;


class nodo{

    public:
    nodo *siguiente;
    nodo *abajo;
    string dia;
    string actividad;
    int index;


    

    nodo(string dia){
        this->dia=dia;
        if(dia=="lunes"){
            index=1;
        }else if(dia=="martes"){
            index=2;
        }else if(dia=="miercoles"){
            index=3;
        }else if(dia=="jueves"){
            index=4;
        }else if(dia=="viernes"){
            index=5;
        }else if(dia=="sabado"){
            index=6;
        }else if(dia=="domingo"){
            index=7;
        }else{
            index=0;
        }
        this->siguiente=NULL;
        this->abajo=NULL;
    }

    nodo(string dia,string actividad){
        this->actividad=actividad;
        this->dia=dia;
        this->abajo=NULL;
    }



};