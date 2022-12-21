/*


I WILL BE WORKING WITH OpenGl library



TODO To run program = gcc filename.c -lGL -lGLU -lglut -lm

*/


// C program to demonstrate
// creating a triangle
// OpenGL
#include<stdio.h>
#include<GL/glut.h>



#pragma comment(lib, "glu32.lib")




GLfloat light_diffuse[]  = {1.0, 0.0, 0.0, 1.0};  /* Red diffuse light. */ 
GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};  /* Infinite light location. */ 
   
GLfloat n[6][3] = {  /* Normals for the 6 faces of a cube. */ 
  { -1.0, 0.0,  0.0 },   
  { 0.0,  1.0,  0.0 },   
  { 1.0,  0.0,  0.0 },  
  { 0.0, -1.0,  0.0 },   
  { 0.0,  0.0,  1.0 },   
  { 0.0,  0.0, -1.0 } 
  };  
   
GLint faces[6][4] = {  /* Vertex indices for the 6 faces of a cube. */ 
  {0, 1, 2, 3},   
  {3, 2, 6, 7},   
  {7, 6, 5, 4},  
  {4, 5, 1, 0},   
  {5, 6, 2, 1},   
  {7, 4, 0, 3} 
};  
   
GLfloat v[8][3];  /* Will be filled in with X,Y,Z vertexes. */ 
   
void draw3DCube(void)  
{  
  
   
  for (int i = 0; i < 6; i++)  

  {
    // The outer loop iterates over each of the 6 faces of the cube. Within the loop, the glBegin and glEnd functions enclose a series of vertex drawing commands, which tell OpenGL to draw a quadrilateral (four-sided polygon) using the vertices specified in the loop.  
    glBegin(GL_QUADS);  
    glNormal3fv(&n[i][0]);  // The glNormal3fv function sets the normal vector for the current face, which determines how the face is lit by the light source. The normal vector is taken from the n array, which contains the normals for each face of the cube.
    glVertex3fv(&v[faces[i][0]][0]); // The glVertex3fv function specifies a vertex for the current face, using the vertex coordinates from the v array, which contains the vertices of the cube. The faces array contains the indices of the vertices that make up each face of the cube, so the loop uses these indices to access the correct vertices in the v array. 
    glVertex3fv(&v[faces[i][1]][0]);  
    glVertex3fv(&v[faces[i][2]][0]);  
    glVertex3fv(&v[faces[i][3]][0]);  
    glEnd();  
  }  
}  
   
void display(void)  
{  
  glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );  
  draw3DCube();  
  glutSwapBuffers();;  
}  


void print_vertices(void) {
  /* Setup cube vertex data. */ 
  v[0][0] = v[1][0] = v[2][0] = v[3][0] = -1;  
  v[4][0] = v[5][0] = v[6][0] = v[7][0] = 1;  
  v[0][1] = v[1][1] = v[4][1] = v[5][1] = -1;  
  v[2][1] = v[3][1] = v[6][1] = v[7][1] = 1;  
  v[0][2] = v[3][2] = v[4][2] = v[7][2] = 1;  
  v[1][2] = v[2][2] = v[5][2] = v[6][2] = -1;  
  
}
   
void init(void)  

{  


  print_vertices();
  
   /* Enable a single OpenGL light. */ 
   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);  
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);  
   glEnable(GL_LIGHT0);  
   glEnable(GL_LIGHTING);  
   
   /* Use depth buffering for hidden surface elimination. */ 
   glEnable(GL_DEPTH_TEST);  
   
   /* Setup the view of the cube. */ 
   glMatrixMode(GL_PROJECTION);  
   gluPerspective( /* field of view in degree */ 35.0,  
                   /* aspect ratio */ 1.0,  
                   /* Z near */ 1.0,   
                   /* Z far */ 10.0 );  
   
   glMatrixMode( GL_MODELVIEW );  
   gluLookAt( 0.0, 0.0, 5.0,  /* eye is at (0,0,5) */ 
              0.0, 0.0, 0.0,  /* center is at (0,0,0) */ 
              0.0, 1.0, 0.);  /* up is in positive Y direction */ 
   
   /* Adjust cube position to be asthetic angle. */ 
   glTranslatef(0.0, 0.0, -1.0);  
   glRotatef(60, 1.0, 0.0, 0.0);  
   glRotatef(-20, 0.0, 0.0, 1.0);  
}  
   
int main(int argc, char **argv)  
{  
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  
   glutCreateWindow("red 3D lighted cube");  
   glutDisplayFunc(display);  
   init();  
   glutMainLoop();  
   
   return 0;  
} 