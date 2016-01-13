/* Copyright (c) Mark J. Kilgard, 1996. */

/* This program is freely distributable without licensing fees
   and is provided without guarantee or warrantee expressed or
   implied. This program is -not- in the public domain. */

#include "Graphics.h"



void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  setColor(CYAN);                                //SKY
  drawFilledCircle(300,300,400);                 //SKY

  setColor(BLACK);                               //CLOUD OUTLINE
  drawCircle(455, 390, 41.7);                    //CLOUD OUTLINE
  drawCircle( 500, 400, 50.7);                   //CLOUD OUTLINE
  drawCircle( 540 , 430, 40.7);                  //CLOUD OUTLINE
  drawCircle( 572 ,398, 40.7 );                  //CLOUD OUTLINE
  drawCircle( 610, 400, 20.7);                   //CLOUD OUTLINE
  drawCircle( 300, 500, 30.7);                   //CLOUD OUTLINE
  setColor(WHITE);                               //CLOUD
  drawFilledCircle(455, 390, 40);                //CLOUD
  drawFilledCircle( 500, 400, 50);               //CLOUD
  drawFilledCircle( 540 , 430, 40);              //CLOUD
  drawFilledCircle( 572 ,398, 40 );              //CLOUD
  drawFilledCircle( 610, 400, 20);               //CLOUD
  drawFilledCircle( 300, 500, 30);               //CLOUD




  setColor(YELLOW);                              //SUN
  drawFilledCircle(0, 480, 60);                  //SUN

  setColor(ORANGE);                              //SUNoutline
  drawCircle(0, 480, 60);                        //SUNoutline
  drawCircle(0, 480, 61);                        //SUNoutline
  setColor(YELLOW);                              //SUNoutline
  drawCircle(0, 480, 61.5);                      //SUNoutline

  setColor(BROWN);                               //CHEMNEY
  drawFilledBox(230, 350, 270,440);              //CHEMNEY
  setColor(BLACK);                               //CHEMNEY OUTLINE
  drawBox(230, 350, 270, 440);                   //CHEMNEY OUTLINE
  setColor(LIGHT_BROWN);                         //CHEMNEY
  drawFilledBox(223, 440, 277, 450);             //CHEMNEY
  setColor(BLACK);                               //CHEMNEY outline
  drawBox(223, 440, 277, 450);                   //CHEMNEY outline

  setColor(LIGHT_BROWN);                         //ROOF
  drawFilledTriangle(200,350,550,350,377,440);   //ROOF
  setColor(BLACK);                               //ROOF outline
  drawTriangle( 200, 350, 550, 350, 377, 440);   //ROOF outline

  setColor(GREEN);                               //GRASS
  drawFilledBox(800,0,0,200);                    //GRASS

  setColor(TAN);                                 //WALKWAY
  drawFilledTriangle(345, 110, 310, 0, 395, 110);//WALKWAY
  drawFilledTriangle( 395, 110, 430, 0, 345, 110);//WALKWAY
  drawFilledTriangle( 310, 0, 370, 110, 430, 0); //WALKWAY

  setColor(BROWN);                               //HOUSE
  drawFilledBox(200,110,550,350);                //HOUSE
  setColor(BLACK);                               //HOUSEOUTLINE
  drawBox(200, 109, 550, 350);                   //HOUSEOUTLINE

  setColor(BLUE);                                //DOOR
  drawFilledBox(350, 130,390,210);               //DOOR
  setColor(BLACK);                               //DOOROUTLINE
  drawBox(350, 130, 392, 211);                   //DOOROUTLINE
  drawBox( 355, 173, 365, 204);                  //DOOR DETAIL
  drawBox( 375, 173, 385, 204);                  //DOOR DETAIL
  drawBox( 355,135, 365, 163);                   //DOOR DETAIL
  drawBox( 375, 135, 385, 163);                  //DOOR DETAIL
  setColor(YELLOW);                              //DOOR KNOB
  drawFilledCircle(386 ,168, 4);                 //DOOR KNOB

  setColor(BLACK);                               //STAIRS TOP OUTLINE
  drawBox(350, 119, 391, 130);                   //STAIRS TOP OUTLINE
  setColor(GREY);                                //STAIRS TOP
  drawFilledBox(350, 120, 390, 130);             //STAIRS TOP
  setColor(BLACK);                               //STAIRS BOTTOM OUTLINE
  drawBox( 345, 109, 396, 120);                  //STAIRS BOTTOM OUTLINE
  setColor(GREY);                                //STAIRS BOTTOM
  drawFilledBox( 345, 110, 395, 120);            //STAIRS BOTTOM

  setColor(BLACK);                               //WINDOW BOTTOM LEFT OUTLINE
  drawBox(250, 154, 301, 210);                   //WINDOW BOTTOM LEFT OUTLINE
  setColor(WINDOW);                              //WINDOW BOTTOM LEFT
  drawFilledBox( 250, 155, 300, 210);            //WINDOW BOTTOM LEFT
  setColor(BLACK);
  drawBox( 273, 155, 278, 210);                  //WINDOW BOTTOM LEFT VETICAL OUTLINE
  drawBox(250, 177, 300, 182);                   //WINDOW BOTTOM LEFT HORIZONTAL OUTLINE
  setColor(WHITE);                               //WINDOW BOTTOM LEFT
  drawFilledBox( 273, 155, 277, 210);            //WINDOW BOTTOM LEFT VERTICAL
  drawFilledBox( 250, 178, 300, 182);            //WINDOW BOTTOM LEFT HORIZONTAL

  setColor(BLACK);                               //WINDOW BOTTOM RIGHT OUTLINE
  drawBox( 420, 154, 516, 210);                  //WINDOW BOTTOM RIGHT OUTLINE
  setColor(WINDOW);                              //WINDOW BOTTOM RIGHT
  drawFilledBox( 420, 155, 515, 210);            //WINDOW BOTTOM RIGHT
  setColor(BLACK);
  drawBox(447, 155, 452, 210);                   //WINDOW BOTTOM RIGHT LEFT VERTICAL OUTLINE
  drawBox( 485, 155, 490, 210);                  //WINDOW BOTTOM RIGHT RIGHT VERTICAL OUTLINE
  drawBox( 420, 177, 515, 182);                  //WINDOW BOTTOM RIGHT HORIZONTAL OUTLINE
  setColor(WHITE);                               //WINDOW BOTTOM RIGHT
  drawFilledBox( 447, 155, 451, 210);            //WINDOW BOTTOM RIGHT LEFT VERTICAL
  drawFilledBox( 485, 155, 489, 210);            //WINDOW BOTTOM RIGHT RIGHT VERTICAL
  drawFilledBox( 420, 178, 515, 182);            //WINDOW BOTTOM RIGHT HORIZONTAL

  setColor(BLACK);                               //WINDOW TOP LEFT LEFT OUTLINE
  drawBox( 230, 279, 281, 335);                  //WINDOW TOP LEFT LEFT OUTLINE
  setColor(WINDOW);                              //WINDOW TOP LEFT LEFT
  drawFilledBox( 230, 280, 280, 335);            //WINDOW TOP LEFT LEFT
  setColor(BLACK);                               //WINDOW TOP LEFT LEFT
  drawBox( 253, 280, 258, 335);                  //WINDOW TOP LEFT LEFT VERTICAL OUTLINE
  drawBox( 230, 303, 280, 308);                  //WINDOW TOP LEFT LEFT HORIZONTAL OUTLINE
  setColor(WHITE);
  drawFilledBox(253, 280, 257, 335);             //WINDOW TOP LEFT LFFT VERTICAL
  drawFilledBox( 230, 304, 280, 308);            //WINDOW TOP LEFT LEFT HORIZONTAL

  setColor(BLACK);                               //WINDOW TOP LEFT RIGHT OUTLINE
  drawBox(290, 279, 341, 335);                   //WINDOW TOP LEFT RIGHT OUTLINE
  setColor(WINDOW);                              //WINDOW TOP LEFT RIGHT
  drawFilledBox( 290, 280, 340, 335);            //WINOW TOP LEFT RIGHT
  setColor(BLACK);                               //WINDOW TOP LEFT RIGHT OUTLINE
  drawBox(312, 279, 317, 335);                   //WINDOW TOP LEFT RIGHT VERTIACAL OUTLINE
  drawBox( 290, 303, 340, 308);                  //WINDOW TOP LEFT RIGHT HORIZAONTAL OUTLINE
  setColor(WHITE);
  drawFilledBox( 312, 280, 316, 335);            //WINDOW TOP LEFT RIGHT VERTICAL
  drawFilledBox( 290, 304, 340, 308);            //WINODW TOP LEFT RIGHT HORIZONTAL

  setColor(BLACK);                               //WINDOW TOP RIGHT LEFT OUTLINE
  drawBox(410, 279, 461, 335);                   //WINDOW TOP RIGHT LEFT OUTLINE
  setColor(WINDOW);                                //WINDOW TOP RIGHT LEFT
  drawFilledBox( 410, 280, 460, 335);            //WINDOW TOP RIGHT LEFT
  setColor(BLACK);                               //WINDOW TOP RIGHT LEFT
  drawBox( 433, 280, 438, 335);                  //WINDOW TOP RIGHT LEFT VERTICAL OUTLINE
  drawBox( 410, 303, 460, 308);                  //WINDOW TOP RIGHT LEFT HORIZONTAL OUTLINE
  setColor(WHITE);                               //WINDOW TOP RIGHT LEFT
  drawFilledBox(433, 280, 437, 335);             //WINDOW TOP RIGHT LEFT VERTICAL
  drawFilledBox(410, 304, 460, 308);             //WINDOW TOP RIGHT LEFT HORIZONTAL

  setColor(BLACK);                               //WINDOW TOP RIGHT RIGHT OUTLINE
  drawBox(470, 279, 521, 335);                   //WINDOW TOP RIGHT RIGHT OUTLINE
  setColor(WINDOW);                                //WINDOW TOP RIGHT RIGHT
  drawFilledBox( 470, 280, 520, 335);            //WINDOW TOP RIGHT RIGHT
  setColor(BLACK);                               //WINDOW TOP RIGHT RIGHT
  drawBox( 493, 280, 498, 335);                  //WINDOW TOP RIGHT RIGHT VERTICAL OUTLINE
  drawBox( 470, 303, 520, 308);                  //WINDOW TOP RIGHT RIGHT HORIZONTAL OUTLINE
  setColor(WHITE);                               //WINDOW TOP RIGHT RIGHT
  drawFilledBox( 493, 280, 497, 335);            //WINDOW TOP RIGHT RIGHT VERTICAL
  drawFilledBox( 470, 304, 520, 308);            //WINDOW TOP RIGHT RIGHT HORIZONTAL



  setColor(BLACK);                               //TREE
  drawBox( 80, 99, 111, 220);                    //TREE
  setColor(BROWN);                               //TREE
  drawFilledBox(80, 100, 110, 220);              //
  setColor(BLACK);                               //
  drawCircle(95, 230, 50);                       //
  drawCircle( 130, 240, 25 );                    //
  drawCircle( 60, 210, 30 );                     //
  drawCircle( 73, 250, 37 );                     //
  drawCircle( 130, 200, 25 );                    //
  drawCircle( 150, 220, 20 );                    //
  drawCircle( 40, 230, 20 );                     //
  setColor(TREE_GREEN);                          //
  drawFilledCircle( 95, 230, 50);                //
  drawFilledCircle( 130, 240, 25);               //
  drawFilledCircle( 60, 210, 30);                //
  drawFilledCircle( 73, 250, 37);                //
  drawFilledCircle( 130, 200, 25);               //
  drawFilledCircle( 150, 220, 20);               //
  drawFilledCircle( 40, 230, 20);                //END OF TREE


  glFlush();  /* Single buffered, so needs a flush. */
}

int main(int argc, char **argv)
{
  graphicsSetup( argc, argv, &display);
  glutMainLoop();
  return 0;
}
