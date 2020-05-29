#include "context.hpp"
#include "object.hpp"

Context::~Context() {
  for (auto object : allocated_) delete object;
  std::vector<Object*>().swap(allocated_);
}

std::string Context::ToString() const {
  std::string s = name_ + "\n";
  for (auto object : allocated_) s += (object->ToString() + "\n");
  return s;
}

Object* Context::NewObject() {
  auto object = new Object(this, counter_++);
  allocated_.push_back(object);
  return object;
}
