void setup() {
    Serial.begin(9600);
    pinMode(D3, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D6, OUTPUT);
}
 
void loop() {
    int ldrValue = analogRead(A0);
   
    if (ldrValue < 500) {
        digitalWrite(D3, HIGH);  
        digitalWrite(D5, HIGH);
        digitalWrite(D6, HIGH);
    } else {
        digitalWrite(D3, LOW);  
        digitalWrite(D5, LOW);
        digitalWrite(D6, LOW);  
    }
 
    Serial.print("LDR Waarde: ");
    Serial.println(ldrValue);
 
    delay(500);
}
