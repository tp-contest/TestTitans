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

#include "SolutionId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

SolutionId::SolutionId() { m_Solution_id = 0; }

SolutionId::~SolutionId() {}

void SolutionId::validate() {
  // TODO: implement validation
}

web::json::value SolutionId::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("solution_id")] =
      ModelBase::toJson(m_Solution_id);

  return val;
}

void SolutionId::fromJson(const web::json::value& val) {
  setSolutionId(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("solution_id"))));
}

void SolutionId::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("solution_id"),
      m_Solution_id));
}

void SolutionId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                               const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setSolutionId(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("solution_id"))));
}

int32_t SolutionId::getSolutionId() const { return m_Solution_id; }

void SolutionId::setSolutionId(int32_t value) { m_Solution_id = value; }

}  // namespace model
}  // namespace client
}  // namespace openapitools
}  // namespace org