void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);

    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D6, LOW);

  int A = random(999);
  int B = random(999);
  int C = random(999);
  int D = random(999);

  if (D > B && D > C && D > A){
    digitalWrite(D3, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D6, HIGH);
    delay(500);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D6, LOW);
  } else if (A > B || A < C){
    digitalWrite(D3, HIGH);
  } else if (C > A && A < B){
    digitalWrite(D5, HIGH);
  } else if (B > C && B > A && C < A){
    digitalWrite(D6, HIGH);
  } 
  delay(10000);
}
