#include "DriveInSquare.h"
#include "DriveStraight.h"
#include "Turn.h"

DriveInSquare::DriveInSquare() {
	// Use requires() here to declare subsystem dependencies
	AddSequential(new DriveStraight());
	AddSequential(new Turn());
	AddSequential(new DriveStraight());
	AddSequential(new Turn());
	AddSequential(new DriveStraight());
	AddSequential(new Turn());
	AddSequential(new DriveStraight());
}
