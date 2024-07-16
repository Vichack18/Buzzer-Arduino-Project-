
int buzzer=8;

void setup() {
  // put your setup code here, to run once:
 pinMode ( buzzer , OUTPUT);
 Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 int tecla=analogRead(A0);
 Serial.println (tecla); 
 
 if (tecl <= 1050 && tecla >= 1000){
       digitalWrite (buzzer , HIGH);
 }

else {
    digitalWrite (buzzer , LOW);
}

}
