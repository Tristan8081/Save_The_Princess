//Save the Princess by Tristan S-M


void setup() 
{
  // put your setup code here, to run once:
  MeggyJrSimpleSetup();
}

void loop() 
{
  DrawPx (0,0,Red);    //Draw Player/Mario
  DisplaySlate();     //Draw on screen
  
   //check to see if a button was pressed
   CheckButtonsDown();
    //If the righ arrow was pressed, add one to x.
    if (Button_Right && ReadPx(x + 1, y) == 5 || ReadPx(x + 1, y) == 7 || ReadPx(x + 1, y) == 8 || ReadPx(x + 1, y) == 2)
        {
          x= x + 1;
        }
    //If the left arrow was pressed, take one away from x.
    if (Button_Left && ReadPx(x - 1, y) == 5 || ReadPx(x - 1, y) == 7 || ReadPx(x - 1, y) == 8 || ReadPx(x - 1, y) == 2)
        {
          x= x - 1;
        }
     //If the up arrow was pressed, add one to y.
     if (Button_Up && ReadPx(y + 1, x) == 5 || ReadPx(y + 1, x) == 7 || ReadPx(y + 1, x) == 8 || ReadPx(y + 1, x) == 2)
        {
          y= y + 1;
        }
      //If the down arrow was pressed, take one away from y.
      if (Button_Down && ReadPx(y - 1, x) == 5 || ReadPx(y - 1, x) == 7 || ReadPx(y - 1, x) == 8 || ReadPx(y - 1, x) == 2)
        {
          y= y - 1;
        }

      if (y > 7)
        y = 7;
      if (y < 0)
        y = 0;
      if (x < 0)
        x = 0;
      if (x > 7)
        x = 7;
}

void Drawlevel1()  //maze walls for the first level
{
  DrawPx(0,2,Violet); 
  DrawPx(0,3,Violet);
  DrawPx(0,4,Violet);

  DrawPx(1,0,Violet);
  DrawPx(1,2,Violet);
  DrawPx(1,6,Violet);

  DrawPx(2,2,Violet);
  DrawPx(2,4,Violet);
  DrawPx(2,5,Violet); //maze walls for the first level

  DrawPx(3,1,Violet);
  DrawPx(3,2,Violet);
  DrawPx(3,4,Violet);
  DrawPx(3,5,Violet); //maze walls for the first level
  DrawPx(3,7,Violet);
 
  DrawPx(4,4,Violet);
  DrawPx(4,5,Violet);
  DrawPx(4,7,Violet); //maze walls for the first level

  DrawPx(5,0,Violet);
  DrawPx(5,1,Violet); //maze walls for the first level
  DrawPx(5,3,Violet);
  DrawPx(5,7,Violet);

  DrawPx(6,3,Violet);
  DrawPx(6,5,Violet);
  DrawPx(6,6,Violet);
  DrawPx(6,7,Violet); //maze walls for the first level

  DrawPx(7,0,Violet);
  DrawPx(7,1,Violet);
  DrawPx(7,3,Violet);
  DrawPx(7,7,White); //dot that you eat to go to next level

  DisplaySlate();
}

void Drawlevel2() //draws the second level to the game slate
{
DrawPx(1,7,16); //maze walls of level 2
DrawPx(1,0,16);
DrawPx(1,1,16);

DrawPx(2,6,16);
DrawPx(2,16,16);
DrawPx(2,2,16);
DrawPx(2,3,16);

DrawPx(3,4,16); //maze walls of level 2
DrawPx(3,5,16);

DrawPx(4,7,16);
DrawPx(4,0,16);
DrawPx(4,1,16);
DrawPx(4,2,16);

DrawPx(5,2,16);
DrawPx(5,3,16); //maze walls of level 2
DrawPx(5,5,16);
DrawPx(5,6,16);

DrawPx(6,4,16);
DrawPx(6,5,16);

DrawPx(2,7,White);//dot that you eat to the next level

DisplaySlate();
}

void Drawlevel3() //draws the second level to the game slate
{
DrawPx(0,0,Violet); //maze walls of level 3
DrawPx(0,5,Violet);
DrawPx(1,3,Violet);
DrawPx(1,6,Violet);

DrawPx(2,0,Violet);
DrawPx(2,2,Violet);
DrawPx(2,2,Violet);
DrawPx(2,4,Violet); //maze walls of level 3
DrawPx(2,5,Violet);

DrawPx(3,1,Violet);
DrawPx(3,2,Violet);
DrawPx(3,5,Violet);
DrawPx(3,6,Violet);
DrawPx(3,7,Violet);

DrawPx(4,3,Violet); //maze walls of level 3
DrawPx(4,7,Violet);

DrawPx(5,0,Violet);
DrawPx(5,2,Violet);
DrawPx(5,1,Violet);
DrawPx(5,4,Violet);
DrawPx(5,6,Violet);

DrawPx(6,3,Violet);
DrawPx(6,5,Violet);

DrawPx(7,1,Violet); //maze walls of level 3
DrawPx(7,7,Violet);

DrawPx(5,7,DimRed);

DisplaySlate();
}

