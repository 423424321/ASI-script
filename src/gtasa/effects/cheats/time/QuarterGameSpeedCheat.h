#pragma once

#include "util/EffectBase.h"
#include "util/GameUtil.h"

#include "CCarCtrl.h"

#include "util/Config.h"

class QuarterGameSpeedCheat : public EffectBase
{
private:
	static float audioSpeed;

public:
	QuarterGameSpeedCheat();

	EffectBase* SetEffectDuration(int duration) override;

	void InitializeHooks() override;

	void Disable() override;

	void HandleTick() override;

	static int __fastcall HookedSetFrequencyScalingFactor(uint8_t* thisAudioHardware, void* edx, int slot, int offset, float factor);
	static int __fastcall HookedRadioSetVolume(uint8_t* thisAudioHardware, void* edx, int a2, int a3, float volume, int a5);
};
