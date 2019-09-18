#include "../headers/robot.h"

Robot::Robot(){ // like init
    whiteColor[0]=1.0f;
    whiteColor[1]=1.0f;
    whiteColor[2]=1.0f;
    
    redColor[0]=0.48f;
    redColor[1]=0.06f;
    redColor[2]=0.08f;
    
    blueColor[0]=0.09f;
    blueColor[1]=0.23f;
    blueColor[2]=0.65f;
    
    greyColor[0]=0.41f;
    greyColor[1]=0.41f;
    greyColor[2]=0.41f;
    
    
    sizes[HIPS][0] =      2.0f;
    sizes[HIPS][1] =      0.5f;
    sizes[HIPS][2] =      1.0f;
    
    sizes[BODY][0] =      1.5f;
    sizes[BODY][1] =      1.0f;
    sizes[BODY][2] =      1.0f;
  
    sizes[CHEST][0] =     2.0f;
    sizes[CHEST][1] =     1.0f;
    sizes[CHEST][2] =     1.5f;
  
    sizes[NECK][0] =      0.5f;
    sizes[NECK][1] =      0.3f;
    sizes[NECK][2] =      1.0f;
  
    sizes[HEAD][0] =      1.0f;
    sizes[HEAD][1] =      1.0f;
    sizes[HEAD][2] =      1.0f;
   
    sizes[RLEG][0] =      0.7f;
    sizes[RLEG][1] =      1.5f;
    sizes[RLEG][2] =      1.0f;
    sizes[LLEG][0] =      sizes[RLEG][0];
    sizes[LLEG][1] =      sizes[RLEG][1];
    sizes[LLEG][2] =      sizes[RLEG][2];
    
    sizes[RANKLE][0] =    0.9f;
    sizes[RANKLE][1] =    1.5f;
    sizes[RANKLE][2] =    1.2f;
    sizes[LANKLE][0] =    sizes[RANKLE][0];
    sizes[LANKLE][1] =    sizes[RANKLE][1];
    sizes[LANKLE][2] =    sizes[RANKLE][2];
   
    sizes[RFOOT][0] =     0.9f;
    sizes[RFOOT][1] =     0.4f;
    sizes[RFOOT][2] =     1.6f;
    sizes[LFOOT][0] =     sizes[RFOOT][0];
    sizes[LFOOT][1] =     sizes[RFOOT][1];
    sizes[LFOOT][2] =     sizes[RFOOT][2];
  
    sizes[RSHOULDER][0] = 0.5f;
    sizes[RSHOULDER][1] = 0.5f;
    sizes[RSHOULDER][2] = 0.5f;
    sizes[LSHOULDER][0] = sizes[RSHOULDER][0];
    sizes[LSHOULDER][1] = sizes[RSHOULDER][1];
    sizes[LSHOULDER][2] = sizes[RSHOULDER][2];
 
    sizes[RFOREARM][0] =  0.5f;
    sizes[RFOREARM][1] =  1.5f;
    sizes[RFOREARM][2] =  0.5f;
    sizes[LFOREARM][0] =  sizes[RFOREARM][0];
    sizes[LFOREARM][1] =  sizes[RFOREARM][1];
    sizes[LFOREARM][2] =  sizes[RFOREARM][2];
    
    sizes[RARM][0] =      0.4f;
    sizes[RARM][1] =      0.6f;
    sizes[RARM][2] =      0.4f;
    sizes[LARM][0] =      sizes[RARM][0];
    sizes[LARM][1] =      sizes[RARM][1];
    sizes[LARM][2] =      sizes[RARM][2];
  
    sizes[RHAND][0] =     0.4f;
    sizes[RHAND][1] =     0.3f;
    sizes[RHAND][2] =     0.3f;
    sizes[LHAND][0] =     sizes[LHAND][0];
    sizes[LHAND][1] =     sizes[LHAND][1];
    sizes[LHAND][2] =     sizes[LHAND][2];
   
    
    
    // position related to neck
    positions[HEAD][0] =      0;
    positions[HEAD][1] =      (sizes[NECK][1]/2)+(sizes[HEAD][1]/2);
    positions[HEAD][2] =      0;
    
    // position related to chest
    positions[NECK][0] =      0;
    positions[NECK][1] =      (sizes[CHEST][1]/2)+(sizes[NECK][1]/2);
    positions[NECK][2] =      0;
    
    // position related to body
    positions[CHEST][0] =     0;
    positions[CHEST][1] =     (sizes[BODY][1]/2)+(sizes[CHEST][1]/2);
    positions[CHEST][2] =     0;
    
    //core of robot
    positions[BODY][0] =      0;
    positions[BODY][1] =      0;
    positions[BODY][2] =      0;
   
    // position related to body
    positions[HIPS][0] =      0;
    positions[HIPS][1] =      (sizes[BODY][1]/2 + sizes[HIPS][1]/2)*-1;
    positions[HIPS][2] =      0;
   
    // position related to hips
    positions[RLEG][0] =      ((sizes[HIPS][0]/2)-sizes[RLEG][0])+(sizes[RLEG][0]/2);
    positions[RLEG][1] =      ((sizes[HIPS][1]/2)+(sizes[RLEG][1]/2))*-1;
    positions[RLEG][2] =      0;
    
    positions[LLEG][0] =      positions[RLEG][0]*-1;
    positions[LLEG][1] =      positions[RLEG][1];
    positions[LLEG][2] =      0;
    
    // position related to Leg
    positions[RANKLE][0] =    0;
    positions[RANKLE][1] =    ((sizes[RLEG][1]/2)+(sizes[RANKLE][1]/2)) *-1;
    positions[RANKLE][2] =    0;
    
    positions[LANKLE][0] =    0;
    positions[LANKLE][1] =    positions[RANKLE][1];
    positions[LANKLE][2] =    0;
    
    // position related to ankle
    positions[RFOOT][0] =     0;
    positions[RFOOT][1] =     ((sizes[RANKLE][1]/2)+(sizes[RFOOT][1]/2))*-1;
    positions[RFOOT][2] =     (sizes[RFOOT][2]-sizes[RANKLE][2])/2;
    
    positions[LFOOT][0] =     0;
    positions[LFOOT][1] =     positions[RFOOT][1];
    positions[LFOOT][2] =     positions[RFOOT][2];
    
    // position related to chest
    positions[RSHOULDER][0] = 0;
    positions[RSHOULDER][1] = 0;
    positions[RSHOULDER][2] = 0;
    
    positions[LSHOULDER][0] = 0;
    positions[LSHOULDER][1] = 0;
    positions[LSHOULDER][2] = 0;
    
    // position related to shoulder
    positions[RFOREARM][0] =  0;
    positions[RFOREARM][1] =  0;
    positions[RFOREARM][2] =  0;
    
    positions[LFOREARM][0] =  0;
    positions[LFOREARM][1] =  0;
    positions[LFOREARM][2] =  0;
    
    // position related to forearm
    positions[RARM][0] =      0;
    positions[RARM][1] =      0;
    positions[RARM][2] =      0;
    
    positions[LARM][0] =      0;
    positions[LARM][1] =      0;
    positions[LARM][2] =      0;

    // position relates to arm
    positions[RHAND][0] =     0;
    positions[RHAND][1] =     0;
    positions[RHAND][2] =     0;
    
    positions[LHAND][0] =     0;
    positions[LHAND][1] =     0;
    positions[LHAND][2] =     0;
    
    parts[HEAD] = new Block(blueColor, positions[HEAD],sizes[HEAD]);
    parts[NECK] = new Block(whiteColor,positions[NECK],sizes[NECK]);
    parts[HIPS] = new Block(greyColor,positions[HIPS],sizes[HIPS]);
    parts[BODY] = new Block(whiteColor,positions[BODY],sizes[BODY]);
    parts[RLEG] = new Block(whiteColor,positions[RLEG],sizes[RLEG]);
    parts[RANKLE] = new Block(blueColor,positions[RANKLE],sizes[RANKLE]);
    parts[RFOOT] = new Block(blueColor,positions[RFOOT],sizes[RFOOT]);
    parts[RSHOULDER] = new Block(redColor,positions[RSHOULDER],sizes[RSHOULDER]);
    parts[RARM] = new Block(whiteColor,positions[RARM],sizes[RARM]);
    parts[RHAND] = new Block(blueColor,positions[RHAND],sizes[RHAND]);
    parts[LSHOULDER] = new Block(redColor,positions[LSHOULDER],sizes[LSHOULDER]);
    parts[LARM] = new Block(whiteColor,positions[LARM],sizes[LARM]);
    parts[LHAND] = new Block(blueColor,positions[LHAND],sizes[LHAND]);
    parts[LLEG] = new Block(whiteColor,positions[LLEG],sizes[LLEG]);
    parts[LANKLE] = new Block(blueColor,positions[LANKLE],sizes[LANKLE]);
    parts[LFOOT] = new Block(blueColor,positions[LFOOT],sizes[LFOOT]);
    parts[CHEST] = new Block(redColor,positions[CHEST],sizes[CHEST]);
    parts[RFOREARM] = new Block(redColor,positions[RFOREARM],sizes[RFOREARM]);
    parts[LFOREARM] = new Block(redColor,positions[LFOREARM],sizes[LFOREARM]);
    
    
    
    
    
}

Robot::~Robot(){
    
}

void Robot::draw(){ // display()

    //parts[BODY]->draw();
    //parts[HEAD]->draw();
    //parts[NECK]->draw();
    
    // core of the body
    parts[BODY]->draw();
    // DOWN PART OF THE BODY
    glPushMatrix();
    {
        parts[HIPS]->draw();
        
        // RIGHT SIDE LEGS
        glPushMatrix();
        {
            parts[RLEG]->draw();
            parts[RANKLE]->draw();
            parts[RFOOT]->draw();
            
        }
        glPopMatrix();
        
        // LEFT SIDE LEGS
        glPushMatrix();
        {
            parts[LLEG]->draw();
            parts[LANKLE]->draw();
            parts[LFOOT]->draw();
        }
        glPopMatrix();
        
        
        
    }glPopMatrix();
    
    // TOP PART OF THE BODY
    glPushMatrix();
    {
        parts[CHEST]->draw();
        // RIGHT ARM
        glPushMatrix();
        {
            
        }
        glPopMatrix();
        
        // LEFT ARM
        glPushMatrix();
        {
            
        }
        glPopMatrix();
        
        // NECK
        parts[NECK]->draw();
        // HEAD
        parts[HEAD]->draw();
        
        
    }
    glPopMatrix();
    
    
    
    
    //
    //parts[RSHOULDER]->draw();
    //parts[RARM]->draw();
    //parts[RHAND]->draw();
    //parts[LSHOULDER]->draw();
    //parts[LARM]->draw();
    //parts[LHAND]->draw();

    //
    //parts[RFOREARM]->draw();
    //parts[LFOREARM]->draw();
    
    
}

void Robot::update(){ // update
}




