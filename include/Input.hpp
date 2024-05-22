#pragma once

#include "Ps3Controller.h"

// コントローラからの入力 (左スティックと右側の4つのボタンのみ)
struct Input
{
    int up;        // 左スティックのx軸方向の値 -255~255
    int down;      // 左スティックのy軸方向の値 -255~255
    bool circle;   // 〇ボタンが押されているかどうか
    bool square;   // □ボタンが押されているかどうか
    bool cross;    // ✕ボタンが押されているかどうか
    bool triangle; // △ボタンが押されているかどうか
};

Input getInput()
{
    Input in;
    in.up = Ps3.data.button.up;
    in.down = Ps3.data.button.down;
    in.circle = Ps3.data.button.circle;
    in.square = Ps3.data.button.square;
    in.cross = Ps3.data.button.cross;
    in.triangle = Ps3.data.button.triangle;

    return in;
}