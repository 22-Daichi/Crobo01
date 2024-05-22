// クローラー用のプログラムです

#include <Arduino.h>
#include <Ps3Controller.h>

#include "MotorDriver.hpp"
#include "Input.hpp"

const int motorR1 = 5;  // AIN1
const int motorR2 = 18; // AIN2

const int motorL1 = 25; // BIN1
const int motorL2 = 33; // BIB2

const int motorRp = 19; // PWMA
const int motorLp = 32; // PWMB

const int pwmChannelRight = 0; // 右のモーター用のpwmチャンネル
const int pwmChannelLeft = 1;  // 右のモーター用のpwmチャンネル

const int pwmFrequency = 12800; // 　pwmの周波数

// ここに構造体の宣言など

void setup()
{
  Ps3.begin("2c:2c:1f:d0:04:be"); // 黒いコントローラーと接続するためのおまじない
  // ここに必要な処理を書く。pinModeなどなど
}

void loop()
{
  Input input = getInput();
  if (input.up)
  {
    // 十字キーの上を押された時の処理をここに書く
  }
  else if (input.down)
  {
    // 十字キーの下を押された時の処理をここに書く
  }
  else if (input.circle)
  {
    // 〇ボタンを押された時の処理をここに書く
  }
  else if (input.cross)
  {
    // ×ボタンを押された時の処理をここに書く
  }
  else if (input.square)
  {
    // □ボタンを押された時の処理をここに書く
  }
  else
  {
    // 何も押してない時の処理をここに書く
  }
}
