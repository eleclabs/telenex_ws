#define PWMA 9
#define DIR1 10
#define DIR2 11
int vel_cmd = 0;

void setup() {
  Serial.begin(115200);
  pinMode(PWMA, OUTPUT);
  pinMode(DIR1, OUTPUT);
  pinMode(DIR2, OUTPUT);

  digitalWrite(DIR1, LOW);
  digitalWrite(DIR1, LOW);
}

void loop() {
  if(Serial.available()){
    vel_cmd = Serial.readString().toInt();
  }

  analogWrite(PWMA, vel_cmd*100);

}
