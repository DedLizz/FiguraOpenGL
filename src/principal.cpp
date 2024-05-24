/*
 * principal.cpp
 *
 *  Created on: 24 may 2024
 *      Author: Brandon
 */
#include "funciones.h"
#include <iostream>
#include <GL/glut.h> // Asegúrate de incluir GLUT

using namespace std;

int main(int argc, char** argv){

	cout<<"!!Hola Mundo!!!"<<endl; //prints !!Hello World
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(200,200);
		glutCreateWindow("Figura Brandon");
		Inicializar();
		glutDisplayFunc(Dibujar);
		glutSpecialFunc(traslado);
		glutKeyboardFunc(escalas); // Registrar la función de teclado
		glutMainLoop();
		return 0;
	}



