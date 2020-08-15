#include "FABRIK.h"

namespace Apex {

    /*# 2D Solver #*/

    IKChain2D& FABRIKSolver::Solve(IKChain2D& chain, glm::vec2 goal)
    {
        std::vector<float> lengths(chain.Size(), 0);
        float sumLen = 0.0f;
        
        /* Save lengths of the links in array */
        {
            auto prev = chain.GetFirstNode();
            auto length = lengths.begin();

            for (auto node : chain) {
                *length = glm::distance((glm::vec2)node, (glm::vec2)prev);
                sumLen += *length;
                prev = node;
                length++;
            }
        }

        /* Check if goal is within reach */
        if (glm::abs(glm::distance((glm::vec2)chain.GetFirstNode(), goal) - sumLen) > epsilon) {
            auto prev = chain.GetFirstNode();
            auto length = lengths.begin();
            auto unitVec = glm::normalize(goal - (glm::vec2)prev);

            for (auto it = ++(chain.begin()); it != chain.end(); ++it) {
                *it = (glm::vec2)prev + ((*length) * unitVec);
                prev = *it;
                length++;
            }

            return chain;
        }

        const auto fixedBase = chain.GetFirstNode();
        uint32_t numIterations = 0;
        while (glm::distance((glm::vec2)chain.GetLastNode(), goal) <= epsilon && numIterations < 10) {
            ForwardReach(chain, lengths, goal);
            BackwardReach(chain, lengths, (glm::vec2)fixedBase);
        }

        return chain;
    }

    IKChain2D& FABRIKSolver::ForwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& goal)
    {
        auto prev = chain.GetLastNode();
        auto length = lengths.rbegin();

        prev = goal;
        for (auto it = ++(chain.rbegin()); it != chain.rend(); ++it) {
            auto unitVec = glm::normalize((glm::vec2)(*it) - (glm::vec2)prev);
            *it = (glm::vec2)prev + ((*length) * unitVec);
            prev = *it;
            length++;
        }

        return chain;
    }

    IKChain2D& FABRIKSolver::BackwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& base)
    {
        auto prev = chain.GetFirstNode();
        auto length = lengths.begin();

        prev = base;
        for (auto it = ++(chain.begin()); it != chain.end(); ++it) {
            auto unitVec = glm::normalize((glm::vec2)(*it) - (glm::vec2)prev);
            *it = (glm::vec2)prev + ((*length) * unitVec);
            prev = *it;
            length++;
        }

        return chain;
    }


    /*# 3D Solver #*/

    IKChain3D& FABRIKSolver::Solve(IKChain3D& chain, glm::vec3 goal)
    {
        std::vector<float> lengths(chain.Size(), 0);

        auto prev = chain[0];

        //for (auto : )
        return chain;
    }

    IKChain3D& FABRIKSolver::ForwardReach(IKChain3D& chain, const std::vector<float>& lengths, const glm::vec2& goal)
    {
        return chain;
    }

    IKChain3D& FABRIKSolver::BackwardReach(IKChain3D& chain, const std::vector<float>& lengths, const glm::vec2& goal)
    {
        return chain;
    }

}