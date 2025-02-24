// #include<Arduino.h>
// #include<Wire.h>
// #include <MPU9250_WE.h>
// #include "MS5837.h"

// MS5837 sensor;

// void setup() {

//   Serial.begin(115200);
//   Serial.println("Starting");
//   Wire.begin();
//   if (!sensor.init()){
//     while(1){
//       Serial.println("sensor not initialized");
//     }
//   }

//   sensor.setFluidDensity(997);
// }

// void loop() {
//   // Update pressure and temperature readings
//   sensor.read();

//   Serial.print("Pressure: ");
//   Serial.print(sensor.pressure());
//   Serial.println(" mbar");

//   Serial.print("Temperature: ");
//   Serial.print(sensor.temperature());
//   Serial.println(" deg C");

//   Serial.print("Depth: ");
//   Serial.print(sensor.depth());
//   Serial.println(" m");

//   Serial.print("Altitude: ");
//   Serial.print(sensor.altitude());
//   Serial.println(" m above mean sea level");

//   delay(1000);
// }




// //  uint8_t B_pin = 17;
// //  float voltage;

// // uint8_t Kill_Switch = 16;

// /*  // LED indicator 
// uint8_t LED_1 = 33;
// uint8_t LED_2 = 34;
// uint8_t LED_3 = 35;
// uint8_t LED_4 = 36;
// uint8_t LED_5 = 37;
// uint8_t LED_6 = 38;
// uint8_t LED_7 = 39;
//  */



// // void setup(){
    
//     //Serial.begin(115200);
//     // pinMode(B_pin,INPUT);
//     // pinMode(Kill_Switch,INPUT);

//     // pinMode(LED_1,OUTPUT);
//     // pinMode(LED_2,OUTPUT);
//     // pinMode(LED_3,OUTPUT);
//     // pinMode(LED_4,OUTPUT);
//     // pinMode(LED_5,OUTPUT);
//     // pinMode(LED_6,OUTPUT);
//     // pinMode(LED_7,OUTPUT);

//     // Serial.println("Checking the Battery...");

// // }

// // void loop(){

// //     // int a = analogRead(B_pin);
// //     // voltage = (3.33/(1023)*a);
// //     // Serial.print("Battery level in voltage: ");
// //     // Serial.println(voltage);

// //     // digitalWrite(LED_1,HIGH);
// //     // digitalWrite(LED_2,HIGH);
// //     // digitalWrite(LED_3,HIGH);
// //     // digitalWrite(LED_4,HIGH);
// //     // digitalWrite(LED_5,HIGH);
// //     // digitalWrite(LED_6,HIGH);
// //     // digitalWrite(LED_7,HIGH);
    

// //     // uint8_t a;
// //     // a = digitalRead(Kill_Switch);
// //     // Serial.println(a);

// // }