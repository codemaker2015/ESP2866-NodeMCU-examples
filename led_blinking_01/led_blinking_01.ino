int LED = 2;      // Assign LED to pin GPIO2

void setup() {
    // initialize GPIO2 as an output
    pinMode(LED, OUTPUT);
}

// the loop function runs forever
void loop() {
    digitalWrite(LED, LOW);     // turn the LED off
    delay(1000);                // wait for a second
    digitalWrite(LED, HIGH);    // turn the LED on
    delay(1000);
} 
