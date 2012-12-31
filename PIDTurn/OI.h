#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Buttons/JoystickButton.h"
class OI {
private:
	Joystick* leftStick;
	Joystick* rightStick;
	JoystickButton* startSquare;
public:
	OI();
	Joystick* GetLeftJoystick();
	Joystick* GetRightJoystick();
};

#endif
