// Tinkercad Arduino Circuit Simulation Test
// Author: J Shreyas Aradhya (NNM24EC065)

const int LED_PIN = 13;
const int SENSOR_PIN = A0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Tinkercad Arduino Simulation Initialized");
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  
  Serial.print("Sensor ADC: ");
  Serial.print(sensorValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  if (voltage > 2.5) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(500);
}
