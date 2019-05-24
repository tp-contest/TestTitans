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
 * ContestApi.h
 *
 *
 */

#ifndef ContestApi_H_
#define ContestApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>
#include "ContestIdObject.h"
#include "PackageId.h"
#include "Solution.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ContestApi {
 public:
  ContestApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ContestApi() {}
  void init();

  const std::string base = "/tp-contest/NewTP-COntestAPI/1.0.0";

 private:
  void setupRoutes();

  void create_contest_handler(const Pistache::Rest::Request &request,
                              Pistache::Http::ResponseWriter response);
  void get_solution_handler(const Pistache::Rest::Request &request,
                            Pistache::Http::ResponseWriter response);
  void send_task_handler(const Pistache::Rest::Request &request,
                         Pistache::Http::ResponseWriter response);
  void contest_api_default_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Lets create task
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  virtual void create_contest(const Pistache::Rest::Request &request,
                              Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Lets get solution of our contest
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="sessionId">user for solution</param>
  /// <param name="contestId">task for solution</param>
  virtual void get_solution(const Pistache::Optional<int32_t> &sessionId,
                            const Pistache::Optional<int32_t> &contestId,
                            Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Lets start some contest
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  virtual void send_task(const Pistache::Rest::Request &request,
                         Pistache::Http::ResponseWriter &response) = 0;
};

}  // namespace api
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif /* ContestApi_H_ */