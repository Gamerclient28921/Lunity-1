#pragma once
#include "../../BigHead.h"
#include "../Cheat.h"
#include <chrono>

class HiveGlide : public Cheat
{
public:
	HiveGlide();
	void onTick();
	void onEnable();
	void onDisable();
};
