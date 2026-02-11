# Timing Model and Delay Strategy

## Use of HAL_Delay
This project uses `HAL_Delay()` to create a deterministic LED toggle period.
`HAL_Delay()` relies on the SysTick timer and blocks the CPU until the delay
expires.

## Why HAL_Delay is Acceptable Here
- The application performs a single task
- No real-time constraints exist
- Blocking does not affect system responsiveness
- Simplicity improves clarity for demonstration purposes

## Limitations
- CPU remains idle during delay period
- Not suitable for multi-tasking or real-time systems
- Can interfere with interrupt latency if misused

## Production Alternatives
- Hardware timers with interrupt callbacks
- RTOS-based delay primitives
- Low-power sleep modes with wake-up timers
