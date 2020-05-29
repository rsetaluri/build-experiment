#ifndef CONTEXT_HPP_
#define CONTEXT_HPP_

#include <string>
#include <vector>

class Object;

class Context {
 public:
  Context(std::string name) : name_(name) {}
  ~Context();

  std::string name() const { return name_; }

  std::string ToString() const;

  Object* NewObject();

 private:
  std::string name_;
  std::vector<Object*> allocated_;
  int counter_ = 0;
};

#endif  // CONTEXT_HPP_
