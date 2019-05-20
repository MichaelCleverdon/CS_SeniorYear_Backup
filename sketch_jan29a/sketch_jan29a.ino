int Redled = 9;
int Blueled = 11;
int Greenled = 10;
int brightnessr = 0;
int brightnessg = 0;
int brightnessb = 0
int fadeAmount = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(Redled, OUTPUT);
  pinMode(Blueled, OUTPUT);
  pinMode(Greenled, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  brightnessr = brightnessr + fadeAmount;

  if(brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
void setColor(int red, int green, int blue){
  red = 255 -red;
  green = 255-green;
  blue = 255-blue;

  analogWrite(Redled, red);
  analogWrite(Greenled, green);
  analogWrite(Blueled, blue);
  }
