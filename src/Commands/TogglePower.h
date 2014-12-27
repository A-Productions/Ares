#ifndef CMD_TOGGLEPOWER_H
#define CMD_TOGGLEPOWER_H

#include "../Ext/Rules/Body.h"

#include <MapClass.h>
#include <DisplayClass.h>

class TogglePowerCommandClass : public CommandClass
{
public:
	//CommandClass
	virtual const char* GetName() const override
	{ return "TogglePower"; }

	virtual const wchar_t* GetUIName() const override
	{ return L"Toggle Power Mode"; }

	virtual const wchar_t* GetUICategory() const override
		{ return L"Interface"; }

	virtual const wchar_t* GetUIDescription() const override
		{ return L"Turn toggle power mode on / off."; }

	virtual void Execute(DWORD dwUnk) const override
	{
		if(RulesExt::Global()->TogglePowerAllowed) {
			MapClass::Instance->SetTogglePowerMode(-1);
		}
	}
};

#endif
