#ifndef TURN_H
#define TURN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Turn: public CommandBase {
	int iterations;
public:
	
	Turn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
