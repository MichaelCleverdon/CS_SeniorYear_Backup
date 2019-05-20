int gled = 9;           // the PWM pin the LED is attached to
int rled = 11;
int rbrightness = 0;    // how bright the LED is
int gbrightness = 0;
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(gled, OUTPUT);
  // pin 11 is red led one
  pinMode(rled, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of green led:
  analogWrite(gled, gbrightness);
  // set brightness of the red led
  analogWrite(rled, rbrightness);

  // change the brightness for next time through the loop:
  Serial.print(rbrightness);
  if(rbrightness <= 0 || rbrightness >= 255){
  gbrightness = gbrightness + fadeAmount;
  }
  if (gbrightness >= 255 || gbrightness <= 0){
    rbrightness = rbrightness + fadeAmount;
    
    }
  if((gbrightness >= 255 && rbrightness >= 255)|| (gbrightness <= 0 && rbrightness <= 0)){
    fadeAmount = -fadeAmount;   
    }
  
 
  // wait for 50 milliseconds to see the dimming effect
  delay(50);
}
