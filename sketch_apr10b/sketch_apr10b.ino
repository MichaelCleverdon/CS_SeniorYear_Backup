int sensorPin = A0;
int sensorPin1 = A1;
// select the input pin for the potentiometer
// select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int sensorValue1 = 0;
int trans = 6;
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(trans, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 //read the value from the sensor:
 sensorValue = analogRead(sensorPin);
 sensorValue1 = analogRead(sensorPin1);
 if(sensorValue < 150){
      digitalWrite(trans, LOW);
    }
 else{
      digitalWrite(trans, HIGH);
    }
 // Serial.print("LM358 "); 
 Serial.println(sensorValue);
 // Serial.print("Photosensor ");
 //Serial.println(sensorValue1);
 delay(20);

}
