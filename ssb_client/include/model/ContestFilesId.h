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
 * ContestFilesId.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ContestFilesId_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ContestFilesId_H_

#include "../ModelBase.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
///
/// </summary>
class ContestFilesId : public ModelBase {
 public:
  ContestFilesId();
  virtual ~ContestFilesId();

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
  /// ContestFilesId members

  /// <summary>
  ///
  /// </summary>
  int32_t getInputFileId() const;

  void setInputFileId(int32_t value);

  /// <summary>
  ///
  /// </summary>
  int32_t getOutputFileId() const;

  void setOutputFileId(int32_t value);

  /// <summary>
  ///
  /// </summary>
  int32_t getDescriptionFileId() const;

  void setDescriptionFileId(int32_t value);

 protected:
  int32_t m_Input_file_id;
  int32_t m_Output_file_id;
  int32_t m_Description_file_id;
};

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ContestFilesId_H_ */