#include <SPI.h>

const int play = 4;
const int next = 2;
const int previous = 7;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  pinMode(play, INPUT_PULLUP);
  pinMode(next, INPUT_PULLUP);
  pinMode(previous, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(play) == LOW) {
    Serial.println("play_pause");
    delay(500);  
    while (digitalRead(play) == LOW);  
  }

  if (digitalRead(next) == LOW) {
    Serial.println("next_track");
    delay(500);
    while (digitalRead(next) == LOW);
  }

  if (digitalRead(previous) == LOW) {
    Serial.println("previous_track");
    delay(500);
    while (digitalRead(previous) == LOW);
  }
}
