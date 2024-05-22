#include <Arduino.h>
#include <Ps3Controller.h>

#include "MotorDriver.hpp"
#include "Input.hpp"

const int motorR1 = 5;
const int motorR2 = 18;

const int motorL1 = 25;
const int motorL2 = 33;

const int motorRp = 19;
const int motorLp = 32;

const int pwmChannelRight = 0;
const int pwmChannelLeft = 1;

const int pwmFrequency = 12800;

MotorDrive motorRight = {
    motorR1,
    motorR2,
    motorRp,
    pwmChannelRight,
    pwmFrequency,
};

MotorDrive motorLeft = {
    motorL1,
    motorL2,
    motorLp,
    pwmChannelLeft,
    pwmFrequency,
};

void setup()
{
  Ps3.begin("2c:2c:1f:d0:04:be"); // 黒いコントローラーのアドレス
  motorRight.setup();
  motorLeft.setup();
  motorRight.neutral();
  motorLeft.neutral();
}

void loop()
{
  Input input = getInput();
  if (input.up)
  {
    motorRight.driveForward(200);
    motorLeft.driveForward(200);
  }
  else if (input.down)
  {
    motorRight.driveBackward(200);
    motorLeft.driveBackward(200);
  }
  else if (input.circle)
  {
    motorRight.driveBackward(200);
    motorLeft.driveForward(200);
  }
  else if (input.cross)
  {
    motorRight.stop();
    motorLeft.stop();
  }
  else if (input.square)
  {
    motorRight.driveForward(200);
    motorLeft.driveBackward(200);
  }
  else
  {
    motorRight.stop();
    motorLeft.stop();
  }
}
