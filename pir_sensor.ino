void setup() {
 pinMode(2,OUTPUT);
 pinMode(25,INPUT);
 Serial.begin(9600);

}

void loop() {
  int IR_status=digitalRead(25);
  if(IR_status== 1){
    digitalWrite(2,HIGH);
    Serial.println("Person Detected- LED ON");
    delay(10);
  }
else{
  digitalWrite(2,LOW);
  Serial.println("Person Detected - LED OFF");
  delay(10); 
}
}
