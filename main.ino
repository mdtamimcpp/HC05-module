char value = 0;

void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop() {
    if (Serial.available() > 0) {
        value = Serial.read();
        Serial.print(value);
        Serial.print("\n");
        if (value == '1') {
            digitalWrite(13, HIGH);
        }

        else if (value == '0') {
            digitalWrite(13, LOW);
        }
    }
}
