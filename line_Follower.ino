int leftSensor = 8;
int rightSensor = 9;

int left_F = 13;
int left_B = 12;

int right_B = 11;
int right_F = 10;

void setup() {                
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(left_F, OUTPUT);
  pinMode(left_B, OUTPUT);
  pinMode(right_F, OUTPUT);
  pinMode(right_B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("leftSensor - ");
  Serial.print(digitalRead(leftSensor));   // turn the LED on (HIGH is the voltage level)
  Serial.print(" ");
  Serial.print("rightSensor - ");
  Serial.println(digitalRead(rightSensor));
  delay(1000);               // wait for a second
  
  digitalWrite(left_F,0);digitalWrite(left_B,0);digitalWrite(right_F,0);digitalWrite(right_B,0);
  Serial.println("Stop");
  delay(2000);

  digitalWrite(left_F,1);digitalWrite(left_B,0);digitalWrite(right_F,1);digitalWrite(right_B,0);
  Serial.println("Move Forward");
  delay(2000);

  digitalWrite(left_F,0);digitalWrite(left_B,1);digitalWrite(right_F,0);digitalWrite(right_B,1);
  Serial.println("Move backward");
  delay(2000);

  digitalWrite(left_F,0);digitalWrite(left_B,1);digitalWrite(right_F,1);digitalWrite(right_B,0);
  Serial.println("Take Left Turn");
  delay(2000);

  digitalWrite(left_F,1);digitalWrite(left_B,0);digitalWrite(right_F,0);digitalWrite(right_B,1Q);
  Serial.println("Take Right Turn");
  delay(2000);
}
