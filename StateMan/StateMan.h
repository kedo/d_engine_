/*
	State Manager
*/
#ifndef STATE_MAN_H
#define STATE_MAN_H

struct State
{
	//...
	//State *rightState;
	State *prevState;
};

class StateMan
{
		//State *stateStack;
	public:
		StateMan()
		{
			MainState=NULL;
			NextState=STATE_NONE;
		}
		~StateMan()
		{
			
		}
		addState();
		remState();
		switchState();
};


#endif