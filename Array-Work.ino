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
uint32_t blue =  pixels.Color(0,0,25);
uint32_t green =  pixels.Color(0,25,0);
uint32_t red =  pixels.Color(25,0,0);
uint32_t magenta =  pixels.Color(25,0,25);
uint32_t white =  pixels.Color(25,25,25);
uint32_t color[] = {red, blue, green, magenta, white};

void setup() {
//Start communication with the NeoPixels  
pixels.begin(); 
}

void loop() {
//Start with the first pixel and count from there
//int i[] = {1,3,5,7,9,11,13,15,17,19,20,22,24,26,28,30,32,34,36,38,2,4,6,8,10,12,14,16,18,21,23,25,27,29,31,33,35,37,39,0};
int i[40];
int z=1;
for (z=1; z<41; z++) {
  i[z] = random(0,39);
}
int s=0;
int c = random(1,5);
for (s=0; s<40; s++) {
  pixels.setPixelColor(i[s], color[c]);
  pixels.show();
  delay(delayval2);
  c = random(1,5);
}



//pixels.setPixelColor(i[s], pixels.Color(25,0,0));
//pixels.show();
//delay(delayval2);
delay(delayval3);
//Clear all pixels
for(int w=0;w<NUMPIXELS;w++){
  pixels.setPixelColor(w, pixels.Color(0,0,0));
}
//Send pixel valus
pixels.show();
//Delay before restarting the animation
delay(delayval1);
}
