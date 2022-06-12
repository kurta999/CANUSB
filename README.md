# CANUSB
Firmware for my CAN-USB transreceiver for STM32

Application for this firmware can be found here: https://github.com/kurta999/CustomKeyboard

This readme and firwmare is still in beta, more commits will come soon.

To run this firmware successfully, you need to have:
NUCLEO-G474RE
Waveshare SN65HVD230 3.3 CAN Transreceiver
Whatever USB-UART converter

To run this project and successfully communicate with CAN device, you have to change hfdcan1.Init.Mode = FDCAN_MODE_NORMAL; from FDCAN_MODE_EXTERNAL_LOOPBACK. Loopback mode is only for testing.
