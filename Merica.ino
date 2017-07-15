//Create a US flag in an 8x5 NeoPixel Shield

//Include the NeoPixel library
#include <Adafruit_NeoPixel.h>

//Set which pin the Arduino uses to communicate with the NeoPixels
#define PIN            6
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
int i=0;

//Set pixels of the flag
//pixel 1 of flag
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
pixels.setPixelColor(i, pixels.Color(25,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval1);

//pixel 2 of flag
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval1);

//pixel 3 of flag
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(0,0,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval1);

//pixel 4 of flag
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,25,25));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval1);

//pixel 5 of flag
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
//Send pixel values
pixels.show();
//Delay before starting next pixel
delay(delayval2);
i++;
pixels.setPixelColor(i, pixels.Color(25,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting the clear
delay(delayval3);

//Clear all pixels
for(int i=0;i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(0,0,0));
}
//Send pixel valus
pixels.show();
//Delay before restarting the animation
delay(delayval1);
}
