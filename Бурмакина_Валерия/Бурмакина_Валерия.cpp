// Бурмакина_Валерия.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define GLEW_DLL
#define GLFW_DLL

#include"GL\glew.h"
#include"GLFW\glfw3.h"
#include <cstdio>

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow*
        window = glfwCreateWindow(512, 512, "Mainwindow", NULL, NULL);

    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    glewInit();

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.5, 0.5, 1.0, 1);

        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(1.0, 0.5, 0.0);

        glBegin(GL_QUADS);

        glVertex2f(-0.5, 0.5);

        glVertex2f(0.5, 0.5);

        glVertex2f(0.5, -0.5);

        glVertex2f(-0.5, -0.5);

        glEnd();

        glfwSwapBuffers(window);

        glfwPollEvents();

    }
    glfwTerminate();
}

