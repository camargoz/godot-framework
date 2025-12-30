#include "hello_world.h"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

HelloWorld::HelloWorld(){
}

HelloWorld::~HelloWorld(){
}

void HelloWorld::_bind_methods() {
}

void HelloWorld::_ready(){
  UtilityFunctions::print("Hello World C++!");
}

void HelloWorld::_process(double delta){
  
}