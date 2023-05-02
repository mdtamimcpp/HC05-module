<h3 align="center">Sending Data to <i>Arduino</i> via Bluetooth Module</h3><hr>

## HC-05 module Information

* This module works at 3.3V. We can connect to 5V supply voltage because the module has 5 to 3.3 V regulator.
* As HC-05 Bluetooth module has a 3.3V level for RX/TX and the microcontroller can detect the 3.3 V level, there is no need to change the transmit level of the HC-05 module. But we need to transfer transmit voltage level from microcontroller to RX of HC-05 module.
* The data transfer rate of HC-05 module can vary up to 1Mbps within 10 meters.
* Automatic connection to the last device: `Yes`
* Internal antenna: `Yes`

## For this project we need these materials

* 1X Arduino Uno R3;
* 1X Bluetooth HC-05 module;
* 1X BC547 Transistor;
* 1X DC Relay (9V);
* 1X 9V Battery;
* Android App interfacing with HC-05;<!-- if need the apk, plz contact -->
* Extra (switch, wires, soldering iron, AC load etc.)

## Circuit Schematics

<p align="center"><img src="Arduino HC-05 Bluetooth Connections with Controlling AC loads.jpg" width="90%"></p>

## Note :warning:

> The HC05 module is a Bluetooth module that uses serial communication, you can create more advanced projects with it.
