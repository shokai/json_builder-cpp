#include <iostream>
#include <string>
#include <map>
#include <boost/any.hpp>
#include "../json_builder.h"

int main(int argc, char* argv[]){
  std::map<string,boost::any> user;
  user["name"] = std::string("shokai");
  user["fullname"] = std::string("sho hashimoto");
  user["age"] = 25;
  user["minus"] = -888;
  user["test"] = 1.23;
  user["null"] = json_builder::null;
  user["true"] = true;
  user["false"] = false;

  string json = json_builder::toJson(user);
  cout << json << endl;
  return 0;
}
