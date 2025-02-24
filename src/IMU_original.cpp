// #include <util/delay.h>
// #include <MPU9250_WE.h>
// #include <Wire.h>

// #define MPU9250_ADDR 0x68
// #define ALPHA 0.98

// MPU9250_WE myMPU9250 = MPU9250_WE(MPU9250_ADDR);

// float  perivious_time, current_time, diff_T;
// float yaw, f_yaw , est_yaw;
// float p_yaw = 0;






// float D_time(){
//   current_time = millis();
//   diff_T = current_time - perivious_time;
//   perivious_time = current_time;
//   return diff_T;
// }

// float yaw_loop(float a){
//   float t = D_time();
//   float yaw =+ a * t; 
//   return yaw;

// }



// float compli_filter(float a , float b, float c){
// float filter ;
//   filter = (ALPHA)*(c+b)+(1-ALPHA)*a;
//   return filter;
// }


// void setup() {
//   Serial.begin(9600);
//   Wire.begin();
//   if(!myMPU9250.init()){
//     //Serial.println("MPU9250 does not respond");
//   }
//   else{
//     //Serial.println("MPU9250 is connected");
//   }

//   /* Apply the auto-calibration to determine the offsets for reuse.
//    * Uncomment "#define reuse_offsets" at the top if you want to reuse previous offsets.
//    */

//   //Serial.println("Position you MPU9250 flat and don't move it - calibrating...");
//   delay(1000);
//   myMPU9250.autoOffsets();
//   //Serial.println("Done!");
//   //Serial.println();
  
//   /* Get the offsets from calibration and display them. 
//   *  Uncomment line 20 if you want to reuse previous offsets.
//   */
//   xyzFloat aOffs = myMPU9250.getAccOffsets();  // get acceleration offsets
//   xyzFloat gOffs = myMPU9250.getGyrOffsets();  // get gyroscope offsets 
  
//   char buffer[35];
//   sprintf(buffer, "{%d.0, %d.0, %d.0}", (int)aOffs.x, (int)aOffs.y, (int)aOffs.z);  
//   //Serial.print("Acceleration offsets: ");
//   //Serial.println(buffer); 
//   sprintf(buffer, "{%d.0, %d.0, %d.0}", (int)gOffs.x, (int)gOffs.y, (int)gOffs.z);  
//   //Serial.print("Gyroscope offsets   : ");
//   //Serial.println(buffer); 
  
//   /* Settings */
//   myMPU9250.enableGyrDLPF();
//   myMPU9250.setGyrDLPF(MPU9250_DLPF_6);
//   myMPU9250.setSampleRateDivider(5);
//   myMPU9250.setGyrRange(MPU9250_GYRO_RANGE_250);
//   myMPU9250.setAccRange(MPU9250_ACC_RANGE_2G);
//   myMPU9250.enableAccDLPF(true);
//   myMPU9250.setAccDLPF(MPU9250_DLPF_6);
//   delay(200);

//  perivious_time = millis();
// }

// void loop() {
// /* _Now you can test your calibration data */
   
//   xyzFloat gValue = myMPU9250.getGValues();
//   xyzFloat gyr = myMPU9250.getGyrValues();
//   //xyzFloat mag = myMPU9250.getMagValues();

//   float z2 = gyr.z;
//   float z1 = gValue.z;

  
//   est_yaw = compli_filter(z1 , z2 , p_yaw);

//   p_yaw = est_yaw; 

//   yaw = yaw_loop(est_yaw);
//   //r_yaw = yaw_mag(mag.y,mag.x);
//   //f_yaw = ALPHA*yaw + (1-ALPHA)*r_yaw;
//   f_yaw = yaw*(M_PI/180.0);
//   f_yaw = f_yaw*0.000625;


//   //xyzFloat magval = myMPU9250.getMagValues();
//   float p = myMPU9250.getPitch();
//   float r = myMPU9250.getRoll(); 

//   //Serial.println("Acceleration in g (x,y,z):");
  
//    Serial.print(p);
//    Serial.print("/");
//    Serial.print(r);
//    Serial.print("/");
//    Serial.println(f_yaw);

//   // Serial.print(mag.x);
//   // Serial.print(" ,  ");
//   // Serial.print(mag.y);
//   // Serial.print(" ,  ");
//   // Serial.println(mag.z);

//   _delay_ms(20);

//  }
