#ifndef STATE_H
#define STATE_H

class State
{
	//...
	//State *rightState;
	State *prevState;
	public:
		Satate();
		State(CurState){
			prevState=new State;
			prevState=CurState;
		}
		~State(){
			delete[] prevState;
		}
		void Activate();
		void Deacticate();
		void Update();
};


#endif