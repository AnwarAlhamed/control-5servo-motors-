# Control 5servo motors
## Designing and Programing 5 servo motors circuit.
### The circuit design 
The circuit contains:

- aduino UNO.
- Breadboard.
- 5 servo motors.
- Wires ( red= power , black= ground , yellow= signal).
 
and the circuit was designed using tinkercad website as below:
#### Diagram preview:
![Anwar servo motors circuit design](https://user-images.githubusercontent.com/86317095/123286750-d8e7d180-d516-11eb-9f9e-f376e253f061.png)

### Programing 5 servo motors to move from 0 to 90 degree.
 The electronic circuit was programmed using the C++ language via the Tinkercad website as shown  below.
 #### The code of the project: 
 ---
 
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
 ---
  
 
 
 ### For simulation:
 - [Press here ](https://www.tinkercad.com/things/iE3pcfJqkCu-anwar-servo-motor-circuit)
 



