#include "../headers/block.h"

Block::Block(float colors[3]){ // like init
    position[0] = position[1]= position[2] = 0; // x y z
    color[0] = colors[0];
    color[1] = colors[1];
    color[2] = colors[2]; // r g b
    size[0] = size[1] = size[2]  = 1;
}

Block::~Block(){
    
}

void Block::draw(){ // display()
    glPushMatrix();
    {
        glTranslatef(position[0], position[1], position[2]);
        glColor3f(color[0],color[1],color[2]);
        glScalef(size[0],size[1],size[2]);
        glutSolidCube(size[0]);
    }
    glPopMatrix();
}

void Block::update(){ // update
}

