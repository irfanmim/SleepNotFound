#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	public:
		virtual void interact()=0;
	protected:
		Point loc;
};

#endif