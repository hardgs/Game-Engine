#include "Game.hpp"

float x = 0,y = 0;
void process(GLFWwindow* win){
    if(glfwGetKey(win,GLFW_KEY_W) == GLFW_PRESS){
        y+=0.00009;
    }
}
void Game::play(int width,int height,const char* title){
    window = glfwCreateWindow(width,height,title,NULL,NULL);
    glfwMakeContextCurrent(window);
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
        process(this->window);
        glClear(GL_COLOR_BUFFER_BIT);
        glPointSize(20);
        glBegin(GL_POINTS);
        glVertex2f(x,y);
        glEnd();
        glfwSwapBuffers(window);
    }
}
void Game::add_scene(const char* name){

}
void Game::get_scene(const char* name){

}