/**
 * TP-Contest Backend
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
 * ContestIdObject.h
 *
 *
 */

#ifndef ContestIdObject_H_
#define ContestIdObject_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ContestIdObject {
 public:
  ContestIdObject();
  virtual ~ContestIdObject();

  void validate();

  /////////////////////////////////////////////
  /// ContestIdObject members

  /// <summary>
  ///
  /// </summary>
  int32_t getContestId() const;
  void setContestId(int32_t const value);

  friend void to_json(nlohmann::json& j, const ContestIdObject& o);
  friend void from_json(const nlohmann::json& j, ContestIdObject& o);

 protected:
  int32_t m_ContestId;
};

}  // namespace model
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif /* ContestIdObject_H_ */
