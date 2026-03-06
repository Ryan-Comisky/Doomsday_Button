// Doomsday button FSM

#include <Keyboard.h>

const int RST_PIN   = 9;
const int KEY_PIN   = 5;
const int ESTOP_PIN = 7;

bool RST;
bool KEY;
bool ESTOP;

//2 fsm state enums enumeratd
enum State {
  WAIT,
  FLASH
};
//checking for repeats
State currentState = WAIT;
State previousState = WAIT;

void setup() {
  pinMode(RST_PIN, INPUT);
  pinMode(KEY_PIN, INPUT);
  pinMode(ESTOP_PIN, INPUT);

  Keyboard.begin();
  Serial.begin(9600);
}


void loop() {


  RST   = digitalRead(RST_PIN);
  KEY   = digitalRead(KEY_PIN);
  ESTOP = !digitalRead(ESTOP_PIN);  //Estop is flipped because its a power cut

  State nextState = currentState;

  switch (currentState) {

    case WAIT:
      if (KEY && ESTOP && !RST) {
        nextState = FLASH;
      }
      break;

    case FLASH:
      if ((!KEY || !ESTOP) && RST) {
        nextState = WAIT;
      }
      break;
  }

 //extra non repeat logic
  bool enteringState = (nextState != currentState);
  previousState = currentState;
  currentState = nextState;


  if (enteringState) {

    if (currentState == FLASH) {
      Serial.println(">>> ENTER FLASH – sending keyboard shortcut");

      Keyboard.print("m23");
      Keyboard.write(KEY_RETURN);
      Keyboard.releaseAll();
    }

    if (currentState == WAIT) {
      Serial.println(">>> ENTER WAIT – sending reset shortcut");

      Keyboard.print("m24");
      Keyboard.write(KEY_RETURN);
      Keyboard.releaseAll();
    }
  }
//debug
  Serial.print("STATE: ");
  Serial.print(currentState == WAIT ? "WAIT" : "FLASH");
  Serial.print(" | ESTOP=");
  Serial.print(ESTOP);
  Serial.print(" KEY=");
  Serial.print(KEY);
  Serial.print(" RST=");
  Serial.println(RST);

}
