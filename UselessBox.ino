#include <Servo.h>                        

Servo handServo;                          
Servo boxServo;

int switchStatus = 0;
int action = 1;
int randNumber = 0;
int testMode = 0;       // change testMode to 1 to enter test mode and 0 to run normally
int testAction = 0;     // if in test mode change testAction to the move number you want to test; library of moves at bottom             
const int ledPin = 13;                    
const int frontSwitchPin = 2;
const int handServoPin = 5;
const int boxServoPin = 6;



void setup()
{
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);                  
  digitalWrite(ledPin,HIGH);
  
  handServo.attach(handServoPin);              
  boxServo.attach(boxServoPin);
  handServo.write(180);                        
  boxServo.write(70);
}


void loop()
{
  switchStatus = digitalRead(frontSwitchPin); 
  //action = random(1,18);   // uncomment to make actions random
  
  if (switchStatus == LOW){        // if flip is switched           
    
    if(testMode == 0){             // if test mode is off
                                   // enters main loop of 18 actions
      if (action == 1)
      {
        move1();
        action++;
      }
      
      else if (action == 2)
      {
        move2();
        action++;
      }
      
      else if (action == 3)
      {
        move3();
        action++;
      }
     
      else if (action == 4)
      {
        move4();
        action++;
      }
      
      else if (action == 5)
      {
        move5();
        action++;
      }
      
      else if (action == 6)             
      {
        move6();
        action++;
      }
      
      else if (action == 7)
      {
        move7();
        action++;
      }
      
      else if (action == 8)
      {
        move8();
        action++;
      }
      
      else if (action == 9)
      {
        move9();
        action++;
      }
    
      
      else if (action == 10)
      {
        move10();
        action++;
      }
      
      else if (action == 11)
      {
        move11();
        action++;
      }
      
      else if (action == 12)
      {
        move12();
        action++;
      }
      
      else if (action == 13)
      {
        move13();
        action++;
      }
      
      else if (action == 14)
      {
        move14();
        action++;
      }
      
      else if (action == 15)
      {
        move15();
        action++;
      }
      
      else if (action == 16)
      {
        move16();
        action++;
      }
      
      else if (action == 17)
      {
        move17();
        action++;
      }
      
      else if (action == 18)
      {
        move18();
        action = 1;
      }
    }
    else           // if test mode is on
    {
      if(testAction == 1){move1();}
      else if(testAction == 2){move2();}
      else if(testAction == 3){move3();}
      else if(testAction == 4){move4();}
      else if(testAction == 5){move5();}
      else if(testAction == 6){move6();}
      else if(testAction == 7){move7();}
      else if(testAction == 8){move8();}
      else if(testAction == 9){move9();}
      else if(testAction == 10){move10();}
      else if(testAction == 11){move11();}
      else if(testAction == 12){move12();}
      else if(testAction == 13){move13();}
      else if(testAction == 14){move14();}
      else if(testAction == 15){move15();}
      else if(testAction == 16){move16();}
      else if(testAction == 17){move17();}
      else if(testAction == 18){move18();}
    }
  }
  
}


// move library
void move1()
{
  Serial.println("Action 1");
  for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(35);
      delay(550);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
}

void move2()
{
  Serial.println("Action 2");
  for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(35);
      delay(550);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
}

void move3()
{
      Serial.println("Action 4");           
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        delay(20);
      }
      for (int i = 180; i >= 44; i--)
      {
        handServo.write(i);
        delay(20);
      }
      delay(1000);
      handServo.write(35);
      delay(200);
      for (int i = 35; i <=180; i++)
      {
        handServo.write(i);
        delay(20);
      }
      for (int i = 110; i >= 70; i--)
      {
        boxServo.write(i);
        delay(20);
      }
}
void move4()
{
  for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(35);
      delay(550);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
  delay(1500);
  for (int i = 70; i <= 110; i++){
    boxServo.write(i);
    delay(6);
  }
  handServo.write(35);
  delay(3000);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
}

void move5()
{
      Serial.println("Action 5");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(35);
      delay(550);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(3000);
      boxServo.write(70);
}

void move6()   
{
      Serial.println("Action 6");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      boxServo.write(70);
      delay(2000);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(35);
      delay(550);
      handServo.write(180);
      delay(500);
      boxServo.write(70);
}

void move7()
    {
      Serial.println("Action 7"); 
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        delay(20);
      }
      for (int i = 180; i >= 44; i--)
      {
        handServo.write(i);
        delay(20);
      }
      delay(2000);
      handServo.write(35);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
    
void move8()
    {
      Serial.println("Action 8"); 
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      handServo.write(65);
      delay(550);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(2000);
      handServo.write(35);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
void move9()
    {
      Serial.println("Action 9");      
      for (int i = 70; i <110; i++)
      {
        boxServo.write(i);
        delay(20);
      }
      delay(1000);
      for (int i = 0; i < 12; i++)
      {
        for (int j = 70; j <= 110; j++){
          boxServo.write(j);
          delay(6);
        }
        delay(200);
      }
      for (int i = 180; i >= 44; i--)
      {
        handServo.write(i);
        delay(30);
      }
      handServo.write(35);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(3000);
      boxServo.write(80);
    }
    
void move10()
    {
      Serial.println("Action 10");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(400);
      handServo.write(35);
      delay(1000);
      for (int i = 0; i < 6; i++)
      {
        for (int j = 70; j <= 110; j++){
          boxServo.write(j);
          delay(6);
        }
        delay(200);
      }
      delay(500);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
    
void move11()
    {
      Serial.println("Action 11");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(35);
      delay(2000);
      for (int i = 0; i < 7; i++)
      {
        handServo.write(75);
        delay(100);
        handServo.write(40);
        delay(100);
      }
      delay(500);
      handServo.write(180);
      delay(1000);
      boxServo.write(70);
    }
void move12()
    {
      Serial.println("Action 12");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      boxServo.write(110);
      for (int i = 180; i >=44; i--)
      {
        handServo.write(i);
        delay(40);
      }
      delay(500);
      handServo.write(35);
      delay(200);
      for (int i = 35; i <=180; i++)
      {
        handServo.write(i);
        delay(40);
      }
      boxServo.write(70);
      delay(2000);
      boxServo.write(100);
      delay(3000);
      boxServo.write(70);
    }
void move13()
    {
      Serial.println("Action 13");
      for (int i = 70; i <= 105; i++)
      {
        boxServo.write(i);
        delay(100);
      }
      delay(1000);
      for (int i = 0; i < 10; i++)
      {
        for (int j = 70; j <= 100; j++){
          boxServo.write(j);
          delay(6);
      }
        delay(100);
      }
      boxServo.write(110);
      delay(100);
      handServo.write(35);
      delay(650);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
void move14()
    {
      Serial.println("Action 14");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(35);
      delay(2000);
      for (int i = 0; i < 3; i++)
      {
        handServo.write(65);
        delay(200);
        handServo.write(40);
        delay(200);
      }
      delay(1500);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      delay(1500);
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      handServo.write(35);
      delay(3000);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
    
void move15()
    {
      Serial.println("Action 15");
      for (int i = 70; i <= 110; i++)
      {
        boxServo.write(i);
        delay(50);
      }
      delay(1000);
      for (int i = 180; i >= 35; i--)
      {
        handServo.write(i);
        delay(50);
      }
      delay(2000);
      handServo.write(35);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
void move16()
    {
      Serial.println("Action 16");
      for (int i = 70; i <= 110; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      for (int i = 180; i >= 60; i--)
      {
        handServo.write(i);
        delay(40);
      }
      for (int i = 0; i < 3; i++)
      {
        handServo.write(60);
        delay(200);
        handServo.write(40);
        delay(800);
      }
      handServo.write(35);
      delay(2000);
      handServo.write(180);
      delay(500);
      boxServo.write(70);
    }
void move17()
    {
      Serial.println("Action 17");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(4000);
      boxServo.write(110);
      handServo.write(35);
      delay(650);
      handServo.write(180);
      delay(500);
      boxServo.write(100);
      delay(4000);
      boxServo.write(70);
    }
void move18()
 {
      Serial.println("Action 18");
      for (int i = 70; i <= 105; i++){
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      for (int i = 0; i < 3; i++)
      {      
        for (int j = 70; j <= 105; j++){
          boxServo.write(j);
          delay(50);
        }
        for (int j = 105; j >= 70; j--)
        {
          boxServo.write(j);
          delay(50);
        }
      }
      for (int j = 70; j <= 110; j++){
        boxServo.write(j);
        delay(50);
      }
      for (int i = 180; i >= 44; i--)
      {
        handServo.write(i);
        delay(40);
      }
      delay(1000);
      handServo.write(35);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
    }
