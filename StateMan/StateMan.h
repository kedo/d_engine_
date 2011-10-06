/*
	State Manager
*/
#ifndef STATE_MAN_H
#define STATE_MAN_H

class StateMan
{
	State *CurState;
	public:
		StateMan()
		{
			MainState=NULL;
			NextState=STATE_NONE;
			CurState=new State;
			CurState=MainState;
		}
		~StateMan()
		{
			
		}
		bool addState();
		bool remState();
		bool switchState();
};


#endif