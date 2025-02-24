
//  //I2C Scaning 

// #include <Arduino.h>
// #include <Wire.h>
// #include <MPU9250_WE.h>


// void setup(){
//     Serial.begin(115200);
//     Wire.begin();

//     Serial.println("Start Scannig Devices .....");   

// }

// void loop(){

// byte address, error;
// int ndevice;

// ndevice = 0;

// for(address=1;address<127;address++){
//     Wire.beginTransmission(address);
//     error = Wire.endTransmission();

//     if(error==0){
//         Serial.print("Device found at address 0x");
//         if(address<16)
//             Serial.print("0");
//         Serial.print(address,HEX);
//         Serial.println("!");
//         ndevice++;
//     }
//     else if(error==4)
//     {
//         Serial.print("Unknown device found 0x");
//         if(address<16)
//             Serial.print("0");
//         Serial.print(address,HEX);
//         Serial.println("!");
        
//     }

    
// }

// if(ndevice==0){
//     Serial.println("No Device found");
// }
// else{
//     Serial.println("Completed Scanning");
// }

// delay(2000);

// }

