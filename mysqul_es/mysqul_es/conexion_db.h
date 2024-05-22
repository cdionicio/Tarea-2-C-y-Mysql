#pragma once
#include <"mysql"h>
#include<iostream>
	using namespace std;
class conexionBD {
private:MYSQL* conectar
public:
		   void mysql* CONECTAR;
public:

	void abrir_conexion() {

		conectar = mysql_init(0);

		conectar = mysql_real_connect(conectar, "localhost", "usr_estudiante", "Estudiante@123", "db_estudiante", 3306, NULL, 0);
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}

	MYSQL* getconectar() {
		return conectar;
	}
};




