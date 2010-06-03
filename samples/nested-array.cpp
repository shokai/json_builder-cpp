#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <boost/any.hpp>
#include "../json_builder.h"

using namespace json_builder;
using namespace std;
using namespace boost;

int main(int argc, char* argv[]){
  map<string,any> obj;
  obj["test"] = string("testtest");
  obj["true"] = true;
  obj["false"] = false;
  obj["null"] = null; // json_builder::null

  map<string,any> user;
  user["name"] = string("shokai");
  user["fullname"] = string("sho hashimoto");
  user["age"] = 25;
  user["test"] = 6.78;
  obj["user"] = user;

  std::vector<any> vec;
  vec.push_back(string("aaaa"));
  vec.push_back(1234.56);
  vec.push_back(string("hello work"));
  

  vector<any> vec2;
  vec2.push_back(string("nested std::vector"));
  vec2.push_back(string("bbbbb"));
  vec.push_back(vec2); // nest std::vecotr

  obj["params"] = vec;
  string json = json_builder::toJson(obj);
  cout << json << endl;

  return 0;
}
