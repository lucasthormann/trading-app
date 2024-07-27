#ifndef CURL_FUNCTIONS_H // header guard to prevent multiple inclusions of the same header in a single source file
#define CURL_FUNCTIONS_H

#include <string> // necessary library headers
#include <jsoncpp/json/json.h>

using namespace std;

string get_price(const string& ticker_symbol, const string& api); // used to retrieve stock-related data based on ticker symbol
Json::Value get_stock_quote(const string& ticker_symbol, const string& api); // used to retrieve stock-related data based on an API source

#endif // CURL_FUNCTIONS_H
