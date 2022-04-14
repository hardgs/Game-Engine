#ifndef GAME_HPP
#define GAME_HPP
#include <GLFW\glfw3.h>
#include <map>
using namespace std;
#define SCENE_VALUE const char*,int
class Game{
    public:
        map< SCENE_VALUE > scene;
        void play(int width,int height,const char* title);
        void add_scene(const char* name);
        void get_scene(const char* name);
    private:
        GLFWwindow* window;
};
#endif