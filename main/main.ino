/*

The MIT License (MIT)

Copyright (c) 2017 Tanay PrabhuDesai

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/


int leftPositive = 12;
int leftNegative = 13;

int rightPositive = 11;
int rightNegative = 10;

void setup() {
  pinMode(leftPositive, OUTPUT);   
  pinMode(leftNegative, OUTPUT);
  
  pinMode(rightPositive, OUTPUT);   
  pinMode(rightNegative, OUTPUT);
}

void switchRightForward() {
  digitalWrite(rightPositive, HIGH);
  digitalWrite(rightNegative, LOW);
}

void switchRightBackward() {
  digitalWrite(rightPositive, LOW);
  digitalWrite(rightNegative, HIGH);
}

void switchRightOff() {
  digitalWrite(rightPositive, LOW);
  digitalWrite(rightNegative, LOW);
}

void switchLeftForward() {
  digitalWrite(leftPositive, LOW);
  digitalWrite(leftNegative, HIGH);
}

void switchLeftBackward() {
  digitalWrite(leftPositive, HIGH);
  digitalWrite(leftNegative, LOW);
}

void switchLeftOff() {
  digitalWrite(leftPositive, LOW);
  digitalWrite(leftNegative, LOW);
}

void moveForward() {
  switchRightForward();
  switchLeftForward();
}

void moveBackward() {
  switchRightBackward();
  switchLeftBackward();
}

void turnRight() {
  switchRightForward();
  switchLeftBackward();
}

void turnLeft() {
  switchLeftForward();
  switchRightBackward();
}

void moveStop() {
  switchLeftOff();
  switchRightOff();
}


void loop() {
  moveForward();
  delay(5000);
  moveBackward();
  delay(5000);
}
