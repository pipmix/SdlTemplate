#include "ObjectManager.h"

ObjectManger::ObjectManger(){
	numObjects = 0;

}

void ObjectManger::Update(double delta){
	for (int i = 0; i < numObjects; i++) {
		objs[i].Update(delta);
	}
}

void ObjectManger::Draw(){
	for (int i = 0; i < numObjects; i++) {
		objs[i].Draw();
	}
}
