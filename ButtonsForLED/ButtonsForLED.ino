const int LED = 13;
const int BUTTON = 4;

int val = 0;

int old_val = 0; // old_val is a variable for the remembrance of the prior action;

int state = 0;   // state is a variable for the state of the actions. mainly just for differentiation.

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);

}

void loop() {
val = digitalRead(BUTTON);
  // put your main code here, to run repeatedly:
if (val == HIGH){
  digitalWrite(LED, HIGH);
} else {
  digitalWrite(LED, LOW);
}

}
