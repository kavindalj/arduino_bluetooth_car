#include <Servo.h>

Servo st;
char bt;

void setup() {
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (11, OUTPUT);
  st.attach(13);
  Serial.begin(9600);
}

void loop() {
  if ( Serial.available()) {
    bt = Serial.read();
    Serial.println(bt);
  }
  if (bt == 'b') {
    st.write(90);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
  }
  if (bt == 'e') {
    st.write(90);
    digitalWrite(6, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
  if (bt == 'g') {
    st.write(90);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
  if (bt == 'a') {
    st.write(83);
    analogWrite(5, 100);
    analogWrite(3, 255);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
  }
  if (bt == 'c') {
    st.write(100);
    analogWrite(3, 100);
    analogWrite(5, 255);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
  }
  if (bt == 'd') {
    st.write(83);
    analogWrite(6, 100);
    analogWrite(11, 255);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
  if (bt == 'f') {
    st.write(100);
    analogWrite(11, 100);
    analogWrite(6, 255);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
}
