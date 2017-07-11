//Include the NeoPixel library
#include <Adafruit_NeoPixel.h>

//Set which pin the Arduino uses to communicate with the NeoPixels
#define PIN            6
//How many pixels are being used
#define NUMPIXELS      40

//Set some Neopixel specific data
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//Set the delay variable to one second
int delayval = 1000; 

void setup() {
//Start communication with the NeoPixels  
pixels.begin(); 
}

void loop() {
//Start with the first pixel and count from there
int i=0;

//Set pixels of the flag
//Row 1 of flag
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval);

//Row 2 of flag
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval);

//Row 3 of flag
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(0,0,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval);

//Row 4 of flag
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
pixels.setPixelColor(i, pixels.Color(50,50,50));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval);

//Row 5 of flag
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
pixels.setPixelColor(i, pixels.Color(50,0,0));
i++;
//Send pixel values
pixels.show();
//Delay before starting next row
delay(delayval);

//Clear all pixels
for(int i=0;i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(0,0,0));
}
//Send pixel valus
pixels.show();
//Delay before restarting the animation
delay(delayval);
}
