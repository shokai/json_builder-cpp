#include <iostream>
#include <string>
#include <map>
#include <boost/any.hpp>
#include "../json_builder.h"

int main(int argc, char* argv[]){
  std::map<string,any> obj;
  obj["doubleqoute"] = string("doub\"leq\"oute");
  obj["quote"] = string("qu\'ot\'e");
  obj["reverse solidus"] = string("reverse\\solidus");
  obj["solidus"] = string("sol/idus");
  //obj["carriage return"] = string("carriage\rreturn");
  //obj["newline"] = string("new\nline");
  //obj["horizontal tab"] = string("horizontal \t tab");
  

  string json = json_builder::toJson(obj);
  cout << json << endl;
  return 0;
}
