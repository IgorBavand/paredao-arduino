const int pin_sensor = A0;
const int led1 = 9;
const int led2 = 10;
const int led3 = 11;
const int led4 = 12;
const int led5 = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(pin_sensor, INPUT);
  pinMode(led1 ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led3 ,OUTPUT);
  pinMode(led4 ,OUTPUT);
  pinMode(led5 ,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); 
  int valor = analogRead(pin_sensor);

  if(valor >= 480){
    digitalWrite(led1, HIGH);
  }
  if(valor >= 490){
    digitalWrite(led2, HIGH);
  }
  if(valor >= 500){
    digitalWrite(led3, HIGH);
  }
  if(valor >= 520){
    digitalWrite(led4, HIGH);
  }
  if(valor >= 530){
    digitalWrite(led5, HIGH);
  }
 
Serial.println(analogRead(pin_sensor));
//delay(5);

}
