# Introduction To Ultrasonic Distance Detect Rader:
             Radar is a long-range object detection system that uses radio waves to establish certain parameters of an object 
             like its range, speed and position.The project is based on Sonar technology as I will be using an Ultrasonic Sensor
             to determine the presence of any object in a particular range.Rader is an object detection system. It uses Microwaves
             to determine the range, altitude, direction, or speed of objects. 
             
                     •The radar can transmit radio waves or microwaves which bounce off any object in their path. So, we can 
                      easily determine any object in the radar range.
                     •Ultrasonic Module HC-SR04 works on the principle of SONAR and RADAR system.
                     •HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board
             
# Requirements:

## High Level Requirements:
| ID | Description |
|--|--|
| HR01 | It shell send echo to find object  |
| HR02 | It shell able to detect Moving object |
| HR03 | Moving object signal will displayed on a display unit |
                    
## Low Level Requirements:

| ID | Description | HR ID |
|--|--|--|
| LR01 |It shell find the exact location of an Target | HR01|
| LR02 |It shell find distance of an object  | HR02|
|LR03 | It shell find speed of an object  | HR02|
| LR04 |It shell display distance of an object | HR03|

                    
                    
# Block Diagram:

## FlowChart
![Ultrasonic Distance Detect Rader](https://user-images.githubusercontent.com/98812442/155671211-4dc7ab90-caa7-46e8-aae8-ffb4ced34b4b.png)


## System block diagram
![System Display](https://user-images.githubusercontent.com/98812442/155674989-7dd5331a-4522-4f36-adaa-18a2a782a3f1.png)

## Circuit Design

![ultrasonic 1](https://user-images.githubusercontent.com/98812442/157185468-0b0cf173-5c45-44b8-9b16-41682d590c82.png)



# Components:

## Microcontroller ATmega32:

              •ATmega32 is an AVR, 8-bit low power microcontroller that contains 64-pin interface and is based on RISC architecture.
              •This AVR controller differs from PIC controllers in accordance with the instruction set where AVR. requires one clock 
               cycle to execute a number of instructions while PIC controllers need a number.
            
## Ultrasonic Sensor HC-SR04:
             •The ultrasonic sensor works on the principle of SONAR and RADAR system which is used to determine the distance 
              to an object.
             •An ultrasonic sensor generates the highfrequency sound (ultrasound) waves. When this ultrasound hits the object,
              it reflects as echo which is sensed by the receiver.
             •HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board.
             
## LCD Display :
             • The term LCD stands for liquid crystal display. It is one kind of electronic display module used in an extensive 
              range of applications like various circuits and devices like mobile phones, calculators, computers, TV sets, etc.
             •These displays are mainly preferred for multi-segment light-emitting diodes and seven segment display.
             
## Buzzer:
             •Buzzer is used for alerting the user at the completion of the cooking process.
             
## power supply:
             •A power supply is an electronic circuit that converts the voltage of an alternating current (AC) 
              into a direct current (DC) voltage.
              
# Advantages:
            •The ultrasonic sensor has high sensitivity, high frequency and high penetrating power therefore it can easily
              detect the external or deep objects.
            •The use of ultrasonic sensor makes this system more accurate and precise than other methods.
            •This system is easy to use, not dangerous during operation for nearby objects, person, equipment or material.
            •Radar systems have a number of defense as well as civil applications.
            
# Applications:
           •It is used in machines like Automotive parking sensor obstacle warning systems,industrial distance
            measurements, terrain monitoring robots.
           •RADAR speed meters are used by the traffic police for enforcing speed limit.
           •Marine RADARs used to locate the landmarks and other ships.
           •Air traffic control uses radars to track aircraft on the ground, in the air and to guide planes for smooth landings.


                   
                          







