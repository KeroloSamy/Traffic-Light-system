int ledPin_red = 13;

int ledPin_yellow = 12;

int ledPin_green = 11;



void setup() {

  pinMode(ledPin_red, OUTPUT); 

  pinMode(ledPin_yellow, OUTPUT); 

  pinMode(ledPin_green, OUTPUT);

}

void loop() {

  digitalWrite(ledPin_red, HIGH); 

  delay(2000);
    digitalWrite(ledPin_yellow, HIGH);  
    delay(500);
  digitalWrite(ledPin_yellow, LOW);
    delay(500);
      digitalWrite(ledPin_yellow, HIGH);  
  delay(500);
      digitalWrite(ledPin_yellow, LOW);  
    delay(500);
  digitalWrite(ledPin_yellow, HIGH);
    delay(500);
    digitalWrite(ledPin_yellow, LOW);
    delay(500);



  digitalWrite(ledPin_red, LOW);



  digitalWrite(ledPin_yellow, LOW);

  digitalWrite(ledPin_green, HIGH);  

  delay(3000);

  digitalWrite(ledPin_green, LOW);  

  

}