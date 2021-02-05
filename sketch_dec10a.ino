#include  <Servo.h>
Servo Myservo;

int ButtonValue=0; 
int Button = 3;


void setup()

{
  Myservo.attach(9);


pinMode(Button, INPUT);
}

void loop()
{

  ButtonValue=digitalRead(Button);

  if (ButtonValue !=0) {
    
    // delay(1000); //hier Zeit für Timer eingeben

 Myservo.write(0);

delay(3000); //Motor dreht für x Millisekunden
    
 Myservo.write(0);

exit(0);

    
    }

  else {
    
    }
  
 
 
  


}
