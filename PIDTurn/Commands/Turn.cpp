#include "Turn.h"
#include "math.h"

Turn::Turn() {
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
}

// Called just before this Command runs the first time
void Turn::Initialize() {
	chassis->SetSetpoint(90.0);
	chassis->Enable();
	iterations = 0;
}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute() {
	double error = chassis->GetSetpoint() - chassis->GetPosition();
	if(fabs(error) < 2.0)
		iterations++;
	else
		iterations = 0;
}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished() {
	if(iterations > 10)
		return true;
	return false;
}


// Called once after isFinished returns true
void Turn::End() {
	chassis->DriveForward(0.0f);
	chassis->ResetGyro();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted() {
	End();
}
