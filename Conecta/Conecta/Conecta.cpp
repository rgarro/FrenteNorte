
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <curl/curl.h>
#include <json/json.h>

using namespace std;



int main()
{ 
	cout << "heeer we go .. ";
	CURL *curl = curl_easy_init();
	if (curl) {
		CURLcode res;
		curl_easy_setopt(curl, CURLOPT_URL, "https://pisuringo.firebaseio.com/beaches.json");
		res = curl_easy_perform(curl);
		
		curl_easy_cleanup(curl);
		cout << res << endl;
	}
	
	
	//Firebase *firebase = new Firebase('https://pisuringo.firebaseio.com/');
	/*
	options->set_api_key("AIzaSyC0epvAR3n2VKT4-H5S1V0Q5GX7sz6YSME");
	options->set_project_id("pisuringo");
	options->set_messaging_sender_id("183322664074");
	options->set_database_url("https://pisuringo.firebaseio.com/");*/
	


    return 0;
}

