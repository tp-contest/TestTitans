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

#include "TaskFileId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

TaskFileId::TaskFileId() { m_Task_file_id = 0; }

TaskFileId::~TaskFileId() {}

void TaskFileId::validate() {
  // TODO: implement validation
}

web::json::value TaskFileId::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("task_file_id")] =
      ModelBase::toJson(m_Task_file_id);

  return val;
}

void TaskFileId::fromJson(const web::json::value& val) {
  setTaskFileId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("task_file_id"))));
}

void TaskFileId::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("task_file_id"),
      m_Task_file_id));
}

void TaskFileId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                               const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setTaskFileId(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("task_file_id"))));
}

int32_t TaskFileId::getTaskFileId() const { return m_Task_file_id; }

void TaskFileId::setTaskFileId(int32_t value) { m_Task_file_id = value; }

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org