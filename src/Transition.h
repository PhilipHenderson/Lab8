#pragma once
#ifndef __TRANSITION__
#define __TRANSISTION__
#include "Condition.h"
#include "State.h"



class Transition
{
public:
	Transition(Condition* condition = nullptr, State* target_state = nullptr);
	~Transition();

	//getters
	bool isTriggered() const;
	Condition* GetCondition();

	//setters
	void setCondition(Condition* condition);
	void setTargetState(State* state);
	void setIsTriggered(bool state);



private:
	Condition* m_condition;
	State* m_targetState;
	bool m_isTriggered;
};

#endif /* (__TRANSISTION__) */