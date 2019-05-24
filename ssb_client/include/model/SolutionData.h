/**
 * Pickle Rick API
 * No description provided (generated by Openapi Generator
 * https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SolutionData.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SolutionData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SolutionData_H_

#include "../ModelBase.h"

#include "SolutionFilesId.h"
#include "TaskId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class SolutionData : public ModelBase {
 public:
  SolutionData();
  virtual ~SolutionData();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  void fromJson(const web::json::value& json) override;

  void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                   const utility::string_t& namePrefix) const override;
  void fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                     const utility::string_t& namePrefix) override;

  /////////////////////////////////////////////
  /// SolutionData members

  /// <summary>
  ///
  /// </summary>
  int32_t getTaskId() const;

  void setTaskId(int32_t value);

  /// <summary>
  ///
  /// </summary>
  int32_t getLogFileId() const;

  void setLogFileId(int32_t value);

  /// <summary>
  ///
  /// </summary>
  int32_t getResultFileId() const;

  void setResultFileId(int32_t value);

 protected:
  int32_t m_Task_id;
  int32_t m_Log_file_id;
  int32_t m_Result_file_id;
};

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SolutionData_H_ */