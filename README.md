# Doomsday Button Project

## Table of Contents
- [Introduction](#introduction)
- [Project Objective](#project-objective)
- [Hardware Components](#hardware-components)
- [Software Components](#software-components)
- [Setup Instructions](#setup-instructions)
- [Usage Instructions](#usage-instructions)
- [Contributing](#contributing)
![IMG_0844](https://github.com/user-attachments/assets/11d6e0ad-a3f2-4224-9d0b-a6da4422a1f3)
![IMG_0908](https://github.com/user-attachments/assets/0ee35cd3-2705-4207-9eae-a34c6f3056fa)

---

## Introduction

The **Doomsday Button Project** is a custom-built device created using an **Arduino Micro Pro** and a **finite state machine (FSM)** to send a specific keyboard shortcut when activated. The system connects to an **E-stop button**, **key switch**, and a **standard push button for reset**.

The device is housed in a **3D-printed enclosure with a multi-color top** for improved readability. This project was built to automate the activation of a dorm room lighting system that flashes all lights **red** when triggered.

---

## Project Objective

The main objective of this project is to create a simple yet effective **"Doomsday Button"** that can be activated to send a keyboard shortcut, triggering a specific action in a dorm room lighting system.

---

## Hardware Components

- Arduino Micro Pro  
- Custom-designed circuit board  
- 3D-printed enclosure, top and bottom  
- E-stop button  
- Key switch  
- Standard push button (reset)
- Usb-C to Usb-A cable 

---

## Software Components

- Custom Arduino firmware  
- Finite State Machine (FSM) logic for reliable button handling  
- Keyboard shortcut emulation using the Arduino Micro's USB HID capability  

---

## Setup Instructions

1. Connect the **Arduino Micro Pro** to your computer.
2. Upload the custom firmware to the board using the **Arduino IDE**.
3. Assemble the custom-designed circuit board.
4. Connect the **E-stop button**, **key switch**, and **reset push button** to the Arduino.
5. Solder the components to the circuit board.
6. 3D print the enclosure with the multi-color top.
7. Install the Arduino and circuit board inside the enclosure.
8. Connect the device to a computer or a device for lighting system control.

---

## Usage Instructions

1. Turn the **key switch** to arm the system.
2. Press the **E-stop button** to activate the Doomsday Button.
3. The Arduino sends a **keyboard shortcut** to the connected computer.
4. The lighting system receives the shortcut and **flashes all lights red**.
5. Reset the **E-stop button** and turn the **key switch** to disarm the system.
6. Press the **reset push button** to reset the system.

---

## Contributing

Contributions are welcome! If you'd like to improve the project or add new features:

1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Open a Pull Request

For more details, see `CONTRIBUTING.md` if available.

---

This README provides a brief overview of the **Doomsday Button Project**, including its purpose, hardware, software, setup, and usage.
