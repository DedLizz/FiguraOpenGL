/*
 * inicio.cpp
 *
 *  Created on: 24 may 2024
 *      Author: Brandon
 */
#include "funciones.h"

float mover_x=0;
float mover_y=0;
float escala = 1.0; // Variable para el factor de escala

void Inicializar(){
	glClearColor(0.3, 0.0, 0.3, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-30.0,30.0,-30.0,16.0,-30.0,30.0);
}

void Dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
	PlanoCartesiano();
	glPushMatrix();
	glTranslatef(mover_x,mover_y,0.0);
	glScalef(escala, escala, 1.0); // Aplicar la escala antes de dibujar
	UkaUka();
	glPushMatrix();
	glPopMatrix();
	glFlush();
}

void traslado(int key, int x, int y){
	switch(key)
	{
		case GLUT_KEY_RIGHT: mover_x++;break;
		case GLUT_KEY_LEFT:  mover_x--;break;
		case GLUT_KEY_UP: mover_y++; break;
		case GLUT_KEY_DOWN: mover_y--;break;
	}
	glutPostRedisplay();
}

void escalas(unsigned char key, int x, int y) {
    cout << "Tecla presionada: " << key << endl; // Agregamos este mensaje para depuración
    switch (key) {
        case 'a':
            cout << "Aumentando escala" << endl; // Agregamos este mensaje para depuración
            escala += 0.1;
            break; // Aumentar escala
        case 's':
            cout << "Disminuyendo escala" << endl; // Agregamos este mensaje para depuración
            if (escala > 0.1) escala -= 0.1;
            break; // Disminuir escala
    }
    glutPostRedisplay();
}



