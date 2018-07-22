#include <AFMotor.h>

# include <stdio.h >
# include < LiquidCrystal.h >
# define ROW_LEN 16
LiquidCrystal lcd (12 , 11 , 5 , 4 , 3 , 2) ; // specify the arduino pins that
connect to the LCD
// Note : You can also use analog -in pins for LCD , so e.g.
// you can replace 2 by A2 above ( and change the corresponding wiring ).
char string1 [ ROW_LEN + 1]; // The last char is for null - termination with \0
char string2 [ ROW_LEN + 1]; // The last char is for null - termination with \0
void printLCD ( void ) {
lcd.clear () ;
lcd.setCursor (0 , 0) ;
lcd.print ( string1 ) ;
lcd.setCursor (0 , 1) ;
lcd.print ( string2 ) ;
delay (4000) ;
}
void setup ()
{
// initialize and specify the lcd type ( LiquidCrystal is a generic library for
various LCD s )
lcd.begin ( ROW_LEN , 2) ; // the one we use has 16 characters x 2 rows
}
void loop ()
{
// display coordinates start from top left and increase towards bottom right
// before printing we can set the cursor where we want
lcd.setCursor (0 , 0) ; // first character on the first row
lcd.print (" JacobsUniversity ") ;
// should fit exactly on the first row
delay (1000) ;
lcd.clear () ;
// clear everything from the LCD
// Set the cursor to column 4 and row 1
// we can also write without setting the cursor first
// the cursor will automatically increment by 1 ( column )
lcd.setCursor (4 , 1) ;
lcd.print ( 'I') ;
delay (250) ;
lcd.print ( 'M') ;
delay (250) ;
lcd.print ( 'S') ;
delay (250) ;
lcd.print ( ' ' ;
delay (250) ;
lcd.print ( 'L') ;
delay (250) ;
lcd.print ( 'a') ;
delay (250) ;
lcd.print ( 'b') ;
delay (500) ;
lcd.clear () ;
// Let us now print different kinds of numbers (ints , longs , floats ),
// which we may have received as samples from sensors etc.
int i = -20703;
unsigned int ui = 65535;
snprintf ( string1 , ROW_LEN + 1 , "A: %7d", i );
snprintf ( string2 , ROW_LEN + 1 , "B: %7u", ui );
printLCD () ;
unsigned long ul = 2147383648L;
snprintf ( string1 , ROW_LEN + 1 , "C: %lu", ul );
snprintf ( string2 , ROW_LEN + 1 , "D: %lx", ul ); // print it in hexadecimal ( base
16)
printLCD () ;
float f = 3.1415926;
// In Arduino , you cannot sprintf a float
// snprintf ( string1 , ROW_LEN + 1 , "E: %5.3 f" , f); // will not work
// snprintf ( string2 , ROW_LEN + 1 , "F: %e" , f); // will not work
// Instead convert it to an int and then display
long int lf = ( long int) ( f *100000) ;
snprintf( string1 , ROW_LEN + 1 , "E: %ld", lf );
snprintf ( string2 , ROW_LEN + 1 , "F: %lx in HEX", lf ) ; // print it in
hexadecimal ( base 16)
printLCD () ;
lcd.clear () ;
}
