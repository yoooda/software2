#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"

Chassis::Chassis() : PIDSubsystem("Chassis", Chassis::kP, Chassis::kI, Chassis::kD) {
	drive = new RobotDrive(3,4,1,2);
	gyro = new Gyro(1);
	gyro->Reset();
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveWithJoystick());
}



double Chassis::ReturnPIDInput()
{
	return gyro->GetAngle();
}



void Chassis::UsePIDOutput(double output)
{
	drive->Drive(0, output);
}



void Chassis::DriveForward(float speed)
{
	if(speed>1)
		drive->Drive(1, 0);
	else 
		if(speed>-1)
			drive->Drive(speed, 0);
		else
			drive->Drive(-1, 0);
}

void Chassis::ArcadeDrive(Joystick* stick)
{
	drive->ArcadeDrive(stick);
}
void Chassis::ResetGyro()
{
	gyro->Reset();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

