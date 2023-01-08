# AVR project template

This simple project serves as a skeleton for an AVR project.
It contains a simple LED blinking example for ATtiny85 with a Makefile.

The Makefile is currently set up for AVR-Dragon ISP.

## Makefile commands

### Compiling

```
make
```

### Cleanup

```
make clean
```

### Flashing

```
sudo make flash
```

### Fuses

```
sudo make fuse
```

Fuse settings: 8 MHz internal oscillator, WDT disabled, BOR enabled

For another setting use [AVR fuse calculator](https://www.engbedded.com/fusecalc/).
