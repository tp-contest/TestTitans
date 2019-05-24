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

#include "HumanApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace backend_server::helper;
using namespace org::openapitools::server::model;

HumanApi::HumanApi(std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
};

void HumanApi::init() { setupRoutes(); }

void HumanApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(*router, base + "/Human/Create",
               Routes::bind(&HumanApi::human_create_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&HumanApi::human_api_default_handler, this));
}

void HumanApi::human_create_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response) {
  // Getting the body param

  UserData userData;

  try {
    nlohmann::json::parse(request.body()).get_to(userData);
    this->human_create(userData, response);
  } catch (std::runtime_error &e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  }
}

void HumanApi::human_api_default_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

}  // namespace api
}  // namespace server
}  // namespace openapitools
}  // namespace org