//Create a US flag in an 8x5 NeoPixel Shield

//Include the NeoPixel library
#include <Adafruit_NeoPixel.h>

//Set which pin the Arduino uses to communicate with the NeoPixels
#define PIN            13
//How many pixels are being used
#define NUMPIXELS      40

//Set some Neopixel specific data
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//Set the delay variable to one second
int delayval1 = 1000; 
int delayval2 = 250;
int delayval3 = 2000;
String blue =  "0,0,25";
String white =  "25,25,25";
String red = "25,0,0";

void setup() {
//Start communication with the NeoPixels  
pixels.begin(); 
}

void loop() {
//Start with the first pixel and count from there
int i[] = {1,3,5,7,9,11,13,15,17,19,20,22,24,26,28,30,32,34,36,38,2,4,6,8,10,12,14,16,18,21,23,25,27,29,31,33,35,37,39,0};
int s=0;
while (s<40) {
  switch (i[s]) {
    case 0:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 1:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 2:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 3:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 4:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 5:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 6:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 7:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 8:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 9:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 10:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 11:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 12:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 13:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 14:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 15:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 16:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 17:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 18:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 19:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 20:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 21:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 22:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 23:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 24:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 25:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 26:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 27:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 28:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 29:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 30:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 31:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 32:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 33:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 34:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 35:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 36:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 37:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    case 38:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;  
    case 39:
      pixels.setPixelColor(i[s], pixels.Color(25,0,0));
      break;
    default:
      pixels.setPixelColor(i[s], pixels.Color(0,0,25));
      break;  
  
  }
  pixels.show();
  delay(delayval2);
  s++;
}


//pixels.setPixelColor(i[s], pixels.Color(25,0,0));
//pixels.show();
//delay(delayval2);

//Clear all pixels
for(int w=0;w<NUMPIXELS;w++){
  pixels.setPixelColor(w, pixels.Color(0,0,0));
}
//Send pixel valus
pixels.show();
//Delay before restarting the animation
delay(delayval1);
}
