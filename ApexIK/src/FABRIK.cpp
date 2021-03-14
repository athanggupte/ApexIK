#include "FABRIK.h"

#include <cstdio>

#ifdef DEBUGGING
    #define APEX_IK_DEBUG(...) printf("[FABRIK] " __VA_ARGS__); printf("\n")
#else
    #define APEX_IK_DEBUG
#endif


namespace Apex {

    /*# 2D Solver #*/

    IKChain2D& FABRIKSolver::Solve(IKChain2D& chain, glm::vec2 goal, int maxIterations)
    {
        APEX_IK_DEBUG("epsilon: %f", epsilon);
        
        std::vector<float> lengths(chain.Size(), 0);
        float sumLen = 0.0f;
        
        /* Save lengths of the links in array */
        {
            auto prev = chain.GetFirstNode();
            auto length = lengths.begin();

            APEX_IK_DEBUG("Lengths:");
            for (auto node : chain) {
                *length = glm::distance((glm::vec2)node, (glm::vec2)prev);
                sumLen += *length;
                prev = node;
                
                APEX_IK_DEBUG("%2.2f", *length);
                
                length++;
            }
        }
        
        APEX_IK_DEBUG("Total length: %2.2f", sumLen);
        APEX_IK_DEBUG("Distance to goal: %2.2f", glm::distance((glm::vec2)chain.GetFirstNode(), goal));

        /* Check if goal is within reach */
        if (glm::distance((glm::vec2)chain.GetFirstNode(), goal) - sumLen > epsilon) {
            
            APEX_IK_DEBUG("!! Goal out of reach !!");
            
            auto prev = chain.GetFirstNode();
            auto length = lengths.begin();
            auto unitVec = glm::normalize(goal - (glm::vec2)prev);

            APEX_IK_DEBUG("unitVec: { %2.2f, %2.2f }", unitVec.x, unitVec.y);
            
            //length++;
            for (auto it = (chain.begin()); it != chain.end(); ++it) {
                *it = (glm::vec2)prev + ((*length) * unitVec);
                prev = *it;
                
                APEX_IK_DEBUG("%{ %2.2f, %2.2f }", ((glm::vec2)(*it)).x, ((glm::vec2)(*it)).y);
                
                length++;
            }

            return chain;
        }

        const auto fixedBase = chain.GetFirstNode();
        uint32_t numIterations = 0;
        while (glm::distance((glm::vec2)chain.GetLastNode(), goal) >= epsilon && ((maxIterations == 0) | (numIterations < maxIterations))) {
            ForwardReach(chain, lengths, goal);
            BackwardReach(chain, lengths, (glm::vec2)fixedBase);
        
        #ifdef DEBUGGING
            if (numIterations % 10 == 0) {
                int idx = 0;
                for (glm::vec2&& node : chain) {
                    printf("[%2d] :\t{ %2.2f, %2.2f }\n", idx++, node.x, node.y);
                }
            }
        #endif
            
            numIterations++;
        }

        return chain;
    }

    IKChain2D& FABRIKSolver::ForwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& goal)
    {
        APEX_IK_DEBUG("ForwardReach");
        
        *chain.rbegin() = goal;
        
        auto prev = chain.GetLastNode();
        auto length = lengths.rbegin();
        
        for (auto it = ++(chain.rbegin()); it != chain.rend(); ++it) {
            auto unitVec = glm::normalize((glm::vec2)(*it) - (glm::vec2)prev);
            
//             APEX_IK_DEBUG("unitVec: { %2.2f, %2.2f }", unitVec.x, unitVec.y);
//             APEX_IK_DEBUG("len: %2.2f", *length);
            
            *it = (glm::vec2)prev + ((*length) * unitVec);
            
            APEX_IK_DEBUG("{ %2.2f, %2.2f }", ((glm::vec2)(*it)).x, ((glm::vec2)(*it)).y);
            
            prev = *it;
            length++;
        }

        return chain;
    }

    IKChain2D& FABRIKSolver::BackwardReach(IKChain2D& chain, const std::vector<float>& lengths, const glm::vec2& base)
    {
        APEX_IK_DEBUG("BackwardReach");
        
        *chain.begin() = base;
        
        auto prev = chain.GetFirstNode();
        auto length = lengths.begin();

        length++;
        for (auto it = ++(chain.begin()); it != chain.end(); ++it) {
            auto unitVec = glm::normalize((glm::vec2)(*it) - (glm::vec2)prev);
            
//             APEX_IK_DEBUG("unitVec: { %2.2f, %2.2f }", unitVec.x, unitVec.y);
//             APEX_IK_DEBUG("len: %2.2f", *length);
            
            *it = (glm::vec2)prev + ((*length) * unitVec);
            
            APEX_IK_DEBUG("{ %2.2f, %2.2f }", ((glm::vec2)(*it)).x, ((glm::vec2)(*it)).y);
            
            prev = *it;
            length++;
        }

        return chain;
    }


    /*# 3D Solver #*/

    IKChain3D& FABRIKSolver::Solve(IKChain3D& chain, glm::vec3 goal, int maxIterations)
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
