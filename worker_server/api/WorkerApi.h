/**
 * TP-Contest Worker
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
 * WorkerApi.h
 *
 *
 */

#ifndef WorkerApi_H_
#define WorkerApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <vector>
#include "Slots.h"
#include "Task.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class WorkerApi {
 public:
  WorkerApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~WorkerApi() {}
  void init();

  const std::string base = "/kirilllivanov/tp-contest-worker/1.0.0";

 private:
  void setupRoutes();

  void free_slots_handler(const Pistache::Rest::Request &request,
                          Pistache::Http::ResponseWriter response);
  void send_task_handler(const Pistache::Rest::Request &request,
                         Pistache::Http::ResponseWriter response);
  void worker_api_default_handler(const Pistache::Rest::Request &request,
                                  Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  virtual void free_slots(Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="task">Inventory item to add</param>
  virtual void send_task(const std::vector<Task> &task,
                         Pistache::Http::ResponseWriter &response) = 0;
};

}  // namespace api
}  // namespace server
}  // namespace openapitools
}  // namespace org

#endif /* WorkerApi_H_ */