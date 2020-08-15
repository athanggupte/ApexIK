#pragma once

#include <glm/glm.hpp>

namespace Apex {

	/**
	 * @brief Represents a node in a 2D IK chain
	 */
	struct IKNode2D
	{
		glm::vec2 position;

		void operator = (const glm::vec2 & position){ this->position = position; }
		operator const glm::vec2 () const { return position; }
		operator glm::vec2 () { return position; }
	};

	/**
	 * @brief Represents a node in a 3D IK chain
	 */
	struct IKNode3D
	{
		glm::vec3 position;

		operator const glm::vec3& () { return position; }
		operator glm::vec3 () { return position; }
	};

}