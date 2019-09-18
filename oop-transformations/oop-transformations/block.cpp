#include "../headers/block.h"

Block::Block(float colors[3], float positions[3], float sizes[3]){ // like init
    position[0] = positions[0];
    position[1] = positions[1];
    position[2] = positions[2]; // x y z
    color[0] = colors[0];
    color[1] = colors[1];
    color[2] = colors[2]; // r g b
    size[0] = sizes[0];
    size[1] = sizes[1];
    size[2] = sizes[2];
}

Block::~Block(){
    
}

void Block::draw(){ // display()
        // color
        glColor3f(color[0],color[1],color[2]);
        // rotate
    
        // translate
        glTranslatef(position[0], position[1], position[2]);
        glPushMatrix();
        {
            // scale
            glScalef(size[0],size[1],size[2]);
        
            glutSolidCube(1);
        }
    glPopMatrix();
    
}

void Block::update(){ // update
}

