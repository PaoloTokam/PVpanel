// C++ code
//
int set = 0;

int panel = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  panel = (analogRead(A0) * 6);
  Serial.println(panel);
  if (panel >= 4) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if (panel >= 2) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}