//used the "Blink" code for reference

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);  
}

// the loop function runs over and over again forever
void loop() {
      //blink LED
      //circuit will only complete when button is pressed down
      
      digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
      delay(20);                          // wait for 20 ms
      digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
      delay(20);                          // wait for 20 ms
}
