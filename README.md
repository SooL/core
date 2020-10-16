 [![Gitter chat](https://badges.gitter.im/SooL/community.png)](https://gitter.im/SooL/community)

# SooL Core Files
This repository hosts the "core" files of the _STM32 Object Oriented Library_ aka _SooL_.
Those files will allows usual low level manipulations for almost all registers of all peripherals.

## What can I expect ?
You might expect all STM32 registers to be accessibles through at least the conventional synthax : 
```cpp
PERIPHERAL->REGISTER = value;
//Real example : 
GPIOA->MODER &= ~(3 << 6);
GPIOA->MODER |= 2 << 6;
```
However, you should also be able to access almost every _fields_ of those registers through
```cpp
PERIPHERAL->REGISTER.FIELD = value;
//Real example :
GPIOA->MODER.MODE3 = 2;
```

You will also have some functions implemented to perform some higher level functions, such as 
```cpp
GPIOA->enable_clock();
```

And lots of stuff to dig in.

## What should I be cautious about ?
_SooL_ is a development stage. One may say that it is in a "alpha" state. Therefore, even if we are aware about the pain to handle this kind of stuff from a user perspective, there might be in-depth changes, naming changes, bugs and other stuff. Even though we will try to avoid these as much as possible.

You shall also be warry about the USB stuff. It is way more complicated to handle than any other peripheral on our side and might suffer from a large amount of issues.

## Where can I get more informations ?
You can find more information on the documentation repository.
