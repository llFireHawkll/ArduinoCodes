int r1 = 2;
int r2 = 3;
int r3 = 4;
int r4 = 5;
int r5 = 8;
int r6 = 9;
int r7 = 10;
int r8 = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(r1, OUTPUT);
pinMode(r2, OUTPUT);
pinMode(r3, OUTPUT);
pinMode(r4, OUTPUT);
pinMode(r5, OUTPUT);
pinMode(r6, OUTPUT);
pinMode(r7, OUTPUT);
pinMode(r8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r1, LOW);
delay(1000);
digitalWrite(r1, HIGH);
delay(1000);

digitalWrite(r2, LOW);
delay(1000);
digitalWrite(r2, HIGH);
delay(1000);

digitalWrite(r3, LOW);
delay(1000);
digitalWrite(r3, HIGH);
delay(1000);

digitalWrite(r4, LOW);
delay(1000);
digitalWrite(r4, HIGH);
delay(1000);

digitalWrite(r5, LOW);
delay(1000);
digitalWrite(r5, HIGH);
delay(1000);

digitalWrite(r6, LOW);
delay(1000);
digitalWrite(r6, HIGH);
delay(1000);

digitalWrite(r7, LOW);
delay(1000);
digitalWrite(r7, HIGH);
delay(1000);

digitalWrite(r8, LOW);
delay(1000);
digitalWrite(r8, HIGH);
delay(1000);
}
