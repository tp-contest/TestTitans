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
 * HumanApiImpl.h
 *
 *
 */

#ifndef HUMAN_API_IMPL_H_
#define HUMAN_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <HumanApi.h>

#include <pistache/optional.h>

#include "SessionIdObject.h"
#include "UserData.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class HumanApiImpl : public org::openapitools::server::api::HumanApi {
 public:
  HumanApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~HumanApiImpl() {}

  void human_create(const UserData &userData,
                    Pistache::Http::ResponseWriter &response);
};

}  // namespace api
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif