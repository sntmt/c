#include <stdio.h>

#include "Person.h"

int main(void) {
  Person person = {"Carlos", 30};

  printf("person: %s, age: %d", person.name, person.age);

  return 0;
}
