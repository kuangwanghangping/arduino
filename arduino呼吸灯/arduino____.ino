#define RGB_RED 11
#define RGB_GREEN 10
#define RGB_BLUE 9

void setup() {
  // 将 RGB_RED、RGB_GREEN 和 RGB_BLUE 引脚设置为输出模式
  pinMode(RGB_RED, OUTPUT);
  pinMode(RGB_GREEN, OUTPUT);
  pinMode(RGB_BLUE, OUTPUT);
}

void loop() {
  breathe(RGB_RED);
  breathe(RGB_GREEN);
  breathe(RGB_BLUE);
}

void breathe(int pin) {
  int brightness = 0;
  int fadeAmount = 5;

  // 渐增亮度
  while (brightness < 255) {
    brightness = brightness + fadeAmount;
    analogWrite(pin, brightness);
    delay(30);
  }

  // 渐减亮度
  while (brightness > 0) {
    brightness = brightness - fadeAmount;
    analogWrite(pin, brightness);
    delay(30);
  }
}
