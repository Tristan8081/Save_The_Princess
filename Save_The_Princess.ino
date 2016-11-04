//Save the Princess by Tristan S-M


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void Drawlevel1()
{
  DrawPx(0,2,Violet); //maze walls for the first level
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
  DrawPx(7,7,DimAqua); //dot that you eat to go to next level

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

DrawPx(2,7,DimAqua);//dot that you eat to the next level

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

DrawPx(5,7,DimAqua);

DisplaySlate();
}
