
#include "stdafx.h"
#include <iostream>
#include <firebase/app.h>
#include <firebase/util.h>
#include <firebase/version.h>


using namespace std;

int main()
{ 
	//::firebase::App* app;
	
	//app = ::firebase::App::Create(firebase::AppOptions());
	firebase::AppOptions* options = new firebase::AppOptions();
	options->set_api_key("AIzaSyC0epvAR3n2VKT4-H5S1V0Q5GX7sz6YSME");
	options->set_project_id("pisuringo");
	options->set_messaging_sender_id("183322664074");
	options->set_database_url("https://pisuringo.firebaseio.com/");
	
	//firebase::App* app = firebase::App::Create(firebase::AppOptions());
	//app.options.set_api_key("AIzaSyC0epvAR3n2VKT4-H5S1V0Q5GX7sz6YSME");


	cout << "api key: "<< options->api_key() <<endl;


    return 0;
}

