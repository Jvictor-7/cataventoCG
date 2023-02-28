#include "Dependencies/glfw3.h"
#include <stdio.h>
#include <GL/gl.h>

int main(void)
{
    const int LARGURA = 500;
    const int ALTURA = 500;
    /* Initialize the library */
    glfwInit();

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(LARGURA, ALTURA, "Cata-Vento", NULL, NULL);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    // Inicio
    glClearColor(0.0, 0.0, 0.0, 0.0); // COR DO FUNDO
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, LARGURA, 0.0f, ALTURA, 0.0f, 1.0f);
    // glOrtho(-10.0, 10.0, -10.0, 10.0, 1.0, -1.0);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Poll for and process events */
        glfwPollEvents();
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        }     

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        
        glColor3f(1.0, 1.0, 0);// COR DA RETA

        glBegin(GL_POLYGON);// RETA
            glVertex2f(249.0f, 250.0f);
            glVertex2f(251.0f, 250.0f);
            glVertex2f(249.0f, 100.0f);
            glVertex2f(251.0f, 100.0f);
        glEnd();

        glColor3f(1.0, 1.0, 1.0);// COR DO TRIANGULO
        glBegin(GL_TRIANGLES);// TRIANGULO
            glVertex2f(250.0f, 250.0f);
            glVertex2f(230.0f, 200.0f);
            glVertex2f(270.0f, 200.0f);
        glEnd();

        glColor3f(0.0, 1.0, 0.0);// COR DO TRIANGULO
        glBegin(GL_TRIANGLES);// TRIANGULO
            glVertex2f(250.0f, 250.0f);
            glVertex2f(230.0f, 300.0f);
            glVertex2f(270.0f, 300.0f);
        glEnd();

        glColor3f(0.0, 0.0, 1.0);// COR DO TRIANGULO
        glBegin(GL_TRIANGLES);// TRIANGULO
            glVertex2f(250.0f, 250.0f);
            glVertex2f(200.0f, 230.0f);
            glVertex2f(200.0f, 270.0f);
        glEnd();

        glColor3f(1.0, 0.0, 0.0);// COR DO TRIANGULO
        glBegin(GL_TRIANGLES);// TRIANGULO
            glVertex2f(250.0f, 250.0f);
            glVertex2f(300.0f, 230.0f);
            glVertex2f(300.0f, 270.0f);
        glEnd();
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}