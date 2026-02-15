# STM32 GPIO Output Driver

## Overview
This project implements a minimal and production-oriented GPIO output driver for the STM32L4 series microcontroller.  
It focuses on safe initialization, deterministic output control, and clean firmware structure rather than a basic LED demonstration.

## Target Platform
- MCU: STM32L475VGT6 (ARM Cortex-M4F)
- Board: B-L475E-IOT01A (STM32 IoT Discovery)
- GPIO Pin: PB14 (User LED)

## Software Stack
- STM32CubeIDE
- STM32CubeMX
- STM32 HAL (L4 series)

## Design Goals
- Ensure a known and safe GPIO state at startup
- Encapsulate GPIO configuration in a reusable driver module
- Maintain clear separation between hardware abstraction and application logic
- Demonstrate deterministic timing behavior

## Key Features
- Push-pull GPIO output configuration
- EMI-aware output speed selection
- Explicit control of initial pin state
- Modular driver-based firmware structure
- Minimal logic in main application loop

## Firmware Architecture
The firmware is structured into:
- Driver layer: Handles GPIO configuration and control
- Application layer: Uses driver APIs without direct hardware access

This approach improves maintainability and mirrors industry-standard embedded design practices.

## Build and Run
1. Open the `.ioc` file in STM32CubeMX
2. Generate code for STM32CubeIDE
3. Build and flash to the target board
4. Observe deterministic LED toggling on PB14

## Limitations
- Uses blocking delays (`HAL_Delay`)
- Not intended for real-time or multi-tasking use cases

## Future Improvements
- Timer-based non-blocking GPIO toggling
- Low-power sleep integration
- Multi-instance GPIO support

---

## Development Context

This firmware project was developed at the **IoT Innovation Lab**,  
Department of Electronics and Communication Engineering,  
**Chitkara University**.

The work was completed as part of hands-on embedded systems learning
and practical experimentation on real hardware platforms.

---

## Acknowledgements

I would like to express my sincere gratitude to:

- **Dr. Amit Kumar**
- **Dr. Amarjeet Kaur**
- **Mr. Rakesh Kumar**

for their guidance, mentorship, and 

