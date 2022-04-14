#include "Engine\Game.hpp"
#include <stdio.h>
int main(){
    if(!glfwInit()){
        printf("ERROR : GLFW3");
    }
    Game game;
    game.add_scene("Main");
    game.play(600,400,"GIEngine");
    return 0;
}