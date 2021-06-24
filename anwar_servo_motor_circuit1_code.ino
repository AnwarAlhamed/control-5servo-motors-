//task 1 Anwar

#include <Servo.h>

Servo servomotor1 ;
Servo servomotor2 ;
Servo servomotor3 ;
Servo servomotor4 ;
Servo servomotor5 ;

int i=0 ; //initial position 

void setup()
{
  servomotor1.attach(3);
  servomotor2.attach(6);
  servomotor3.attach(9);
  servomotor4.attach(10);
  servomotor5.attach(11);

  
}

void loop()
{
  for ( i=0 ; i<=90; i++){
   servomotor1.write(i);
   servomotor2.write(i);
   servomotor3.write(i);
   servomotor4.write(i);
   servomotor5.write(i);
    
    delay (15);
  }
  
  for ( i=90 ; i>=0; i--){
   servomotor1.write(i);
   servomotor2.write(i);
   servomotor3.write(i);
   servomotor4.write(i);
   servomotor5.write(i);
    
    delay(15);
  }
    
}