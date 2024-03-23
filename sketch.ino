const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 9;

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}
void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  setColor(255, 0, 0);

  delay(2000); 
  setColor(0,255, 0);

  delay(2000); 

  setColor(0, 0, 255);

  delay(2000); 
}
void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
