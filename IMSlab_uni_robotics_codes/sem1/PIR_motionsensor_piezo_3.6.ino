int piezo = 5;
int pir = 7;
int motion_status = 0;
void setup () {
pinMode ( piezo , OUTPUT ) ;
pinMode ( pir , INPUT ) ;
}
void loop () {
motion_status = digitalRead ( pir ) ;
if ( motion_status == HIGH ) {
digitalWrite ( piezo , HIGH ) ;
delay (500) ;
digitalWrite ( piezo , LOW ) ;
} else {
digitalWrite ( piezo , LOW ) ;
}
}
