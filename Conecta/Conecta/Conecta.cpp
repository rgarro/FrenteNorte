
#include "stdafx.h"
#include <iostream>
#include "include/firebase/app.h"
#include "include/firebase/auth.h"

using namespace std;


int main()
{ 
	firebase::App* app = firebase::App::Create();

	cout << "la revolucion no se vera por television ... " << endl;
    return 0;
}

