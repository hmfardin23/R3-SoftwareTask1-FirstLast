# R3-SoftwareTask1-FirstLast

In this Module our goal was to display numbers ranging from 0 to 99 on a 7-segment display; which, was controlled by a potentiometer. The number was inputted from a Potentiometer. The range of potentiometer is from 0 to 1023. To use the potentiometer for displaying different outputs ranging 0-99, we needed to convert the 1024 digits to 100 digits, by using a function called map(). The potentiometer inputs variable numbers which is why the wiper was connected to the analog port of the arduino. In this case, the pin of the potentiometer was connented to port (A5). We used a decoder (CD4511); which, converts 4-bit binary number to Decimal number, and displays that number on 7-Segment Display. The 4-bit binary combination from the input of the decoder, switches the transistors inside the 7-display segment, either HIGH or LOW, and the corresponding decimal number is seen. 

For the coding part:

Two functions were created for both the decoders, to return the decimal value based on the 4-bit binary inputs. The function was called inside the loop function and then some mathematical calculation was done to find the correct first and last digits, which were then displayed on the 7- Segment display.
