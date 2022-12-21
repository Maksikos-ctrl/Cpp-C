/*

Here i will try to implement a game of FPS(first-person-shooter)


Algoritm of my actions

    Set up your development environment: Install the necessary tools and libraries, such as a C compiler, an OpenGL library, and any other dependencies you might need.

    Design your game: Decide on the gameplay mechanics, levels, and other aspects of your game. This will help you determine what features you will need to implement.

    Implement the graphics: Use OpenGL to create the 3D models and environments for your game. This will involve using OpenGL functions to define the geometry, materials, lighting, and other aspects of the scene.

    Implement the gameplay: Write the code that controls the player character and enemies, handles user input, and updates the game state. This will involve creating functions for movement, shooting, and other gameplay mechanics.

    Test and debug your game: Run your game and play through it to identify any bugs or issues that need to be fixed. Use a debugger to track down and fix any problems you encounter.

    Polish and release your game: Make any final changes or improvements to your game, then package it up and release it to the public.

*/

/* it's for windows */
#include <GL/gl.h>
#include <GL/glu.h>


#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

#pragma comment(lib, "glu32.lib")


#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480


float playerX = 0.0f;
float playerY = 0.0f;
float playerZ = 0.0f;
float playerPitch = 0.0f;
float playerYaw = 0.0f;


// here i will create global arr where i'm gonna store the pos of the enemy characters


float enemyPositions[10][3] = {
    {-10.0f, 0.0f, 0.0f},
    {10.0f, 0.0f, 0.0f},
    {0.0f, 0.0f, -10.0f},
    {0.0f, 0.0f, 10.0f},
    {0.0f, 10.0f, 0.0f},
    {0.0f, -10.0f, 0.0f},
    {5.0f, 5.0f, 5.0f},
    {-5.0f, -5.0f, -5.0f},
    {-5.0f, 5.0f, -5.0f},
    {5.0f, -5.0f, 5.0f}
};

void drawPlayer() {
    glPushMatrix();
    glTranslatef(playerX, playerY, playerZ);
    glRotatef(playerPitch, 1.0f, 0.0f, 0.0f);
    glRotatef(playerYaw, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    // Front face
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);

    // Back face
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);

    // Left face
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);

    // Right face
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
}


void drawEnemies() {
    for (int i = 0; i < 10; ++i) {
        // nside the loop, the function pushes the current modelview matrix onto the matrix stack using the glPushMatrix function. This is done to preserve the current transformation state so that it can be restored later.
        glPushMatrix();
        glTranslatef(enemyPositions[i][0], enemyPositions[i][1], enemyPositions[i][2]);
        glBegin(GL_QUADS);

        // Front face
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-1.0f, 1.0f, 1.0f);
        glVertex3f(1.0f, 1.0f, 1.0f);
        glVertex3f(1.0f, -1.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f);

        // Back face
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-1.0f, 1.0f, -1.0f);
        glVertex3f(1.0f, 1.0f, -1.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);
        
        // Left face
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-1.0f, 1.0f, 1.0f);
        glVertex3f(-1.0f, 1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f);

        // Right face
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex3f(1.0f, 1.0f, 1.0f);
        glVertex3f(1.0f, 1.0f, -1.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);
        glVertex3f(1.0f, -1.0f, 1.0f);
    }
}

