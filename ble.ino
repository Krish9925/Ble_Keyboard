/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that writes the words, presses Enter, presses a media key and then Ctrl+Alt+Delete
 */
#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

int up = 14;
int left = 25;
int right = 27;
int down = 26;
int enter = 13;
int play = 12;


int hom = 15;
int bck = 4;
int volpl = 16;
int nxtrack = 5;
int prtrack = 17;
int volmi = 18;


void setup() {
  pinMode(up, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  pinMode(enter, INPUT_PULLUP);
  pinMode(play, INPUT_PULLUP);
  
  pinMode(hom, INPUT_PULLUP);
  pinMode(bck, INPUT_PULLUP);
  pinMode(volpl, INPUT_PULLUP);
  pinMode(volmi, INPUT_PULLUP);
  pinMode(nxtrack, INPUT_PULLUP);
  pinMode(prtrack, INPUT_PULLUP);
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected() && digitalRead(up)==0) {
    bleKeyboard.write(KEY_UP_ARROW);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(down)==0) {
    bleKeyboard.write(KEY_DOWN_ARROW);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(left)==0) {
    bleKeyboard.write(KEY_LEFT_ARROW);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(right)==0) {
    bleKeyboard.write(KEY_RIGHT_ARROW);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(enter)==0) {
    bleKeyboard.write(KEY_NUM_ENTER);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(play)==0) {
    bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(hom)==0) {
    bleKeyboard.write(KEY_MEDIA_WWW_HOME);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(bck)==0) {
    bleKeyboard.write(KEY_MEDIA_WWW_BACK);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(hom)==0) {
    bleKeyboard.write(KEY_MEDIA_WWW_HOME);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(volpl)==0) {
    bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(volmi)==0) {
    bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(nxtrack)==0) {
    bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
    delay(200);
    bleKeyboard.releaseAll();
  }

  if(bleKeyboard.isConnected() && digitalRead(prtrack)==0) {
    bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
    delay(200);
    bleKeyboard.releaseAll();
  }
}
