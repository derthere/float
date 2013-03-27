// ATMEL ATTINY85
//
//			+-\/-+
//	      PB5  1|    |8  VCC
//     (AI 3) PB3  2|    |7  PB2 (AI 1)
//     (AI 2) PB4  3|    |6  PB1 PWM
//	      GND  4|    |5  PB0 PWM
//

//to load connect VCC to 5V and GND to GND

int REDPin = 2;    // RED pin of the LED to PWM pin 4
int GREENPin = 1;  // GREEN pin of the LED to PWM pin 5
int BLUEPin = 0;   // BLUE pin of the LED to PWM pin 6

int sensor;
//int mpb;

void setup()
{
  
  //rgb led pins
  pinMode(REDPin, OUTPUT);
  pinMode(GREENPin, OUTPUT);
  pinMode(BLUEPin, OUTPUT);
 // Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop()
{
  //sensor values
 sensor= analogRead(2);
//  analogRead(A1);
 
//if (sensor < 40){  //turn LED green Ozone
if (sensor < 230){  //turn LED green VOC
//if (sensor > 220){ //turn LED green CO
  
    digitalWrite(REDPin, HIGH);
    digitalWrite(GREENPin, LOW);
    digitalWrite(BLUEPin, HIGH);
  }
   
 // if (40< sensor && sensor < 80){ yellow ozone
   if (230< sensor< 250){ // yellow VOC
//  if (220 > sensor > 180){ //turn LED yellow  CO
  
    digitalWrite(REDPin, LOW);
    digitalWrite(GREENPin, LOW);
    digitalWrite(BLUEPin, HIGH);
  }
    
    //if (80 < sensor && sensor < 150){ //turn LED red OZONE
      if (250< sensor< 300){ //red VOC
 //   if (140 < sensor < 180){ //turn LED red CO
  
    digitalWrite(REDPin, LOW);
    digitalWrite(GREENPin, HIGH);
    digitalWrite(BLUEPin, HIGH);
  }
    
    //if (sensor > 150) //pink/purple Ozone
    if (sensor> 300){ // pink VOC
   // if (sensor < 110){ //turn LED pink/purple CO
  
    digitalWrite(REDPin, LOW);
    digitalWrite(GREENPin, HIGH);
    digitalWrite(BLUEPin, HIGH);
  }

 
}


