#pragma once
#ifndef __ACTION__
#define __ACTION__

class Action
{
public:
	Action() = default;
	virtual ~Action() = default;

	virtual void Execute() = 0;
};
#endif /* (__ACTION__) */