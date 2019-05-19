Action()
{
	
	web_add_auto_header("Content-Type","application/json");
	
	web_add_auto_header("grant_type","client_credentials");
		
	web_add_auto_header("Authorization","Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsIng1dCI6IkhCeGw5bUFlNmd4YXZDa2NvT1UyVEhzRE5hMCIsImtpZCI6IkhCeGw5bUFlNmd4YXZDa2NvT1UyVEhzRE5hMCJ9.eyJhdWQiOiIwMDAwMDAwMi0wMDAwLTAwMDAtYzAwMC0wMDAwMDAwMDAwMDAiLCJpc3MiOiJodHRwczovL3N0cy53aW5kb3dzLm5ldC81MzViMmQ4Ny02NjRmLTQxNWEtYjdmYS1mZDNmMTA4NmQ0NTAvIiwiaWF0IjoxNTU4MjQxMjQwLCJuYmYiOjE1NTgyNDEyNDAsImV4cCI6MTU1ODI0NTE0MCwiYWlvIjoiNDJaZ1lLajY3dHZnSXNzVzlHalNsVk5HcW1vVEFBPT0iLCJhcHBpZCI6IjlhYmFkZDY5LTExY2MtNDBjMy1hZDIyLTNiOGYzMjkyYTlhZCIsImFwcGlkYWNyIjoiMSIsImlkcCI6Imh0dHBzOi8vc3RzLndpbmRvd3MubmV0LzUzNWIyZDg3LTY2NGYtNDE1YS1iN2ZhLWZkM2YxMDg2ZDQ1MC8iLCJvaWQiOiI2YmY5OWViNi0xM2Y1LTRlMWMtODBlOC1lMTFmNTdjMGE1NjYiLCJzdWIiOiI2YmY5OWViNi0xM2Y1LTRlMWMtODBlOC1lMTFmNTdjMGE1NjYiLCJ0ZW5hbnRfcmVnaW9uX3Njb3BlIjoiTkEiLCJ0aWQiOiI1MzViMmQ4Ny02NjRmLTQxNWEtYjdmYS1mZDNmMTA4NmQ0NTAiLCJ1dGkiOiJ6RFBCbThtM1hFVzhBUGdXQU50bkFBIiwidmVyIjoiMS4wIn0.vUR-4gNfNjpghlzGTSWCG8zJmIsQr4iXjswvcKuH47zlziGdrhbfSB8viLdNXekoTM7mVg3A-Rz4e5XL7rkMqFzgsfgHxZ7Ux2N78MWjafZjGGQ9iAVt3hOjC-QuYhsymNWY56WPK0RH0OuIqzTVk4kG6gCYLhhUR6CVdq3qxF8AQw-LAf8pmETluqvxQcKcTwIPAVHFXJZMrMA3SS1aHFA1qpFQ5I3-3FT5fwiy4dFfFmLVbEE1cINQPZCOVBAawN0ppFZsAgDdF8zqYn9xAbFVBRVvexPYEo_1UMNQw59OGtZdOMOHLajC1pdbuV51y8SPe65AjH1KUJYEP83eaQ");
	
	
	web_set_sockets_option("SSL_VERSION","TLS1.2");
	
	lr_start_transaction("Login");

	
	
	web_custom_request("web_custom_request",
		"URL=https://agdcqaapimgmt.azure-api.net/atcd/v2/login/A18/BW/27",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Mode=HTTP",
		"Body={\r\n"
		"  \"UserId\": \"DX_31925613\",\r\n"
		"  \"Password\": \"password\",\r\n"
		"  \"DateOfBirth\": \"\",\r\n"
		"  \"loyaltyID\": \"\",\r\n"
		"  \"SessionId\":\"123456789\"\r\n"
		"}",
		LAST);
	
	lr_end_transaction("Login", LR_AUTO);


	
	
	return 0;
}
