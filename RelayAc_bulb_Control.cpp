int relay = 8; 
// LED connected to digital pin 13
void setup()
{
pinMode(relay, OUTPUT);

}
void loop()
{
digitalWrite(relay, LOW); 
 
// set the LED of
delay(1000);
digitalWrite(relay, HIGH); 
// set the LED On
delay(1000);

}