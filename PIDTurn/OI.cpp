#include "OI.h"
#include "Commands/DriveInSquare.h"

OI::OI() {
	leftStick = new Joystick(1);
	rightStick = new Joystick(2);
	startSquare = new JoystickButton(leftStick, 1);
	
	startSquare->WhenPressed(new DriveInSquare());
}
Joystick* OI::GetLeftJoystick()
{
	return leftStick;
}

Joystick* OI::GetRightJoystick()
{
	return rightStick;
}
