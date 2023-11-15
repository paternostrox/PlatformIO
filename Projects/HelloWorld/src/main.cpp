#include <Arduino.h>

// put function declarations here:
int myFunction(int);

int value = 2;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(921600);
  Serial.println("Hello from the setup");

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println(myFunction(2));
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}

// put function definitions here:
int myFunction(int x) {
  value *= x;
  return value;
}