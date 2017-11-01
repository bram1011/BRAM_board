

// Assigns each letter to a pin
int B = 2;
int R = 3;
int A = 4;
int M = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(B, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(M, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 1; i <= 7; i++){
    if (i == 1){
      digitalWrite(B, HIGH);
      digitalWrite(R, LOW);
      digitalWrite(A, LOW);
      digitalWrite(M, LOW);
      delay(1000);
      }
    if (i == 2){
      digitalWrite(B, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(A, LOW);
      digitalWrite(M, LOW);
      delay(1000);
      }
    if (i == 3){
      digitalWrite(B, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(M, LOW);
      delay(1000);
      }
    if (i == 4){
      digitalWrite(B, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(M, HIGH);
      delay(2000);
      }
    if (i == 5){
      digitalWrite(B, LOW);
      digitalWrite(R, LOW);
      digitalWrite(A, LOW);
      digitalWrite(M, LOW);
      delay(500);
      }
    if (i == 6) {
      digitalWrite(B, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(M, HIGH);
      delay(500);
      }
    if (i == 7) {
      digitalWrite(B, LOW);
      digitalWrite(R, LOW);
      digitalWrite(A, LOW);
      digitalWrite(M, LOW);
      delay(1400);
      }
    }
    
}
