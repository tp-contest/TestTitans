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

#include "Contest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Contest::Contest() {
  m_Contest_id = 0;
  m_User_id = 0;
  m_Input_file_id = 0;
  m_Output_file_id = 0;
  m_Description_file_id = 0;
}

Contest::~Contest() {}

void Contest::validate() {
  // TODO: implement validation
}

web::json::value Contest::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("contest_id")] =
      ModelBase::toJson(m_Contest_id);
  val[utility::conversions::to_string_t("user_id")] =
      ModelBase::toJson(m_User_id);
  val[utility::conversions::to_string_t("input_file_id")] =
      ModelBase::toJson(m_Input_file_id);
  val[utility::conversions::to_string_t("output_file_id")] =
      ModelBase::toJson(m_Output_file_id);
  val[utility::conversions::to_string_t("description_file_id")] =
      ModelBase::toJson(m_Description_file_id);

  return val;
}

void Contest::fromJson(const web::json::value& val) {
  setContestId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("contest_id"))));
  setUserId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("user_id"))));
  setInputFileId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("input_file_id"))));
  setOutputFileId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("output_file_id"))));
  setDescriptionFileId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("description_file_id"))));
}

void Contest::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                          const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("contest_id"),
      m_Contest_id));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("input_file_id"),
      m_Input_file_id));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("output_file_id"),
      m_Output_file_id));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("description_file_id"),
      m_Description_file_id));
}

void Contest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                            const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setContestId(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("contest_id"))));
  setUserId(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("user_id"))));
  setInputFileId(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("input_file_id"))));
  setOutputFileId(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("output_file_id"))));
  setDescriptionFileId(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("description_file_id"))));
}

int32_t Contest::getContestId() const { return m_Contest_id; }

void Contest::setContestId(int32_t value) { m_Contest_id = value; }

int32_t Contest::getUserId() const { return m_User_id; }

void Contest::setUserId(int32_t value) { m_User_id = value; }

int32_t Contest::getInputFileId() const { return m_Input_file_id; }

void Contest::setInputFileId(int32_t value) { m_Input_file_id = value; }

int32_t Contest::getOutputFileId() const { return m_Output_file_id; }

void Contest::setOutputFileId(int32_t value) { m_Output_file_id = value; }

int32_t Contest::getDescriptionFileId() const { return m_Description_file_id; }

void Contest::setDescriptionFileId(int32_t value) {
  m_Description_file_id = value;
}

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org
