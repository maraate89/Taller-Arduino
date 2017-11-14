int lightPin = A0;
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

void setup(){
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop(){

int lectura = analogRead(lightPin);

if(lectura < 300)
{
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
}
else if(lectura >= 300 && lectura < 600)
{
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, LOW);
}
else if(lectura >= 600)
{
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, HIGH);
}


delay(100);
}
