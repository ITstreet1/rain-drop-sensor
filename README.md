# rain-drop-sensor
Arduino Example for Rain Drop Detector with GSM Module

Check the Video of the functioing of the Code at https://vimeo.com/190994328

This rain sensor module is an easy tool for rain detection. It can be used as a switch when raindrop falls through the raining board and also for measuring rainfall intensity. The module features, a rain board and the control board that is separate for more convenience, power indicator LED and an adjustable sensitivity though a potentiometer. The analog output is used in detection of drops in the amount of rainfall. Connected to 5V power supply, the LED will turn on when induction board has no rain drop, and DO output is high. When dropping a little amount water, DO output is low, the switch indicator will turn on. Brush off the water droplets, and when restored to the initial state, outputs high level.

GSM MODULE (SIM-900): This is a GSM/GPRS-compatible Quad-band cell phone, which works on a frequency of 850/900/1800/1900MHz and which can be used not only to access the Internet, but also for oral communication (provided that it is connected to a microphone and a small loud speaker) and for SMSs. Externally, it looks like a big package (0.94 inches x 0.94 inches x 0.12 inches) with L-shaped contacts on four sides so that they can be soldered both on the side and at the bottom. Internally, the module is managed by an AMR926EJ-S processor, which controls phone communication, data communication (through an integrated TCP/IP stack), and (through an UART and a TTL serial interface) the communication with the circuit interfaced with the cell phone itself.

The processor is also in charge of a SIM card (3 or 1,8 V) which needs to be attached to the outer wall of the module. In addition, the GSM900 device integrates an analog interface, an A/D converter, an RTC, an SPI bus, an I²C, and a PWM module. The radio section is GSM phase 2/2+ compatible and is either class 4 (2 W) at 850/ 900 MHz or class 1 (1 W) at 1800/1900 MHz. The TTL serial interface is in charge not only of communicating all the data relative to the SMS already received and those that come in during TCP/IP sessions in GPRS (the data-rate is determined by GPRS class 10: max. 85,6 kbps), but also of receiving the circuit commands (in our case, coming from the PIC governing the remote control) that can be either AT standard or AT-enhanced SIMCom type. The module is supplied with continuous energy (between 3.4 and 4.5 V) and absorbs a maximum of 0.8 A during transmission.

ARDUINO : Arduino/Genuino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, an ICSP header and a reset button.

PROJECT DESCRIPTION

Here We Are Using Raindrop Sensor To Detect Raindrop Intensity And Generate An Analog Varying Signal From 0 To 1024. It Also Generates A Digital Output According To Its Preset Value. When The Raindrop Sensor Detects Rain Then It's Going To Send An Analog Signal To Arduino Uno Board.Arduino Uno Monitoring The Change Happening On Raindrop Sensor. When The Value Of Raindrop Sensor Going Beyond A Certain Level Our Arduino Uno Sends Some At Command To Our GSM Module And GSM Module Send An SMS To The Given Phone No.
