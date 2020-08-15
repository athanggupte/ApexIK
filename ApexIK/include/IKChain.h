/**
 * @author Athang Gupte
 */

#pragma once
#include <vector>

#include "IKNode.h"

/**
 * @brief The base Apex namespace
*/
namespace Apex {

	/**
	 * @brief Represents a chain of IK Nodes in 2D
	 */
	class IKChain2D
	{
	public:
		/** Default constructor for empty chain */
		IKChain2D() = default;

		/** Default destructor */
		~IKChain2D() = default;

		/**
		 * @brief Add a node to the end of the IK chain
		 * @param nodePos 2D world position of the node
		 */
		void AddNode(const glm::vec2& nodePos) { m_Nodes.emplace_back(IKNode2D{ nodePos }); }

		/**
		 * @brief Add a node to the end of the IK chain
		 * @param node IK node instance to add
		 */
		void AddNode(const IKNode2D& node) { m_Nodes.emplace_back(node); }

		/**
		 * @brief Get size of (or number of nodes in) the chain
		 * @return Size of the chain
		 */
		size_t Size() { return m_Nodes.size(); }

		/**
		 * @brief Array indexing operator for nodes in the chain
		 * @param index Index of Node to access
		 * @return Reference to indexed node
		 */
		IKNode2D& operator [] (size_t index) { return m_Nodes[index]; }

		/**
		 * @brief Returns the start iterator for Nodes vector
		 * @return Start iterator for vector of Nodes
		 */
		std::vector<IKNode2D>::iterator begin() { return m_Nodes.begin(); }

		/**
		 * @brief Returns the end iterator for Nodes vector
		 * @return End iterator for vector of Nodes
		 */
		std::vector<IKNode2D>::iterator end() { return m_Nodes.end(); }

		/**
		 * @brief Returns the reverse start iterator for Nodes vector
		 * @return Reverse start iterator for vector of Nodes
		 */
		std::vector<IKNode2D>::reverse_iterator rbegin() { return m_Nodes.rbegin(); }

		/**
		 * @brief Returns the reverse end iterator for Nodes vector
		 * @return Reverse end iterator for vector of Nodes
		 */
		std::vector<IKNode2D>::reverse_iterator rend() { return m_Nodes.rend(); }

		/**
		 * @brief Returns last node or effector of the chain
		 * @return Last node in chain
		 */
		IKNode2D GetFirstNode() { return m_Nodes.front(); }

		/**
		 * @brief Returns last node or effector of the chain
		 * @return Last node in chain
		 */
		IKNode2D GetLastNode() { return m_Nodes.back(); }

	private:
		/*! Array of nodes in chain */
		std::vector<IKNode2D> m_Nodes;
		//std::vector<IKNode2D> m_Effectors;
	};

	/**
	 * @brief Represents a chain of IK Nodes in 3D
	 */
	class IKChain3D
	{
	public:
		IKChain3D() = default;
		~IKChain3D() = default;

		void AddNode(const glm::vec3& nodePos) { m_Nodes.emplace_back(IKNode3D{ nodePos }); }
		void AddNode(const IKNode3D& node) { m_Nodes.emplace_back(node); }

		size_t Size() { return m_Nodes.size(); }
		IKNode3D& operator [] (size_t index) { return m_Nodes[index]; }

	private:
		std::vector<IKNode3D> m_Nodes;
		//std::vector<IKNode3D> m_Effectors;
	};

}