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
 * Task.h
 *
 *
 */

#ifndef Task_H_
#define Task_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Task {
 public:
  Task();
  virtual ~Task();

  void validate();

  /////////////////////////////////////////////
  /// Task members

  /// <summary>
  ///
  /// </summary>
  int32_t getTaskId() const;
  void setTaskId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getUserId() const;
  void setUserId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getContestId() const;
  void setContestId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getTaskFileId() const;
  void setTaskFileId(int32_t const value);

  friend void to_json(nlohmann::json& j, const Task& o);
  friend void from_json(const nlohmann::json& j, Task& o);

 protected:
  int32_t m_Task_id;

  int32_t m_User_id;

  int32_t m_Contest_id;

  int32_t m_Task_file_id;
};

}  // namespace model
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif /* Task_H_ */