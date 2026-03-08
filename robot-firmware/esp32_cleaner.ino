// Robotic Mopping Cleaner - ESP32 Firmware

int motorLeft1 = 13;
int motorLeft2 = 12;
int motorRight1 = 14;
int motorRight2 = 27;

void setup() {

  Serial.begin(115200);

  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);

}

void loop() {

  moveForward();

}

void moveForward() {

  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);

  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);

}
