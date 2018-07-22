// moving objects inside a created window
float x = 60;
float y = 60;

int diameter = 60;

void setup()
{
  size(480,360);// window created
  frameRate(30);// framerate for movement of object
}
void draw()
{
  background(102);
  x= x+2.8;
  y=y+2.2;
  ellipse(x,y,diameter,diameter);
}