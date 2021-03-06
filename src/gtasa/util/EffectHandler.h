#pragma once

#include "util/EffectBase.h"

#include "effects/EffectPlaceholder.h"
#include "effects/generic/SpawnVehicleEffect.h"
#include "effects/generic/TeleportEffect.h"
#include "effects/generic/Weather.h"

#include "effects/cheats/weapon/WeaponCheat1.h"
#include "effects/cheats/weapon/WeaponCheat2.h"
#include "effects/cheats/weapon/WeaponCheat3.h"
#include "effects/cheats/weapon/WeaponCheat4.h"

#include "effects/cheats/player/HealthArmorMoneyCheat.h"
#include "effects/cheats/player/SuicideCheat.h"

#include "effects/cheats/wanted/ClearWantedCheat.h"
#include "effects/cheats/wanted/WantedPlusTwoCheat.h"
#include "effects/cheats/wanted/WantedSixStarsCheat.h"

#include "effects/cheats/player/GetJetpackCheat.h"
#include "effects/cheats/player/GetParachuteCheat.h"

#include "effects/cheats/vehicle/BlowUpAllCarsCheat.h"

#include "effects/cheats/stats/FatPlayerCheat.h"
#include "effects/cheats/stats/MusclePlayerCheat.h"
#include "effects/cheats/stats/SkinnyPlayerCheat.h"

#include "effects/cheats/weapon/InfiniteAmmoCheat.h"

#include "effects/cheats/wanted/NeverWantedCheat.h"

#include "effects/cheats/time/QuarterGameSpeedCheat.h"
#include "effects/cheats/time/HalfGameSpeedCheat.h"
#include "effects/cheats/time/DoubleGameSpeedCheat.h"
#include "effects/cheats/time/QuadrupleGameSpeedCheat.h"
#include "effects/cheats/time/AlwaysMidnightCheat.h"
#include "effects/cheats/time/StopGameClockCheat.h"
#include "effects/cheats/time/FasterClockCheat.h"

#include "effects/cheats/vehicle/PinkCarsCheat.h"
#include "effects/cheats/vehicle/BlackCarsCheat.h"
#include "effects/cheats/vehicle/CheapCarsCheat.h"
#include "effects/cheats/vehicle/ExpensiveCarsCheat.h"
#include "effects/cheats/vehicle/InsaneHandlingCheat.h"
#include "effects/cheats/vehicle/AllGreenLightsCheat.h"
#include "effects/cheats/vehicle/CarsOnWaterCheat.h"
#include "effects/cheats/vehicle/BoatsFlyCheat.h"
#include "effects/cheats/vehicle/CarsFlyCheat.h"
#include "effects/cheats/vehicle/SmashNBoomCheat.h"
#include "effects/cheats/vehicle/AllCarsHaveNitroCheat.h"
#include "effects/cheats/vehicle/CarsFloatAwayWhenHitCheat.h"
#include "effects/cheats/vehicle/AllTaxisHaveNitroCheat.h"

#include "effects/cheats/ped/GhostTownCheat.h"

#include "effects/cheats/ped/PedsAttackEachOtherCheat.h"
#include "effects/cheats/ped/HaveABountyOnYourHeadCheat.h"
#include "effects/cheats/ped/ElvisIsEverywhereCheat.h"
#include "effects/cheats/ped/PedsAttackYou.h"
#include "effects/cheats/ped/GangMembersEverywhereCheat.h"
#include "effects/cheats/ped/GangsControlTheStreetsCheat.h"
#include "effects/cheats/ped/RiotModeCheat.h"
#include "effects/cheats/ped/EveryoneArmedCheat.h"
#include "effects/cheats/ped/AggressiveDriversCheat.h"
#include "effects/cheats/ped/RecruitAnyone9mmCheat.h"
#include "effects/cheats/ped/RecruitAnyoneAK47Cheat.h"
#include "effects/cheats/ped/RecruitAnyoneRocketsCheat.h"

#include "effects/cheats/theme/BeachThemeCheat.h"
#include "effects/cheats/theme/NinjaThemeCheat.h"
#include "effects/cheats/theme/KinkyThemeCheat.h"
#include "effects/cheats/theme/FunhouseThemeCheat.h"
#include "effects/cheats/theme/CountryThemeCheat.h"

#include "effects/cheats/stats/WeaponAimingWhileDrivingCheat.h"
#include "effects/cheats/stats/HugeBunnyHopCheat.h"
#include "effects/cheats/stats/MegaJumpCheat.h"
#include "effects/cheats/stats/InfiniteOxygenCheat.h"
#include "effects/cheats/stats/MegaPunchCheat.h"
#include "effects/cheats/stats/MaxStaminaCheat.h"
#include "effects/cheats/stats/NoStaminaCheat.h"
#include "effects/cheats/stats/HitmanLevelForAllWeaponsCheat.h"
#include "effects/cheats/stats/BeginnerLevelForAllWeaponsCheat.h"
#include "effects/cheats/stats/MaxDrivingSkillsCheat.h"
#include "effects/cheats/stats/NoDrivingSkillsCheat.h"
#include "effects/cheats/stats/NeverGetHungryCheat.h"
#include "effects/cheats/stats/LockRespectAtMaxCheat.h"
#include "effects/cheats/stats/LockSexAppealAtMaxCheat.h"

#include "effects/cheats/player/InfiniteHealthCheat.h"
#include "effects/cheats/vehicle/WheelsOnlyPleaseCheat.h"

#include "effects/custom/ped/RemoveAllWeaponsEffect.h"
#include "effects/custom/ped/SetAllPedsOnFireEffect.h"
#include "effects/custom/player/KickPlayerOutOfVehicleEffect.h"
#include "effects/custom/vehicle/SetCurrentVehicleOnFireEffect.h"
#include "effects/custom/vehicle/PopTiresOfAllVehiclesEffect.h"
#include "effects/custom/vehicle/SendVehiclesToSpaceEffect.h"
#include "effects/custom/player/GetBustedEffect.h"
#include "effects/custom/vehicle/TurnVehiclesAroundEffect.h"

#include "effects/custom/vehicle/ToTheLeftToTheRightEffect.h"
#include "effects/custom/time/TimelapseEffect.h"
#include "effects/custom/ped/WhereIsEverybodyEffect.h"
#include "effects/custom/ped/EverybodyBleedNowEffect.h"
#include "effects/custom/vehicle/ToDriveOrNotToDriveEffect.h"
#include "effects/custom/ped/OneHitKOEffect.h"
#include "effects/custom/time/ExperienceTheLagEffect.h"
#include "effects/custom/vehicle/GhostRiderEffect.h"
#include "effects/custom/hud/DisableHUDEffect.h"
#include "effects/custom/hud/DisableRadarBlipsEffect.h"
#include "effects/custom/ped/DisableAllWeaponDamageEffect.h"
#include "effects/custom/controls/LetsTakeABreakEffect.h"
#include "effects/custom/vehicle/RainbowCarsEffect.h"
#include "effects/custom/vehicle/HighSuspensionDampingEffect.h"
#include "effects/custom/vehicle/LittleSuspensionDampingEffect.h"
#include "effects/custom/vehicle/ZeroSuspensionDampingEffect.h"
#include "effects/custom/controls/InvertedControlsEffect.h"
#include "effects/custom/controls/DisableOneMovementKeyEffect.h"
#include "effects/custom/mission/FailCurrentMissionEffect.h"
#include "effects/custom/unsorted/NightVisionEffect.h"
#include "effects/custom/unsorted/ThermalVisionEffect.h"
#include "effects/custom/mission/PassCurrentMissionEffect.h"
#include "effects/custom/ped/InfiniteHealthEveryoneEffect.h"
#include "effects/custom/vehicle/InvisibleVehiclesEffect.h"
#include "effects/custom/time/FPS15Effect.h"
#include "effects/custom/time/FPS60Effect.h"
#include "effects/custom/unsorted/ReloadAutosaveEffect.h"
#include "effects/custom/gravity/QuarterGravityEffect.h"
#include "effects/custom/gravity/HalfGravityEffect.h"
#include "effects/custom/gravity/DoubleGravityEffect.h"
#include "effects/custom/gravity/QuadrupleGravityEffect.h"
#include "effects/custom/gravity/InvertedGravityEffect.h"
#include "effects/custom/gravity/ZeroGravityEffect.h"
#include "effects/custom/gravity/InsaneGravityEffect.h"
#include "effects/custom/player/LockPlayerInsideVehicleEffect.h"
#include "effects/custom/hud/TunnelVisionEffect.h"
#include "effects/custom/audio/HighPitchedAudioEffect.h"
#include "effects/custom/audio/PitchShifterEffect.h"
#include "effects/custom/mission/FakePassCurrentMissionEffect.h"
#include "effects/custom/hud/DVDScreensaverEffect.h"
#include "effects/custom/vehicle/TurnVehiclesAroundEffect.h"
#include "effects/custom/vehicle/LightspeedBrakingEffect.h"

#include "CCheat.h"

class EffectHandler
{
public:
	static EffectBase* Get(std::string state, std::string function);

private:
	static EffectBase* HandleCheat(std::string name);
	static EffectBase* HandleEffect(std::string name);
};
