#include <iostream>
#include "Matriz.cpp"
using namespace std;

int main(){
    Matriz matrix;
    matrix.insertar(5,"lunes","Jugar");
    matrix.insertar(15,"martes","Almorzar");
    matrix.insertar(5,"miercoles","Programar");
    matrix.insertar(2,"lunes","Estudiar");
    
    matrix.imprimirActividades();

}