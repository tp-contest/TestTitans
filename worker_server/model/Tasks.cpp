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

#include "Tasks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Tasks::Tasks() {}

Tasks::~Tasks() {}

void Tasks::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Tasks& o) { j = nlohmann::json(); }

void from_json(const nlohmann::json& j, Tasks& o) {}

}  // namespace model
}  // namespace server
}  // namespace openapitools
}  // namespace org