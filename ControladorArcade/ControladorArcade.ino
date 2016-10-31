
#include "Keyboard.h"

const int arriba = 5;
const int recojer = 7;     
const int derecha = 4;     
const int izquierda = 6;     
const int atacar = 3;     
               
int ps1 = HIGH;


void setup() {

  pinMode(arriba, INPUT_PULLUP);
  pinMode(recojer, INPUT_PULLUP);
  pinMode(derecha, INPUT_PULLUP);
  pinMode(izquierda, INPUT_PULLUP);
  pinMode(atacar, INPUT_PULLUP);


  Keyboard.begin();
}

void loop() {

  int s1 = digitalRead(arriba);
  if (s1 == LOW)
  {
    Keyboard.press('w');
    delay(50);
  }   
  else
  {
    Keyboard.release('w');
  }

  int s2 = digitalRead(recojer);
  if (s2 == LOW)
  {
    Keyboard.press('e');
    delay(50);
  }   
  else
  {
    Keyboard.release('e');
  }
  int s3 = digitalRead(derecha);
  if (s3 == LOW)
  {
    Keyboard.press('d');
    delay(50);
  }   
  else
  {
    Keyboard.release('d');
  }
    int s4 = digitalRead(izquierda);
  if (s4 == LOW)
  {
    Keyboard.press('a');
    delay(50);
  }   
  else
  {
    Keyboard.release('a');
  }
  int s5 = digitalRead(atacar);
  if (s5 == LOW)
  {
    Keyboard.press(' ');
    delay(50);
  }   
  else
  {
    Keyboard.release(' ');
  }



}
