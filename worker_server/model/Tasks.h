/**
 * TP-Contest Worker
 * No description provided (generated by Openapi Generator
 * https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Tasks.h
 *
 *
 */

#ifndef Tasks_H_
#define Tasks_H_

#include <nlohmann/json.hpp>
#include <vector>
#include "Task.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Tasks {
 public:
  Tasks();
  virtual ~Tasks();

  void validate();

  /////////////////////////////////////////////
  /// Tasks members

  friend void to_json(nlohmann::json& j, const Tasks& o);
  friend void from_json(const nlohmann::json& j, Tasks& o);

 protected:
};

}  // namespace model
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif /* Tasks_H_ */
