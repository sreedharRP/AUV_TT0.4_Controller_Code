// #include <util/delay.h>
// #include <MPU9250_WE.h>
// #include <Wire.h>
// #include "MS5837.h"



// // /** 
// // IMU Global Variables
// //  */
// // #define MPU9250_ADDR 0x68
// // #define ALPHA 0.98

// // MPU9250_WE myMPU9250 = MPU9250_WE(MPU9250_ADDR);

// // float  perivious_time, current_time, diff_T;
// // float yaw, f_yaw , est_yaw;
// // float p_yaw = 0;
// // float p , r;
// // /** 
// // IMU Global Variables
// // **/

// // //Pressure Sensor
// // MS5837 P_Sensor;


// // float D_time(){
// //   current_time = millis();
// //   diff_T = current_time - perivious_time;
// //   perivious_time = current_time;
// //   return diff_T;
// // }


// // float yaw_loop(float a){
// //   float t = D_time();
// //   float yaw =+ a * t; 
// //   return yaw;
// // }


// // float compli_filter(float a , float b, float c){
// // float filter ;
// //   filter = (ALPHA)*(c+b)+(1-ALPHA)*a;
// //   return filter;
// // }


// // void IMU_data(){

// //   xyzFloat gValue = myMPU9250.getGValues();
// //   xyzFloat gyr = myMPU9250.getGyrValues();


// //   float z2 = gyr.z;
// //   float z1 = gValue.z;

  
// //   est_yaw = compli_filter(z1 , z2 , p_yaw);

// //   p_yaw = est_yaw; 

// //   yaw = yaw_loop(est_yaw);
// //   f_yaw = yaw*(M_PI/180.0);
// //   f_yaw = f_yaw*0.000625;


 
// //    p = myMPU9250.getPitch();
// //    r = myMPU9250.getRoll(); 
  
// // }




// // void setup() {

// //   Serial.begin(115200);
  
// //   //ENABLE IMU   
// //   Wire.begin();
  
// //   myMPU9250.autoOffsets();
  
// //   xyzFloat aOffs = myMPU9250.getAccOffsets();  // get acceleration offsets
// //   xyzFloat gOffs = myMPU9250.getGyrOffsets();  // get gyroscope offsets 
// //   char buffer[35];
// //   sprintf(buffer, "{%d.0, %d.0, %d.0}", (int)aOffs.x, (int)aOffs.y, (int)aOffs.z);    
// //   sprintf(buffer, "{%d.0, %d.0, %d.0}", (int)gOffs.x, (int)gOffs.y, (int)gOffs.z);  
   

// //   myMPU9250.enableGyrDLPF();
// //   myMPU9250.setGyrDLPF(MPU9250_DLPF_6);
// //   myMPU9250.setSampleRateDivider(5);
// //   myMPU9250.setGyrRange(MPU9250_GYRO_RANGE_250);
// //   myMPU9250.setAccRange(MPU9250_ACC_RANGE_2G);
// //   myMPU9250.enableAccDLPF(true);
// //   myMPU9250.setAccDLPF(MPU9250_DLPF_6);
// //   delay(200);

// //   perivious_time = millis();

// //     // ENABLE IMU
    

// //     //Enable Pressure_sensor
// //     P_Sensor.setFluidDensity(997);

// // }


// // void loop() {

  
// //     IMU_data();
    


// //    Serial.print(p);
// //    Serial.print("/");
// //    Serial.print(r);
// //    Serial.print("/");
// //    Serial.print(f_yaw);
// //    Serial.println("");
 
// //  }
