import processing.serial.*;
import cc.arduino.*;
// Arduino related
Arduino arduino ;
int red_pin = 11;
int green_pin = 10;
int blue_pin = 9;
// Declaring a variable of type PImage
PImage img ;
void setup () {
// println ( Arduino . list ());
arduino = new Arduino (this , Arduino . list () [0] , 57600) ;
// If the LED color does not change , the Arduino port is wrong .
// Replace Arduino . list () [0] to the right port - name ( such as " COM1 ").
arduino . pinMode ( red_pin , Arduino . OUTPUT ) ;
arduino . pinMode ( green_pin , Arduino . OUTPUT ) ;
arduino . pinMode ( blue_pin , Arduino . OUTPUT ) ;
size (500 , 500) ;
// The image file should exist in the data subfolder of the sketch folder
img = loadImage ("color - wheel .jpg ") ;
background (0) ;
// Draw the image to the screen at coordinate (0 ,0)
image ( img , 0 , 0) ;
loadPixels () ; // tell Processing , we want to access pixel values
}
void draw () {
if ( mousePressed == true ) {
// Get the color at mouseX , mouseY
// The pixels are stored in row - major format
int loc = mouseY * width + mouseX ;
int r = int( red ( pixels [ loc ]) ) ; // convert float to int
int g = int( green ( pixels [ loc ]) ) ;
int b = int( blue ( pixels [ loc ]) ) ;
setColor (r , g , b ) ;
}
}
void setColor ( int r , int g , int b ) {
// We are using a common - ANODE RGB LED.
arduino . analogWrite ( red_pin , 255 - r ) ;
arduino . analogWrite ( green_pin , 255 - g ) ;
arduino . analogWrite ( blue_pin , 255 - b ) ;
}