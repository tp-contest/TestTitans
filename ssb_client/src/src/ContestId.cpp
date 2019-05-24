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

#include "ContestId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ContestId::ContestId() { m_Contest_id = 0; }

ContestId::~ContestId() {}

void ContestId::validate() {
  // TODO: implement validation
}

web::json::value ContestId::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("contest_id")] =
      ModelBase::toJson(m_Contest_id);

  return val;
}

void ContestId::fromJson(const web::json::value& val) {
  setContestId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("contest_id"))));
}

void ContestId::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                            const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("contest_id"),
      m_Contest_id));
}

void ContestId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                              const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setContestId(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("contest_id"))));
}

int32_t ContestId::getContestId() const { return m_Contest_id; }

void ContestId::setContestId(int32_t value) { m_Contest_id = value; }

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org