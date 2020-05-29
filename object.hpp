#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>
#include <vector>

class Context;

class Object {
 public:
  Object(Context* context, int id) : context_(context), id_(id) {}
  ~Object() = default;

  std::string ToString() const;

 private:
  Context* const context_;
  const int id_;
};

#endif  // OBJECT_HPP_
