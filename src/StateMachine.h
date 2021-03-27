#pragma once
#include "State.h"
#ifndef __STATE_MACHINE__
#define __STATE_MACHINE__

class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	//getters
	State* getCurrentState() const;

	//setters
	void setCurrentState(State* current_state);

	void Update();

private:
	State* m_currentState;
};


#endif /*(__STATE_MACHINE__)*/