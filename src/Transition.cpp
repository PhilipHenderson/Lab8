#include "Transition.h"

Transition::Transition(Condition* condition, State* target_state)
{
    setCondition(condition);
    setTargetState(target_state);
}

Transition::~Transition()
= default;

bool Transition::isTriggered() const
{
    return m_isTriggered;
}

Condition* Transition::GetCondition()
{
    return m_condition;
}

void Transition::setTargetState(State* state)
{
    m_targetState = state;
}

void Transition::setIsTriggered(bool state)
{
    m_isTriggered = state;
}

void Transition::setCondition(Condition* condition)
{
    m_condition = condition;
}
