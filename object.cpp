#include "object.hpp"
#include "context.hpp"

std::string Object::ToString() const {
  return context_->name() + " " + std::to_string(id_);
}
