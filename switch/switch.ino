int gled = 8;
int rled = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(gled, OUTPUT);
  pinMode(rled,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gled, HIGH);
  digitalWrite(rled, LOW);
  delay(1000);
  digitalWrite(gled, LOW);
  digitalWrite(rled, HIGH);
  delay(1000);
  
}
