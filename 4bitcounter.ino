int ledPin0 = 2;
int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);
  digitalWrite(ledPin1, LOW);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);

  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, HIGH);

  delay(1000);

  digitalWrite(ledPin0, HIGH);

  delay(1000);
  
}