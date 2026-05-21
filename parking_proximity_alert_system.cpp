// C++ code

// Library for LCD screen
#include <LiquidCrystal.h>

const int trigPin = 9;
const int echoPin = 8;
const int ledPin = 4;
const int buzzer = 12;
const int rs = 11, en = 3, d4 = 7, d5 = 6, d6 = 5, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float duration, distance;


// Inputs and outputs for the buzzer and led
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  
}

void loop()
{
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration*.0343)/2; // distance in cm
  
  
  // Logic for object detection and braking
  
  // Breaking distance
  if (distance < 50)
  {
    lcd.clear();
    digitalWrite(ledPin, HIGH);
    tone(buzzer, 1000);
    lcd.setCursor(5,0);  
    lcd.print("BRAKE!");

	}
  
  // Object in range
  else if (50 <= distance && distance <= 100)
  {
    lcd.clear();
    digitalWrite(ledPin,HIGH);
    tone(buzzer, 500);
    lcd.setCursor(3,0);
    lcd.print("Object in");
    lcd.setCursor(1,1);
    lcd.print("view: ");
    lcd.print(distance);
    lcd.print("cm");

  }
  
  // Object not in range
  else
  {
    lcd.clear();
    digitalWrite(ledPin, LOW);
    noTone(buzzer);
    lcd.setCursor(4,0);
    lcd.print("No Object");
    lcd.setCursor(5,1);
    lcd.print("in view");
  	}
  
  delay(100);


}


