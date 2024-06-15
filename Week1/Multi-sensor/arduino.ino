// https://www.tinkercad.com/things/d51azpsbpev-spectacular-amur/editel?sharecode=g4gROJD0VSQ3oBhqhpNQfOANpmcbZI5qj1lfBlQrHcc

#include <Servo.h>
#include <LiquidCrystal.h>

#define trigPin 10
#define echoPin 11
#define pirPin 6
#define tempPin A0

Servo myservo;
LiquidCrystal lcd(8, 9, 5, 4, 3, 2);

bool personDetected = false;
float distanceBuffer;
bool detected;

void setup() {
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("Initializing...");
  delay(2000); // Wait for 2 seconds to see the initialization message

  myservo.attach(12);
  myservo.write(0); // Lock is initially locked
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirPin, INPUT);

  // Clear the LCD
  lcd.clear();
}

void loop() {
  int pirState = digitalRead(pirPin);
  float distance = readDistance();
  float temperatureC = readTemperature();

  bool personDetected = detectPerson(pirState, distance, temperatureC);

  displayStatus(personDetected);

  delay(1000);

  // Debug output
  Serial.print("PIR: ");
  Serial.print(pirState);
  Serial.print(" Distance: ");
  Serial.print(distance);
  Serial.print(" Temp: ");
  Serial.println(temperatureC);
}

float readDistance() {
  long duration;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  return (duration / 2) / 29.1;
}

float readTemperature() {
  int tempValue = analogRead(tempPin);
  float voltage = tempValue * (5.0 / 1023.0);
  return (voltage - 0.5) * 100.0;
}

bool detectPerson(int pirState, float distance, float temperatureC) {
  bool distanceReducing;
  bool temperatureInRange = (temperatureC > 30.0 && temperatureC < 40.0); 
  
  distanceReducing = (distanceBuffer > distance);
  distanceBuffer = distance;
  
  if (pirState == HIGH && distanceReducing && temperatureInRange)
  {
    detected = true;
  }
  
  if (!distanceReducing && !temperatureInRange && pirState == LOW && distance > 200)
  {
  	detected = false;
  }
  return detected;
}

void displayStatus(bool personDetected) {
  lcd.clear();
  if (personDetected) {
    lcd.print("Person Detected");
    myservo.write(90);
  } else {
    lcd.print("No Person");
    myservo.write(0); 
  }
}
