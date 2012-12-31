#include "DriveStraight.h"

DriveStraight::DriveStraight() {
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveStraight::Initialize() {
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void DriveStraight::Execute() {
	chassis->DriveForward(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveStraight::IsFinished() {
	return IsTimedOut();
}


// Called once after isFinished returns true
void DriveStraight::End() {
	chassis->DriveForward(0.0f);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStraight::Interrupted() {
	chassis->DriveForward(0.0f);
}
