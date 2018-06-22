
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

int main()
{ 
	cout << "heeer we go .. ";
	CURL *curl;
	CURLcode res;
	std::string readBuffer;
	curl_easy_init();
	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "https://pisuringo.firebaseio.com/");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);

		std::cout << readBuffer << std::endl;
	}
	//Firebase *firebase = new Firebase('https://pisuringo.firebaseio.com/');
	
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

