// #include <util/delay.h>
// #include <MPU9250_WE.h>
// #include <Wire.h>
// #include <Servo.h>





// // BMS PIN
// uint8_t B_pin = 17;
// float Voltage;

// //SOFT_KILL_SWITCH
// uint8_t Kill_Switch_Pin = 16;


// // LED indicator 
// uint8_t LED_1 = 33;
// uint8_t LED_2 = 34;
// uint8_t LED_3 = 35;
// uint8_t LED_4 = 36;
// uint8_t LED_5 = 37;
// uint8_t LED_6 = 38;
// uint8_t LED_7 = 39;
// uint8_t LED_8 = 15;



// int Kill_Switch(){
//     uint8_t a = digitalRead(Kill_Switch_Pin);
//     if (a==1){
//         return a;
//     }
//     else{
//         return a;
//     }   
// }


// float BMS(){

//     float v , percentage;
//     int a = analogRead(B_pin);
//     v = (3.33/(1023)*a);
//     percentage = (100/3.33)*v; 
//     return percentage;
// }


// void setup() {

//     Serial1.begin(115200);

//     // Enable INPUT PINS
//     pinMode(B_pin,INPUT);
//     pinMode(Kill_Switch_Pin,INPUT);

//     pinMode(LED_1,OUTPUT);
//     pinMode(LED_2,OUTPUT);
//     pinMode(LED_3,OUTPUT);
//     pinMode(LED_4,OUTPUT);
//     pinMode(LED_5,OUTPUT);
//     pinMode(LED_6,OUTPUT);
//     pinMode(LED_7,OUTPUT);
//     pinMode(LED_8,OUTPUT);


//     Serial1.println("Checking the Battery...");



// }


// void loop() {



//     uint8_t Kill = Kill_Switch();
    


//     Voltage = BMS();
    

//     digitalWrite(LED_1,HIGH);
//     digitalWrite(LED_2,HIGH);
//     digitalWrite(LED_3,HIGH);
//     digitalWrite(LED_4,HIGH);
//     digitalWrite(LED_5,HIGH);
//     digitalWrite(LED_6,HIGH);
//     digitalWrite(LED_7,HIGH);
//     digitalWrite(LED_8,HIGH);


//     Serial1.print("Kill Swtich Status: ");
//     Serial1.println(Kill);


//     Serial1.print("Battery level in voltage: ");
//     Serial1.println(Voltage);

    
    


    
//  }
