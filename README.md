# ultrasonic-sensor-lib

## Overview
Available in mbed, self-made library for Ultrasonic-sensor.

## Getting Started
- Add files to your working dir.
  - ultrasonic.cpp
  - ultrasonic.h
- Pin:
  - `Ultrasonic variable(triggerPin, echoPin);`
- Read value
  - `double distance = variavle.getDistance();`  

  ※ `variable`: Users can rewrite the name as they like.

## Features
Reduce the amount of code to use ultrasonic sensors. This makes code refactoring and bug fixing easier.

## Directory
```
.
├── main.cpp
├── ultrasonic.cpp
├── ultrasonic.h
├── LICENSE
└── README.md
```
### main.cpp
Test script.

### ultrasonic.cpp
This file contains compiled functions and data, which are linked with main.cpp to create an executable program.

### ultrasonic.h
This file contains various definitions needed to use library functions, mainly class definitions.

### LICENSE
Apache-2.0 license

### README.md
This file.

## Environments
|          |     |
|   :-:    | --- |
| OS       | Windows 10 Pro |
| IDE      | Arm Keil Studio, Visual Studio Code |
| HARD     | STM32(test: F446RE), HC-SR04 |
| LANG     | C++ |
| OTHERS   | - |

## Author
[Wassy | Ryoga Washizawa](https://github.com/wassy310)

## LICENSE
[Apache-2.0 license](https://github.com/apache/.github/blob/main/LICENSE)

## Contact
Bugs and feature requests please visit [GitHub Issues](https://github.com/wassy310/ultrasonic-sensor-lib/issues).  
For less important matters, please contact us through the following means.
- Twitter
  - [waaaa5267](https://twitter.com/waaaa5267)
- Discord
  - Account: Wassy#3241
  - Server: https://discord.gg/uAUrUnwAh9