
#include "stdafx.h"
#include <iostream>
#include <firebase/app.h>


using namespace std;


int main()
{ 
	firebase::AppOptions* options = new firebase::AppOptions();
	options->set_api_key("elapikey");
	//firebase::App* app = firebase::App::Create(options);

	cout << "api key: "<< options->api_key() << endl;

    return 0;
}

