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
 * DatabaseApi.h
 *
 *
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_DatabaseApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_DatabaseApi_H_

#include "../ApiClient.h"

#include "Contest.h"
#include "ContestData.h"
#include "Solution.h"
#include "SolutionData.h"
#include "Task.h"
#include "TaskData.h"
#include "User.h"
#include "UserData.h"
#include "UserSessionId.h"

#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

class DatabaseApi {
 public:
  explicit DatabaseApi(std::shared_ptr<ApiClient> apiClient);

  virtual ~DatabaseApi();

  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="contestData"> (optional)</param>
  pplx::task<std::shared_ptr<Contest>> createContest(
      boost::optional<std::shared_ptr<ContestData>> contestData);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="userSessionId"> (optional)</param>
  pplx::task<void> createSessionId(
      boost::optional<std::shared_ptr<UserSessionId>> userSessionId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="solutionData"> (optional)</param>
  pplx::task<std::shared_ptr<Solution>> createSolution(
      boost::optional<std::shared_ptr<SolutionData>> solutionData);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="taskData"> (optional)</param>
  pplx::task<std::shared_ptr<Task>> createTask(
      boost::optional<std::shared_ptr<TaskData>> taskData);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="userData"> (optional)</param>
  pplx::task<std::shared_ptr<User>> createuser(
      boost::optional<std::shared_ptr<UserData>> userData);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="contestId"></param>
  pplx::task<std::shared_ptr<Contest>> getContest(int32_t contestId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="taskId"></param>
  pplx::task<std::shared_ptr<Solution>> getLastSolution(int32_t taskId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="userId"></param>
  pplx::task<std::shared_ptr<UserSessionId>> getSessionId(int32_t userId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="solutionId"></param>
  pplx::task<std::shared_ptr<Solution>> getSolution(int32_t solutionId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="taskId"></param>
  pplx::task<std::shared_ptr<Task>> getTask(int32_t taskId);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="userData"> (optional)</param>
  pplx::task<std::shared_ptr<User>> getUser(
      boost::optional<std::shared_ptr<UserData>> userData);
  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="userSessionId"> (optional)</param>
  pplx::task<void> updateSessionId(
      boost::optional<std::shared_ptr<UserSessionId>> userSessionId);

 protected:
  std::shared_ptr<ApiClient> m_ApiClient;
};

}  // namespace api
}  // namespace client
}  // namespace openapitools
}  // namespace org

#endif /* ORG_OPENAPITOOLS_CLIENT_API_DatabaseApi_H_ */
