float x = 60;
float y = 60;
float vx = 2;
float vy= 3;


int diameter = 60;

void setup()
{
  size(480,300);
  frameRate(800);
}
void draw()
{
  background(102);
  
  if (x==30){
    vx= -vx;}
    if(x == 450){
      vx = -vx;}
      if (y==30){
    vy= -vy;}
    if(y== 270){
      vy = -vy;}
      
      x = x + vx;
      y = y + vy;
      
     
      
  ellipse(x,y,diameter,diameter);
  fill(0);
}