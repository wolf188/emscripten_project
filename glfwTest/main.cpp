#include <stdio.h>
#include <GL/gl.h>
#include <GLFW/glfw3.h>

int main(int argc, char ** argv) {
	if(!glfwInit())
	{
		printf("glfwInit() failed !\n");
		return 0;
	}
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	return 0;
}