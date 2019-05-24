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

#include "TaskFile.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

TaskFile::TaskFile() {}

TaskFile::~TaskFile() {}

void TaskFile::validate() {
  // TODO: implement validation
}

web::json::value TaskFile::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("task_file")] =
      ModelBase::toJson(m_Task_file);

  return val;
}

void TaskFile::fromJson(const web::json::value& val) {
  setTaskFile(ModelBase::fileFromJson(
      val.at(utility::conversions::to_string_t("task_file"))));
}

void TaskFile::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                           const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("task_file"),
      m_Task_file));
}

void TaskFile::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setTaskFile(
      multipart->getContent(utility::conversions::to_string_t("task_file")));
}

HttpContent TaskFile::getTaskFile() const { return m_Task_file; }

void TaskFile::setTaskFile(const HttpContent& value) { m_Task_file = value; }

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org