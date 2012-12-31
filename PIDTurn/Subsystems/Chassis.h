#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H
#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Chassis: public PIDSubsystem {
private:
	RobotDrive* drive;
	Gyro* gyro;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
	static const double kP = 0.0;
	static const double kI = 0.0;
	static const double kD = 0.0;
	
public:
	Chassis();
	void DriveForward(float speed);
	void InitDefaultCommand();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void ArcadeDrive(Joystick* stick);
	void ResetGyro();
};

#endif
