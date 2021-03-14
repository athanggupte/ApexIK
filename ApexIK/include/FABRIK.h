#pragma once

#include "IKChain.h"

/**
 * @brief The base Apex namespace
*/
namespace Apex {

	/**
	 * @brief FABRIK Solver implementation
	 *
	 * @note Check \ref fabrik for more details
	 */
	class FABRIKSolver
	{

	public:
		/**
		 * @brief Solves 2D IK chain using FABRIK
		 * @param chain The 2D IK chain to be resolved
		 * @param goal The goal position of the effector
		 * @return Solved 2D IK chain
		 */
		static IKChain2D& Solve(IKChain2D& chain, glm::vec2 goal, int maxIterations = 50);
		
		/**
		 * @brief Solves 3D IK chain using FABRIK
		 * @param chain The 3D IK chain to be resolved
		 * @param goal The goal position of the effector
		 * @return Solved 3D IK chain
		 */
		static IKChain3D& Solve(IKChain3D& chain, glm::vec3 goal, int maxIterations = 50);

	private:
		/**
		 * @brief The Forward Reaching stage of the FABRIK solver for 2D chains
		 * @param chain Current state of the IK chain
		 * @param lengths Array of lengths of links
		 * @return IK chain after one Forward Reaching stage
		 */
		static IKChain2D& ForwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& goal);

		/**
		 * @brief The Forward Reaching stage of the FABRIK solver for 3D chains
		 * @param chain Current state of the IK chain
		 * @param lengths Array of lengths of links
		 * @return IK chain after one Forward Reaching stage
		 */
		static IKChain3D& ForwardReach(IKChain3D& chain, const std::vector<float>& lengths, const glm::vec2& goal);

		/**
		 * @brief The Backward Reaching stage of the FABRIK solver for 2D chains
		 * @param chain Current state of the IK chain
		 * @param lengths Array of lengths of links
		 * @return IK chain after one Backward Reaching stage
		 */
		static IKChain2D& BackwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& base);

		/**
		 * @brief The Backward Reaching stage of the FABRIK solver for 3D chains
		 * @param chain Current state of the IK chain
		 * @param lengths Array of lengths of links
		 * @return IK chain after one Backward Reaching stage
		 */
		static IKChain3D& BackwardReach(IKChain3D& chain, const std::vector<float>& lengths, const glm::vec2& base);


	private:
		static constexpr float epsilon = 5 * std::numeric_limits<float>::epsilon();
	};

}
