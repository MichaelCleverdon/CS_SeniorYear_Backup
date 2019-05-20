#include <SPI.h>


int slaveSelect = 2;

int dely = 50;

void setup() {
  pinMode(slaveSelect, OUTPUT);
  SPI.begin();
  SPI.setBitOrder(LSBFIRST);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i++){
    digitalWrite(slaveSelect, LOW);
    SPI.transfer(i);
    digitalWrite(slaveSelect, HIGH);
    delay(dely);  
    }
  
}
