#include "InvisibleVehicles.h"

bool* InvisibleVehicles::isEnabled = reinterpret_cast<bool*>(0x96914B);

InvisibleVehicles::InvisibleVehicles(int _duration, std::string _description) : TimedEffect(_duration, _description) {}

void InvisibleVehicles::Disable() {
	*isEnabled = false;
}

void InvisibleVehicles::HandleTick() {
	*isEnabled = true;
}

void InvisibleVehicles::TryRenderAtomic(RwFrame* frame) {
	if (frame) {
		RpAtomic* atomic = (RpAtomic*)GetFirstObject(frame);
		if (atomic) {
			atomic->renderCallBack(atomic);
		}
	}
}

void __fastcall InvisibleVehicles::HookedRenderHeli(CHeli* thisHeli, void* edx) {
	if (!*isEnabled) {
		plugin::CallMethod<0x534310, CVehicle*>(thisHeli);
	}
	else {
		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_RF]);
		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_RM]);
		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_RB]);

		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_LF]);
		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_LM]);
		TryRenderAtomic(thisHeli->m_aCarNodes[eHeliNodes::HELI_WHEEL_LB]);
	}
}

void __fastcall InvisibleVehicles::HookedRenderBike(CBike* thisBike, void* edx) {
	if (!*isEnabled) {
		plugin::CallMethod<0x6D0E60, CVehicle*>(thisBike);
	}
	else {
		TryRenderAtomic(thisBike->m_aBikeNodes[eBikeNodes::BIKE_WHEEL_FRONT]);
		TryRenderAtomic(thisBike->m_aBikeNodes[eBikeNodes::BIKE_WHEEL_REAR]);
	}
}

void __fastcall InvisibleVehicles::HookedRenderPlane(CPlane* thisPlane, void* edx) {
	if (!*isEnabled) {
		plugin::CallMethod<0x6D0E60, CVehicle*>(thisPlane);
	}
	else {
		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_RF]);
		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_RM]);
		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_RB]);

		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_LF]);
		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_LM]);
		TryRenderAtomic(thisPlane->m_aCarNodes[ePlaneNodes::PLANE_WHEEL_LB]);
	}
}

void __fastcall InvisibleVehicles::HookedRenderEffects(CEntity* thisEntity, void* edx) {
	if (!*isEnabled || !CModelInfo::IsVehicleModelType(thisEntity->m_nModelIndex)) {
		thisEntity->RenderEffects();
	}
	else {
		switch (((CVehicle*)thisEntity)->m_nVehicleClass) {
			case VEHICLE_AUTOMOBILE:
			case VEHICLE_BIKE:
			case VEHICLE_BMX:
			case VEHICLE_HELI:
			case VEHICLE_PLANE:
				break;
			default:
				thisEntity->RenderEffects();
		}
	}
}

void InvisibleVehicles::HookedRenderShadows(CVehicle* thisVehicle, VEH_SHD_TYPE shadowType) {
	if (!*isEnabled) {
		CShadows::StoreShadowForVehicle(thisVehicle, shadowType);
	}
}