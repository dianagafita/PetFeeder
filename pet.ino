 #include <Servo.h>
 #include <Wire.h>

  Servo myservo;

  const int servoPin = 9;

  void setup() {
    myservo.attach(servoPin);
    
    myservo.write(0);
    delay(1000);
    
    myservo.detach();
  }

  void loop() {
    myservo.attach(servoPin);
   
    myservo.write(0);
    delay(1000);
    myservo.write(90);
    delay(1000);
    myservo.write(130);
    delay(1000);
    myservo.detach();
    delay(21600000); 
  }


// #include <Servo.h>

// Servo myservo;  // create servo object to control a servo
// // twelve servo objects can be created on most boards

// int pos = 0;    // variable to store the servo position

// void setup() {
//   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
// }

// void loop() {
 
//     myservo.write(0);                  // sets the servo position to zero degrees

//     delay(750);                         // waits for the servo to get there

//    myservo.write(100);              // sets the servo position to 100 degrees

//     delay(750);                        // waits for the servo to get there  

//    myservo.write(200);              // sets the servo position to 100 degrees

//     delay(1100);                        // waits for the servo to get there  
       
//    myservo.detach();  // attaches the servo on pin 9 to the servo object

// }
