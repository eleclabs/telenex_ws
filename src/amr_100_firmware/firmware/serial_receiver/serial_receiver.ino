#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN, LOW);

}

void loop() {
  if(Serial.available()){
    int x = Serial.readString().ToInt();
    if(x == 0){
      digitalWrite(LED_PIN,LOW);
    }else{
      digitalWrite(LED_PIN,HIGH);
    }
  }
}
