#include "nodo.cpp"
#include <iostream>

using namespace std;



class Lista{
    public:
    nodo *inicio=NULL;

    int myIndex(string dia){
        int index;
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

        return index;

    }

    void insertar(string dia, string actividad){
        int miindice=myIndex(dia);
        if (dia!="" && actividad!=""&&miindice!=0)
        {
            
            nodo *day = new nodo(dia);
            if  (this->inicio==0){
                //Insertar el dia
                this->inicio=day;
                insertarActividad(inicio,dia,actividad);
            }else{
                nodo *temp = inicio;
                nodo *ant = inicio;
                
                while(temp!=NULL){
                    if(temp->index<miindice&&(temp->siguiente==NULL||temp->siguiente->index>miindice)){
                        day->siguiente=temp->siguiente;
                        temp->siguiente=day;
                        insertarActividad(day,dia,actividad);
                        break;
                    }

                    if (miindice<temp->index){
                        ant->siguiente=day;
                        day->siguiente=temp;
                    }

                    if(temp->index==miindice){
                        insertarActividad(temp,dia,actividad);
                        break;
                    }
                    ant=temp;
                    temp=temp->siguiente;
                }

            }

        }else{
            cout<<"Compruebe los datos\n";
        }
    }


    void insertarActividad(nodo *cabecera,string dia,string actividad){
        nodo *temp = cabecera;
        while (temp->abajo!=NULL)
        {
            temp=temp->abajo;
        }

        nodo *activity=new nodo(dia,actividad);
        temp->abajo=activity;   

    }


    void imprimirDia(){
        cout<<"Imprimiendo dias:\n";
        nodo *temp = this->inicio;

        if(inicio==NULL){
            cout<<"No hay nada";

        }else{

            while (temp!=NULL)
            {
                cout<<temp->dia+"\n";
                temp=temp->siguiente;
            }
            

        }

    }


    void imprimirActividades(string dia){
        nodo *temp = inicio;
        cout<<"Imprimiendo actividades del dia: "+dia+"\n";
        while (temp!=NULL)
        {
            if (temp->dia==dia)
            {
                temp=temp->abajo;
                while(temp!=NULL){
                    cout<<temp->actividad+"\n";
                    temp=temp->abajo;
                }
                return;
            }
            

            temp=temp->siguiente;
        }
        cout<<"No se encontraron actividades\n";
    }

    void imprimirTodas(){
        if (inicio!=NULL){
            nodo *temp=inicio;
            while (temp!=NULL)
            {
                cout<<"Imprimiendo actividades del dia "+temp->dia+":\n";
                nodo *aux=temp;
                while (aux!=NULL)
                {
                    cout<<aux->actividad+"\n";
                    aux=aux->abajo;
                }
                
                temp=temp->siguiente;
                cout<<"\n ----------------------------------------\n";
            }
        }else{
            cout<<"No se encontraron actividades\n";
        }
    }
};

