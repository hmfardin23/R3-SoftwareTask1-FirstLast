int LD1 = 10, LD2 = 13, LD3 = 12, LD4 = 11; // Input pins of left decoder
int RD2 = 2, RD3 = 3, RD4 = 4, RD1 = 5;     //Input pins of right decoder

int firstDigit, lastDigit, potMeter, count;  //Creating required variables

void setup() {                      //Setting Pins as Input(Potentiometer) and Output(Decoder)
 pinMode(potMeter,INPUT);           
 pinMode(LD1,OUTPUT);               
 pinMode(LD2,OUTPUT);
 pinMode(LD3,OUTPUT);
 pinMode(LD4,OUTPUT);
 pinMode(LD1,OUTPUT);
 pinMode(LD2,OUTPUT);
 pinMode(LD3,OUTPUT);
 pinMode(LD4,OUTPUT);

 Serial.begin(9600);
}                                               

void loop() {

int potMeter = analogRead(A5);   //The potentiometer is Wiper is connected to the Analog pin 5 of the Arduino

  potMeter = map(potMeter,0,1023,0,99);       //The Range of Potentiometer is 0-1023. The 7-segment Displays should show values
                                              //ranging from 0-99. So map() is used to convert 1024 values of potentiometer to 100.
  Serial.println(potMeter);                   //Printing values of the potentiometer in the Serial Monitor
  
  count = log10(potMeter);                  //Counting the values inputted by the potentiometer
  
  firstDigit = potMeter % 10;               //Reading firstDigit
  
  lastDigit = potMeter / pow(10,count);     //Reading lastDigit
  
  
  
 rightSevenSeg(firstDigit);                 //Calling function rightSevenSeg
 leftSevenSeg(lastDigit);                   //Calling function leftSevenSeg
  
}

  void rightSevenSeg(int firstDigit){         //Binary input sent by the CD4511 is converted to Decimal Value which is 
  switch(firstDigit){                       //shown of the 7-Segment Display. In this case for the right Display.
    case 0:

    digitalWrite(RD1,LOW);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,LOW);
    break;
    
    case 1:
    digitalWrite(RD1,HIGH);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,LOW);
    break;
    
    case 2:
    digitalWrite(RD1,LOW);
    digitalWrite(RD2,HIGH);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,LOW);
    break;
    
    case 3:
    digitalWrite(RD1,HIGH);
    digitalWrite(RD2,HIGH);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,LOW);
    break;
    
    case 4:
    digitalWrite(RD1,LOW);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,HIGH);
    digitalWrite(RD4,LOW);
    break;
    
    case 5:
    digitalWrite(RD1,HIGH);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,HIGH);
    digitalWrite(RD4,LOW);
    break;
    
    case 6:
    digitalWrite(RD1,LOW);
    digitalWrite(RD2,HIGH);
    digitalWrite(RD3,HIGH);
    digitalWrite(RD4,LOW);
    break;
    
    case 7:
    digitalWrite(RD1,HIGH);
    digitalWrite(RD2,HIGH);
    digitalWrite(RD3,HIGH);
    digitalWrite(RD4,LOW);
    break;
    
    case 8:
    digitalWrite(RD1,LOW);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,HIGH);
    break;
    
    case 9:
    digitalWrite(RD1,HIGH);
    digitalWrite(RD2,LOW);
    digitalWrite(RD3,LOW);
    digitalWrite(RD4,HIGH);
    break;
    
    }
  }

  void leftSevenSeg(int lastDigit){           //Binary input sent by the CD4511 is converted to Decimal Value which is
  switch(lastDigit){                        //shown of the 7-Segment Display. In this case for the left Display.
    case 0:

    digitalWrite(LD1,LOW);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,LOW);
    break;
    
    case 1:
    digitalWrite(LD1,HIGH);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,LOW);
    break;
    
    case 2:
    digitalWrite(LD1,LOW);
    digitalWrite(LD2,HIGH);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,LOW);
    break;
    
    case 3:
    digitalWrite(LD1,HIGH);
    digitalWrite(LD2,HIGH);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,LOW);
    break;
    
    case 4:
    digitalWrite(LD1,LOW);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,HIGH);
    digitalWrite(LD4,LOW);
    break;
    
    case 5:
    digitalWrite(LD1,HIGH);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,HIGH);
    digitalWrite(LD4,LOW);
    break;
    
    case 6:
    digitalWrite(LD1,LOW);
    digitalWrite(LD2,HIGH);
    digitalWrite(LD3,HIGH);
    digitalWrite(LD4,LOW);
    break;
    
    case 7:
    digitalWrite(LD1,HIGH);
    digitalWrite(LD2,HIGH);
    digitalWrite(LD3,HIGH);
    digitalWrite(LD4,LOW);
    break;
    
    case 8:
    digitalWrite(LD1,LOW);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,HIGH);
    break;
    
    case 9:
    digitalWrite(LD1,HIGH);
    digitalWrite(LD2,LOW);
    digitalWrite(LD3,LOW);
    digitalWrite(LD4,HIGH);
    break;
   
    }
  }
