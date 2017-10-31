int rx = 0;
int tx = 1;
int motor1 = 9;
int motor2 = 10;
int motor3 = 5;
int motor4 = 6;
char sign, fast = '0';
void setup() 
{
  // put your setup code here, to run once:
pinMode(tx, OUTPUT);
pinMode(rx, INPUT);
pinMode(motor1, OUTPUT);
pinMode(motor2, OUTPUT);
pinMode(motor3, OUTPUT);
pinMode(motor4, OUTPUT);
allpinslow();
Serial.begin(9600);
while(!Serial)
{;}
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    
    switch(fast)
    {
      case '0':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
                
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

        case '1':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 33);
                analogWrite(motor2, 0);
                analogWrite(motor3, 33);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 33);
                analogWrite(motor3, 0);
                analogWrite(motor4, 33);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 33);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 33);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 33);
                analogWrite(motor3, 33);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 33);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 33);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 33);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 33);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;      

       case '2':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 63);
                analogWrite(motor2, 0);
                analogWrite(motor3, 63);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 63);
                analogWrite(motor3, 0);
                analogWrite(motor4, 63);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 63);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 63);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 63);
                analogWrite(motor3, 63);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 63);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 63);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 63);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 63);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '3':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 93);
                analogWrite(motor2, 0);
                analogWrite(motor3, 93);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 93);
                analogWrite(motor3, 0);
                analogWrite(motor4, 93);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 93);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 93);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 93);
                analogWrite(motor3, 93);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 93);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 93);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 93);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 93);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '4':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 123);
                analogWrite(motor2, 0);
                analogWrite(motor3, 123);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 123);
                analogWrite(motor3, 0);
                analogWrite(motor4, 123);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 123);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 123);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 123);
                analogWrite(motor3, 123);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 123);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 123);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 123);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 123);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '5':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 153);
                analogWrite(motor2, 0);
                analogWrite(motor3, 153);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 153);
                analogWrite(motor3, 0);
                analogWrite(motor4, 153);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 153);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 153);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 153);
                analogWrite(motor3, 153);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 153);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 153);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 153);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 153);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '6':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 183);
                analogWrite(motor2, 0);
                analogWrite(motor3, 183);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 183);
                analogWrite(motor3, 0);
                analogWrite(motor4, 183);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 183);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 183);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 183);
                analogWrite(motor3, 183);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 183);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 183);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 183);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 183);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '7':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 213);
                analogWrite(motor2, 0);
                analogWrite(motor3, 213);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 213);
                analogWrite(motor3, 0);
                analogWrite(motor4, 213);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 213);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 213);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 213);
                analogWrite(motor3, 213);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 213);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 213);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 213);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 213);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '8':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 227);
                analogWrite(motor2, 0);
                analogWrite(motor3, 227);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 227);
                analogWrite(motor3, 0);
                analogWrite(motor4, 227);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 227);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 227);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 227);
                analogWrite(motor3, 227);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 227);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 227);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 227);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 227);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '9')
              {fast = '9';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case '9':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 237);
                analogWrite(motor2, 0);
                analogWrite(motor3, 237);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 237);
                analogWrite(motor3, 0);
                analogWrite(motor4, 237);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 237);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 237);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 237);
                analogWrite(motor3, 237);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 237);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 237);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 237);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 237);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == 'q')
              {fast = 'q';}        
              break;

              case 'q':
              while(!Serial.available())
              {;}
              sign = Serial.read();
              if(sign == 'F')
              {
                analogWrite(motor1, 255);
                analogWrite(motor2, 0);
                analogWrite(motor3, 255);
                analogWrite(motor4, 0);
              }
              else if(sign == 'B')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 255);
                analogWrite(motor3, 0);
                analogWrite(motor4, 255);
              }
              else if(sign == 'R')
              {
                analogWrite(motor1, 255);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 255);
              }
              else if(sign == 'L')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 255);
                analogWrite(motor3, 255);
                analogWrite(motor4, 0);
              }
               else if(sign == 'G')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 255);
                analogWrite(motor4, 0);
              }
              else if(sign == 'I')
              {
                analogWrite(motor1, 255);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
               else if(sign == 'H')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 0);
                analogWrite(motor3, 0);
                analogWrite(motor4, 255);
              }
              else if(sign == 'J')
              {
                analogWrite(motor1, 0);
                analogWrite(motor2, 255);
                analogWrite(motor3, 0);
                analogWrite(motor4, 0);
              }
              else if(sign == 'S')
              {
                allpinslow();
              }
              else if(sign == '0')
              {fast = '0';}
              else if(sign == '1')
              {fast = '1';}
              else if(sign == '2')
              {fast = '2';}
              else if(sign == '3')
              {fast = '3';}
              else if(sign == '4')
              {fast = '4';}
              else if(sign == '5')
              {fast = '5';}
              else if(sign == '6')
              {fast = '6';}
              else if(sign == '7')
              {fast = '7';}
              else if(sign == '8')
              {fast = '8';}
              else if(sign == '9')
              {fast = '9';}        
              break;
      }  
  }

}

void allpinslow()
{
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, LOW);
}
