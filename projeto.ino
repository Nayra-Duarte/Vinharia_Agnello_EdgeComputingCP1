int ldr = A0;
int ledVermelho = 8;
int ledAmarelo = 9;
int ledVerde = 10;
int buzzer = 11;
int valor = 0;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(ldr);

  Serial.println(valor);

  delay(200);
  
  if (valor > 900){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(buzzer, HIGH);
  	delay(3000);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }
  else if (valor >= 500 && valor <= 900){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(buzzer, LOW);
  }
  
  else{
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(buzzer, LOW);
  }    
}