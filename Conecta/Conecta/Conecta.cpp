
#include "stdafx.h"
#include <stdio.h>

#include <iostream>
#include <qt-firebaseapi/firebase.h>


using namespace std;

int main()
{ 
	Firebase *firebase = new Firebase('https://pisuringo.firebaseio.com/');
	
	//::firebase::App* cApp;
	//cApp = ::firebase::App::Create();
	//app = ::firebase::App::Create(firebase::AppOptions());
	/*firebase::AppOptions* options = new firebase::AppOptions();
	options->set_api_key("AIzaSyC0epvAR3n2VKT4-H5S1V0Q5GX7sz6YSME");
	options->set_project_id("pisuringo");
	options->set_messaging_sender_id("183322664074");
	options->set_database_url("https://pisuringo.firebaseio.com/");
	cout << "api key: "<< options->api_key() <<endl;*/


    return 0;
}

