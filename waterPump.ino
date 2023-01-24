#define BLYNK_PRINT Serial
#include <Blynk.h>
#include <Servo.h>
#include <Wire.h>
#include <ESP8266WiFi.h> 

#include <BlynkSimpleEsp8266.h>
//#define servo = D8
//#define servo = D7
const int led = D1;//D6
Servo servo;
Servo servo2;
BlynkTimer timer;

char auth[] = "dDsw9Mk39RXljh2TcuxSwamXeK1tShLM";//Enter your Blynk auth token

char ssid[] = "OnePlus 9R";//Enter your WIFI name

char pass[] = "kishor1234";//Enter your WIFI password



BLYNK_WRITE(V1){

  int pinValue=(param.asInt());
  digitalWrite(D1,pinValue);
  }
  BLYNK_WRITE(V2){

  servo.write(param.asInt());
 // servo2.write(param.asInt());

  }
void setup() {
    Serial.begin(9600);
  // put your setup code here, to run once:  
       
      
  pinMode(led,OUTPUT);
  servo.attach(D8);
  //servo2.attach(D7);
  delayMicroseconds(10);
 Blynk.begin(auth, ssid, pass);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run(); 
  timer.run();


  
}
