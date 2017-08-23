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
uint32_t off = pixels.Color(0,0,0);
uint32_t color[] = {red, blue, green, magenta, white, off};


void setup() {
//Start communication with the NeoPixels  
pixels.begin(); 
}

void loop() {
//fadeInAndOut(25, 25, 0, 10);
//fadeInAndOut(25, 0, 50, 10);
//fadeInAndOut(0, 25, 25, 10);
colorFade(50, 25, 0, 100);
colorFade(25, 0, 50, 100);
colorFade(0, 25, 50, 100);


//Start with the first pixel and count from there
//int i[] = {1,3,5,7,9,11,13,15,17,19,20,22,24,26,28,30,32,34,36,38,2,4,6,8,10,12,14,16,18,21,23,25,27,29,31,33,35,37,39,0};
//int i[40];
//int z=1;
//for (z=1; z<41; z++) {
//  i[z] = random(0,39);
//}
//int s=0;
//int c = random(1,6);
//for (s=0; s<40; s++) {
//  pixels.setPixelColor(i[s], color[c]);
//  pixels.show();
//  delay(delayval2);
//  c = random(1,6);
//}
//delay(delayval3);
}


void fadeInAndOut(uint8_t red, uint8_t green, uint8_t blue, uint8_t wait) {

  for(uint8_t b=0; b <255; b++) {
     for(uint8_t i=0; i < NUMPIXELS; i++) {
        pixels.setPixelColor(i, red*b/255, green*b/255, blue*b/255);
     }
     pixels.show();
     delay(wait);
  };

  for(uint8_t b=255; b > 0; b--) {
     for(uint8_t i=0; i < NUMPIXELS; i++) {
        pixels.setPixelColor(i, red*b/255, green*b/255, blue*b/255);
     }
     pixels.show();
     delay(wait);
  };
};

void colorFade(uint8_t r, uint8_t g, uint8_t b, uint8_t wait) {
  for(uint16_t i = NUMPIXELS; i != -1; i--) {
      uint8_t curr_r, curr_g, curr_b;
      uint8_t curr_col;
      curr_col = pixels.getPixelColor(i); // get the current colour
      curr_b = curr_col & 0xFF; curr_g = (curr_col >> 8) & 0xFF; curr_r = (curr_col >> 16) & 0xFF;  // separate into RGB components

      while ((curr_r != r) || (curr_g != g) || (curr_b != b)){  // while the curr color is not yet the target color
        if (curr_r < r) curr_r++; else if (curr_r > r) curr_r--;  // increment or decrement the old color values
        if (curr_g < g) curr_g++; else if (curr_g > g) curr_g--;
        if (curr_b < b) curr_b++; else if (curr_b > b) curr_b--;
        pixels.setPixelColor(i, curr_r, curr_g, curr_b);  // set the color
        pixels.show();
         delay(10);  // add a delay if its too fast
      }
      delay(10);
  }
}
