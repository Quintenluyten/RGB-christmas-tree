


#define A PIN_PA6
#define B PIN_PA7
#define C PIN_PA1

char pins[] = {A, B, C};
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin A, B, C as an output.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i<3; i++){
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[(i+1)%3], LOW);
    delay(1000);
  }
}
