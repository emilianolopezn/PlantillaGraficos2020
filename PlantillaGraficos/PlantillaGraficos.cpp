// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

int main()
{
    //Declarar una ventana
	GLFWwindow* window;

	//Si no se pudo iniciar GLFW
	//Terminamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//inicializamos la ventana
	window =
		glfwCreateWindow(800, 600, "Ventana",
			NULL, NULL);
	//Si no se pudo crear la venata
	//Terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);
	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 800, 600);
		//Establecemos el color de borrado
		//Valores RGBA
		glClearColor(1, 0.2, 0.5, 1);
		//Borrar!
		glClear(GL_COLOR_BUFFER_BIT | 
			GL_DEPTH_BUFFER_BIT);

		//Actualizar valores y dibujar

		glfwSwapBuffers(window);
	}
	//Despúes del ciclo de dibujo
	//Eliminamos venta y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}
