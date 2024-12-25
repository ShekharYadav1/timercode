const int buttonpin = 2;         // declared pinbutton 2
const int buttonpin1 = 3;       
const int ledpin = 9;           // declared ledpin 9
int g=0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);        // led set as a output
pinMode(buttonpin,INPUT);      // buttonpin set as a input 

}

void loop() 
{
int sw2 = digitalRead(buttonpin);
//int sw3 = digitalRead(buttonpin1);    // use other button
  if(sw2 == HIGH)                      // if button pressed ,1 is high
  {
    digitalWrite(ledpin,!digitalRead(ledpin));  // if wsitch is high the LED ON ,and again pressed the LED is OFF
   delay(1000);                                 // it is user for debounce delay
     }
}
