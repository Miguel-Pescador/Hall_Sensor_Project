int led = 13;
int sensor = 3;
int val;
int lastVal = HIGH;  // previous state

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(sensor);

  if (val != lastVal) {        // only print when state changes
    if (val == LOW) {
      Serial.println("Magnet detected");
      digitalWrite(led, HIGH);
    } else {
      Serial.println("No magnet nearby");
      digitalWrite(led, LOW);
    }
    lastVal = val;
  }
}
