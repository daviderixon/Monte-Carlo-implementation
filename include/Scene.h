#ifndef MONTECARLO_SCENE_H
#define MONTECARLO_SCENE_H
#include "Triangle.h"
#include <list>

class Scene {
public:

	//Constructor with 24 triangles
	Scene();

	void Scene::addTriangle(Triangle * T);
	void Scene::triangleIntersect(Ray * rayIn);

	//Contains a list of triangles that make up the scene
	std::list<Triangle> triangles;
	std::list<Triangle> triangles_intersected;
};
#endif //MONTECARLO_SCENE_H
