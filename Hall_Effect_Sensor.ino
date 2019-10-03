int hs=3;
void setup() {
  // put your setup code here, to run once:
pinMode(hs, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor=analogRead(hs);
Serial.println(sensor);
}
