#include "../headers/robot.h"

Robot::Robot(){ // like init
    
    redColor[0]=0.48;
    redColor[1]=0.06;
    redColor[2]=0.08;
    
    blueColor[0]=0.09;
    blueColor[1]=0.23;
    blueColor[2]=0.65;
    
    whiteColor[0]=1;
    whiteColor[1]=1;
    whiteColor[2]=1;
    
    greyColor[0]=0.41;
    greyColor[1]=0.41;
    greyColor[2]=0.41;
    
    parts[HEAD] = new Block(blueColor);
    parts[NECK] = new Block(whiteColor);
    parts[HIPS] = new Block(greyColor);
    parts[BODY] = new Block(whiteColor);
    parts[RLEG] = new Block(whiteColor);
    parts[RANKLE] = new Block(blueColor);
    parts[RFOOT] = new Block(blueColor);
    parts[RSHOULDER] = new Block(redColor);
    parts[RARM] = new Block(whiteColor);
    parts[RHAND] = new Block(blueColor);
    parts[LSHOULDER] = new Block(redColor);
    parts[LARM] = new Block(whiteColor);
    parts[LHAND] = new Block(blueColor);
    parts[LLEG] = new Block(whiteColor);
    parts[LANKLE] = new Block(blueColor);
    parts[LFOOT] = new Block(blueColor);
    parts[CHEST] = new Block(redColor);
    parts[RFOREARM] = new Block(redColor);
    parts[LFOREARM] = new Block(redColor);
    
    
    
    
    
}

Robot::~Robot(){
    
}

void Robot::draw(){ // display()
    parts[HIPS]->draw();
    

}

void Robot::update(){ // update
}




