#include <BluetoothSerial.h>

#define in 33
#define low 32
#define high 25

BluetoothSerial SerialBT;
int a = 0;


void setup() {
  
  pinMode(high, OUTPUT);
  pinMode(low, OUTPUT);
  SerialBT.begin("Yell penis for password");
  Serial.begin(115200);
}

void loop() {
  digitalWrite(high, HIGH);
  digitalWrite(low, LOW);
  // put your main code here, to run repeatedly:
  a = analogRead(in);
  SerialBT.println(a);
  Serial.println(a);
  delay(500);

}
