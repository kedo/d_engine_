/*
	State Manager
*/
#ifndef STATE_MAN_H
#define STATE_MAN_H

struct State{
	//...
	State *rightState;
	State *leftState;
};

class StateMan{
		State *stateCicleList;
	public:
		StateMan();
		~StateMan();
		addState();
		remState();
		switchState();
};


#endif