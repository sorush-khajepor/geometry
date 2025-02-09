
// public header in include directory is referenced from top level
#include <geometry/square/square.h>
#include "info.h"

std::string Square::GetName() {
	return "Square";
}

void Square::WriteInfo(){
	WriteMessage();
}
