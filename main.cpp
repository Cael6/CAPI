//Include the framework.
#include "CAPI/capi.h";

int main(int argc, char* args[]) {
	CScene* scene = new CScene();
	return scene->SceneLoop();
}