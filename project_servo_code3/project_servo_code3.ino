#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial UnoSerial(0, 1); // RX | TX
Servo myservo;
const int stepM = 6;
const int dirM = 5;
const int enM = 4;

int R_SW1, R_SW2, R_SW3, R_SW4, R_SW5, R_SW6, R_SW7, R_SW8;
int ESPvalue;
int check = 0;

const int SW1 = 2;
const int SW2 = 3;
const int SW3 = 7;
const int SW4 = 8;
const int SW5 = 9;
const int SW6 = 10;
const int SW7 = 11;
const int SW8 = 12;


void setup() {
//
//  pinMode(0, INPUT);
//  pinMode(1, OUTPUT);
  Serial.begin(9600);
  UnoSerial.begin(57600);

  pinMode(stepM, OUTPUT);
  pinMode(dirM, OUTPUT);
  pinMode(enM, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);
  pinMode(SW5, INPUT);
  pinMode(SW6, INPUT);
  pinMode(SW7, INPUT);
  pinMode(SW8, INPUT);
  digitalWrite(enM, HIGH);
  myservo.attach(13);

}

void loop () {

  R_SW1 = digitalRead(SW1);
  R_SW2 = digitalRead(SW2);
  R_SW3 = digitalRead(SW3);
  R_SW4 = digitalRead(SW4);
  R_SW5 = digitalRead(SW5);
  R_SW6 = digitalRead(SW6);
  R_SW7 = digitalRead(SW7);
  R_SW8 = digitalRead(SW8);


  ESPvalue = UnoSerial.parseInt();
  Serial.println(ESPvalue);

  if (check != 0) {
    check = 0;
    ESPvalue = 0;
  } else {
    if (R_SW1 == 1 or (ESPvalue == 2 and check == 0)) {
      check = 1;
      Serial.println("R_SW1");
      delay(5000);
      C1();
    }
    else if (R_SW2 == 1 or (ESPvalue == 3 and check == 0)) {
      check = 1;
      Serial.println("R_SW2");
      C2();
    }
    else if (R_SW3 == 1 or (ESPvalue == 4 and check == 0)) {
      check = 1;
      Serial.println("R_SW3");
      C3();
    }
    else if (R_SW4 == 1 or (ESPvalue == 5 and check == 0)) {
      check = 1;
      Serial.println("R_SW4");
      C4();
    }
    else if (R_SW5 == 1 or (ESPvalue == 6 and check == 0)) {
      check = 1;
      Serial.println("R_SW5");
      C5();
    }
    else if (R_SW6 == 1 or (ESPvalue == 7 and check == 0)) {
      check = 1;
      Serial.println("R_SW6");
      C6();
    }
    else if (R_SW7 == 1 or (ESPvalue == 8 and check == 0)) {
      check = 1;
      Serial.println("R_SW7");
      C7();
    }
    else if (R_SW8 == 1 or (ESPvalue == 9 and check == 0)) {
      check = 1;
      Serial.println("R_SW8");
      C8();
    }
  }


}
void C1()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //2
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //3
  delay(1000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(19); //4
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //5
  delay(1000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //6
  delay(1000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //7
  delay(1000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 19200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C2()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(7000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 26000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //2
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 15600; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //3
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 18400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C3()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 18400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //1
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(19); //2
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 15600; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //3
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 11200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //4
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //5
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 13200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C4()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 18400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //1
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(19); //2
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 15600; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //3
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 11200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //4
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 19200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);
}
void C5()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(7000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 20800; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //2
  delay(7000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 8800; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C6()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(6000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 20800; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(25); //2
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 10400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //3
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(19); //4
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 23600; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C7()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(5000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 10400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //2
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(19); //3
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 23600; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
void C8()
{
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 8000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(24); //1
  delay(3000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 10400; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //2
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 5200; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //3
  delay(4000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, LOW);
  for (int i = 0; i < 20800; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  delay(1000);
  myservo.write(93);
  delay(1500);
  myservo.write(27); //4
  delay(2000);
  myservo.write(150);
  delay(1000);
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 20000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(dirM, HIGH);
  for (int i = 0; i < 14000; i++) {
    digitalWrite(stepM, HIGH);
    delayMicroseconds(92);
    digitalWrite(stepM, LOW);
    delayMicroseconds(92);
  }
  digitalWrite(enM, LOW);
  delay(1000);
  digitalWrite(enM, HIGH);

}
