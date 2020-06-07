void setup() {
  // put your setup code here, to run once:

  // These are the ports which the LEDs are conencted to as outputs
  pinMode(8,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  digitalWrite(8, HIGH); // Turn on voltage at output 8 (RED)
  delay(3000); // Wait for 3 seconds
  
  digitalWrite(10,HIGH); // // Turn on voltage at output 8 (YELLOW)
  delay(1000);

  // Turn off 8 and 10 and Turn on 12 (GREEN)
  digitalWrite(8, LOW); 
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12,LOW);
  
}
