/*
The following code is responsible for running 2 IR, 2 LEDs, 1 LDR Sensors connected to an Arduino Board */
const int ledPin1 = 13;
const int ledPin2 = 11;
const int ldrPin = A0; // analog pin 0
int obstaclePin1 = 8;
int obstaclePin2 = 10;
int hasObstacle1 = LOW;
int hasObstacle2 = LOW;

void setup() { //  This function runs only once whenever the Arduino board boots up.

Serial.begin(9600);
pinMode(ledPin1, OUTPUT); // Here LED is determined as an ouput or an indicator.
pinMode(ledPin2, OUTPUT);
pinMode(obstaclePin1, INPUT);
pinMode(obstaclePin2, INPUT);
pinMode(ldrPin, INPUT); // Here LDR sensor is determined as input.
}

void loop() { // Void loop is ran again and again and contains main code.

int ldrStatus = analogRead(ldrPin);
hasObstacle1 = digitalRead(obstaclePin1);
hasObstacle2 = digitalRead(obstaclePin2);
Serial.println(ldrStatus);
if(hasObstacle1 == HIGH)
{
  if(ldrStatus < 100)
  {
    Serial.println("Light 1 ON");
    digitalWrite(ledPin1, HIGH);
  }
  else
  {
    Serial.println("Light 1 OFF");
    digitalWrite(ledPin1, LOW);
  }
}

else
{
  Serial.println("IR 1 Clear");
  digitalWrite(ledPin1, LOW);
}

if(hasObstacle2 == HIGH)
{
  if(ldrStatus < 100)
  {
    Serial.println("Light 2 ON");
    digitalWrite(ledPin2, HIGH);
  }
  else
  {
    Serial.println("Light 2 OFF");
    digitalWrite(ledPin2, LOW);
  }
}

else
{
  Serial.println("IR 2 Clear");
  digitalWrite(ledPin2, LOW);
}

delay(100);

}
