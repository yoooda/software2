#ifndef DRIVE_STRAIGHT_H
#define DRIVE_STRAIGHT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveStraight: public CommandBase {
public:
	DriveStraight();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
