#include <fstream>
#include "person.pb.h"

int main() {
  Person person;
  person.set_name("septicmk");
  person.set_age(78);
  person.set_email("septicmk@xxx.com");

  std::ofstream ofs("person.data", std::ios_base::out | std::ios_base::binary);
  person.SerializeToOstream(&ofs);
}
