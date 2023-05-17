# RPIPicoFreeRTOSExample
RPI Pico FreeRTOS Example to demonstrate running four seperate tasks. Each blinking an LED at a different frequency.

This repo was used as an example for a YouTube video blog on my [channel](https://youtube.com/@drjonea)

## Clode and Build
Submodules are used to include the FreeRTOS kernel library. So Please clone with:
```
git clone --recurse-submodules https://github.com/jondurrant/RPIPicoFreeRTOSExample
```
Build is through the CMake and Make or Ninja utilties
```
mkdir build
cd build
cmake ..
make
```


## Electronics
The example assume four LED connected via 75ohm resistors to GPIO02 to GPIO05.


