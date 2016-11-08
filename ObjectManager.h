#pragma once
#include "Object.h"

class ObjectManger {
public:

	ObjectManger();
	void Update(double delta);
	void Draw();
	void Add();
	void Delete();
	void Signal(int sig);
private:

	int numObjects;
	Object objs [50];

};