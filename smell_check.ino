#define sensor 3
#define heater 4
void setup() {
  pinMode(sensor, OUTPUT);
  pinMode(heater,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val=0;

  delay(237);
  digitalWrite(sensor, HIGH); //センサーオン
  delay(3);
  val=analogRead(A0);//センサー値をvalに保存
  delay(2);
  digitalWrite(sensor,LOW);

  digitalWrite(heater,HIGH);
  delay(8);
  digitalWrite(heater,LOW);
  Serial.println(val);

}
