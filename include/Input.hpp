#pragma once

#include "Ps3Controller.h"

// コントローラからの入力 (左十字キーと右側の4つのボタンのみ)
struct Input
{
    int up;        // 左十字キーの上が押されているかどうか
    int down;      // 左十字キーの下が押されているかどうか
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