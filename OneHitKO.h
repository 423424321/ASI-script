// Copyright (c) 2019 Lordmau5
#pragma once

#include "TimedEffect.h"

class OneHitKO : public TimedEffect
{
public:
	OneHitKO(int _duration, std::string _description);

	void HandleTick() override;
};
