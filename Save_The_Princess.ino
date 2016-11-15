//Save the Princess by Tristan S-M

int level = 1;
int level = 2;
int level = 3;
int level = Boss;
int teleport = 1.1;
int teleport = 1.2;
int teleport = 1.3;
int teleport = 1.4;
int teleport = 2.1;
int teleport = 2.2;
int teleport = 2.3;
int teleport = 2.4;
int teleport = 2.5;



void setup() 
{
  Serial.begin(9600)i
}

void loop() 
{ 
  if (level == 1)
    Drawlevel1();

  if (level == 2)
    DrawLevel2();

  if (level == 3)
    DrawLevel3();

  if (level == Boss)
    DrawBossLevel();   
  
  updateMario();
  updateMinion();
}




void Drawlevel1()  //maze walls for the first level
{
  Serial.print("function called")
  

  
  DrawPx(0,2,6); //maze walls for the first level
  DrawPx(0,3,6);
  DrawPx(0,4,6);

  DrawPx(1,0,6);
  DrawPx(1,2,6);
  DrawPx(1,6,6);

  DrawPx(2,2,6);
  DrawPx(2,4,5);     //Hiding spot
  DrawPx(2,5,6); 

  DrawPx(3,1,6);
  DrawPx(3,2,6);
  DrawPx(3,4,6);
  DrawPx(3,5,6);
  DrawPx(3,7,6);
 
  DrawPx(4,4,6);
  DrawPx(4,5,5);     //Hiding spot
  DrawPx(4,7,6); 

  DrawPx(5,0,6);
  DrawPx(5,1,6); 
  DrawPx(5,3,6);
  DrawPx(5,7,6);

  DrawPx(6,3,6);
  DrawPx(6,5,6);
  DrawPx(6,6,6);
  DrawPx(6,7,6); 
  
  DrawPx(7,0,6);
  DrawPx(7,1,6);
  DrawPx(7,3,6);
  DrawPx(7,7,7); //dot that you eat to go to next level

  updateMinion2();  


  DisplaySlate();
}

void Drawlevel2() //draws the second level to the game slate
{

  
  DrawPx(1,7,6); //maze walls of level 2
  DrawPx(1,0,6);
  DrawPx(1,1,6);

  DrawPx(2,6,6);
  DrawPx(2,5,6);
  DrawPx(2,2,6);
  DrawPx(2,3,6);
  DrawPx(2,4,6);
  DrawPx(2,1,6);

  DrawPx(3,4,5);  //Hiding Spot
  DrawPx(3,5,6);
  DrawPx(3,2,6);

  DrawPx(4,7,6);
  DrawPx(4,0,6);
  DrawPx(4,1,6);
  DrawPx(4,2,6);

  DrawPx(5,1,6);
  DrawPx(5,2,6);
  DrawPx(5,3,6);
  DrawPx(5,5,6);
  DrawPx(5,6,6);

  DrawPx(6,1,6)
  DrawPx(6,4,6);
  DrawPx(6,5,6);
  DrawPx(6,3,6);
  DrawPx(6,2,5);    //Hiding Spot

  DrawPx(0,4,4);    //Teleport
  DrawPx(0,2,4);
  DrawPx(3,7,4);
  DrawPx(3,3,4);

  DrawPx(7,7,7);  //dot that you eat to the next level

  DisplaySlate();
  
}

void Drawlevel3() //draws the third level to the game slate
{

  DrawPx(1,0,6);  //maze walls of level 3
  DrawPx(0,5,6);
  DrawPx(1,3,6);
  DrawPx(1,6,6);

  DrawPx(2,0,6);
  DrawPx(2,2,6);
  DrawPx(2,3,6);
  DrawPx(2,4,6); 
  DrawPx(2,5,6);

  DrawPx(3,1,6);
  DrawPx(3,2,6);
  DrawPx(3,5,6);
  DrawPx(3,6,6);
  DrawPx(3,7,6);

  DrawPx(4,3,6);
  DrawPx(4,4,6); 
  DrawPx(4,7,6);

  DrawPx(5,0,6);
  DrawPx(5,2,6);
  DrawPx(5,3,5);
  DrawPx(5,1,6);
  DrawPx(5,4,6);
  DrawPx(5,6,6);
  
  DrawPx(6,5,6);
  DrawPx(6,4,5);
  DrawPx(7,1,6); 
  DrawPx(7,7,6);

  DrawPx(5,7,8);

  DrawPx(1,1,4);
  DrawPx(1,6,4);
  DrawPx(2,6,4);
  DrawPx(4,2,4);
  DrawPx(5,5,4);
  

  DisplaySlate();
  
}

void BossLevel()  //Draws Boss Level of the Game

{
  
}


void updateMario()
{
  DrawPx(0,0,1);
  //check to see if a button was pressed
   CheckButtonsDown();
    //If the righ arrow was pressed, add one to x.
    if (Button_Right && ReadPx(x + 1, y) == 5 || ReadPx(x + 1, y) == 7 || ReadPx(x + 1, y) == 8 || ReadPx(x + 1, y) == 2 || ReadPx(x + 1, y) == 4)
        {
          x= x + 1;
        }
    //If the left arrow was pressed, take one away from x.
    if (Button_Left && ReadPx(x - 1, y) == 5 || ReadPx(x - 1, y) == 7 || ReadPx(x - 1, y) == 8 || ReadPx(x - 1, y) == 2 || ReadPx(x - 1, y) == 4)
        {
          x= x - 1;
        }
     //If the up arrow was pressed, add one to y.
     if (Button_Up && ReadPx(y + 1, x) == 5 || ReadPx(y + 1, x) == 7 || ReadPx(y + 1, x) == 8 || ReadPx(y + 1, x) == 2 || ReadPx(y + 1, x) == 4)
        {
          y= y + 1;
        }
      //If the down arrow was pressed, take one away from y.
      if (Button_Down && ReadPx(y - 1, x) == 5 || ReadPx(y - 1, x) == 7 || ReadPx(y - 1, x) == 8 || ReadPx(y - 1, x) == 2 || ReadPx(y - 1, x) == 4)
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

void updateMinion()

{
  
}

void updateMinion2()

{
  
}
void gameOverScreen()         //GameOver sign


