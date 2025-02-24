// #include<Arduino.h>
// #include<Wire.h>
// #include <MPU9250_WE.h>
// #include "MS5837.h"


// MS5837 sensor;

// void setup() {

//   Serial.begin(115200);

//   Serial.println("Starting");

//   Wire.begin();

//   // Initialize pressure sensor
//   // Returns true if initialization was successful
//   // We can't continue with the rest of the program unless we can initialize the sensor
//   while (!sensor.init()) {
//     Serial.println("Init failed!");
//     Serial.println("Are SDA/SCL connected correctly?");
//     Serial.println("Blue Robotics Bar30: White=SDA, Green=SCL");
//     Serial.println("\n\n\n");
//     delay(5000);
//   }

//   // .init sets the sensor model for us but we can override it if required.
//   // Uncomment the next line to force the sensor model to the MS5837_30BA.
//   //sensor.setModel(MS5837::MS5837_30BA);

//   sensor.setFluidDensity(997); // kg/m^3 (freshwater, 1029 for seawater)
// }

// void loop() {
//   // Update pressure and temperature readings
//   sensor.read();

//   float P = sensor.pressure();
//   float T = sensor.temperature();
//   float D = sensor.depth();

//   Serial.print("Pressure: ");
//   Serial.print(P);
//   Serial.println(" mbar");

//   Serial.print("Temperature: ");
//   Serial.print(T);
//   Serial.println(" deg C");

//   Serial.print("Depth: ");
//   Serial.print(D);
//   Serial.println(" m");

//   Serial.print("Altitude: ");
//   Serial.print(sensor.altitude());
//   Serial.println(" m above mean sea level");

//   delay(1000);
// }
