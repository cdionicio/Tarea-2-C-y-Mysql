// mysqul_es.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "estudiante.h"
#include <iostream>
using namespace std;

int main(){
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "usr_estudiante","Estudiante@123", "db_estudiante", 3306, NULL, 0);
    if (conectar) {
        cout << "conexion Exitosa" << endl;
    }
    else {
        cout << "Error en la conexion" << endl;
    }

    estudidante.c = cliente();
    c.leer();
    
    system("pause");
    return 0;
}

