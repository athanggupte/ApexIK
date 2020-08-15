# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`namespace `[`Apex`](#namespace_apex) | The base [Apex](#namespace_apex) namespace.

# namespace `Apex` {#namespace_apex}

The base [Apex](#namespace_apex) namespace.

Athang Gupte

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`Apex::FABRIKSolver`](#class_apex_1_1_f_a_b_r_i_k_solver) | FABRIK Solver implementation.
`class `[`Apex::IKChain2D`](#class_apex_1_1_i_k_chain2_d) | Represents a chain of IK Nodes in 2D.
`class `[`Apex::IKChain3D`](#class_apex_1_1_i_k_chain3_d) | Represents a chain of IK Nodes in 3D.
`struct `[`Apex::IKNode2D`](#struct_apex_1_1_i_k_node2_d) | Represents a node in a 2D IK chain.
`struct `[`Apex::IKNode3D`](#struct_apex_1_1_i_k_node3_d) | Represents a node in a 3D IK chain.

# class `Apex::FABRIKSolver` {#class_apex_1_1_f_a_b_r_i_k_solver}

FABRIK Solver implementation.

Check [An Introduction to FABRIK](#fabrik) for more details

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `Apex::IKChain2D` {#class_apex_1_1_i_k_chain2_d}

Represents a chain of IK Nodes in 2D.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`IKChain2D`](#class_apex_1_1_i_k_chain2_d_1a1a92cc8db5d8c612c82b24f1790d3e55)`() = default` | Default constructor for empty chain
`public  `[`~IKChain2D`](#class_apex_1_1_i_k_chain2_d_1aebd0d4331ed4a1b505930a42b76bde8e)`() = default` | Default destructor
`public inline void `[`AddNode`](#class_apex_1_1_i_k_chain2_d_1a0909a421979c16a9d48216453b7c10d4)`(const glm::vec2 & nodePos)` | Add a node to the end of the IK chain.
`public inline void `[`AddNode`](#class_apex_1_1_i_k_chain2_d_1afe31a508d7d4ca060397ef3ecc9fc83a)`(const `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` & node)` | Add a node to the end of the IK chain.
`public inline size_t `[`Size`](#class_apex_1_1_i_k_chain2_d_1ae950a220334962f7e1086c6827028a45)`()` | Get size of (or number of nodes in) the chain.
`public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` & `[`operator[]`](#class_apex_1_1_i_k_chain2_d_1a6533c6636f7925367fc7c6fd1ec9bee3)`(size_t index)` | Array indexing operator for nodes in the chain.
`public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::iterator `[`begin`](#class_apex_1_1_i_k_chain2_d_1a5ddd586aa2085319f34d926228347513)`()` | Returns the start iterator for Nodes vector.
`public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::iterator `[`end`](#class_apex_1_1_i_k_chain2_d_1a48baff70217e4747d50cfef7221157bb)`()` | Returns the end iterator for Nodes vector.
`public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::reverse_iterator `[`rbegin`](#class_apex_1_1_i_k_chain2_d_1a0bdc11b9537960edf290c7a26b7200c7)`()` | Returns the reverse start iterator for Nodes vector.
`public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::reverse_iterator `[`rend`](#class_apex_1_1_i_k_chain2_d_1a24783e74b5faf470881c83959cfa55e7)`()` | Returns the reverse end iterator for Nodes vector.
`public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` `[`GetFirstNode`](#class_apex_1_1_i_k_chain2_d_1aa9c3f621b5562d13915d33f0b2bc01d8)`()` | Returns last node or effector of the chain.
`public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` `[`GetLastNode`](#class_apex_1_1_i_k_chain2_d_1a7ad9dcdd092b81435f22d7d8c10d50d3)`()` | Returns last node or effector of the chain.

## Members

#### `public  `[`IKChain2D`](#class_apex_1_1_i_k_chain2_d_1a1a92cc8db5d8c612c82b24f1790d3e55)`() = default` {#class_apex_1_1_i_k_chain2_d_1a1a92cc8db5d8c612c82b24f1790d3e55}

Default constructor for empty chain

#### `public  `[`~IKChain2D`](#class_apex_1_1_i_k_chain2_d_1aebd0d4331ed4a1b505930a42b76bde8e)`() = default` {#class_apex_1_1_i_k_chain2_d_1aebd0d4331ed4a1b505930a42b76bde8e}

Default destructor

#### `public inline void `[`AddNode`](#class_apex_1_1_i_k_chain2_d_1a0909a421979c16a9d48216453b7c10d4)`(const glm::vec2 & nodePos)` {#class_apex_1_1_i_k_chain2_d_1a0909a421979c16a9d48216453b7c10d4}

Add a node to the end of the IK chain.

#### Parameters
* `nodePos` 2D world position of the node

#### `public inline void `[`AddNode`](#class_apex_1_1_i_k_chain2_d_1afe31a508d7d4ca060397ef3ecc9fc83a)`(const `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` & node)` {#class_apex_1_1_i_k_chain2_d_1afe31a508d7d4ca060397ef3ecc9fc83a}

Add a node to the end of the IK chain.

#### Parameters
* `node` IK node instance to add

#### `public inline size_t `[`Size`](#class_apex_1_1_i_k_chain2_d_1ae950a220334962f7e1086c6827028a45)`()` {#class_apex_1_1_i_k_chain2_d_1ae950a220334962f7e1086c6827028a45}

Get size of (or number of nodes in) the chain.

#### Returns
Size of the chain

#### `public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` & `[`operator[]`](#class_apex_1_1_i_k_chain2_d_1a6533c6636f7925367fc7c6fd1ec9bee3)`(size_t index)` {#class_apex_1_1_i_k_chain2_d_1a6533c6636f7925367fc7c6fd1ec9bee3}

Array indexing operator for nodes in the chain.

#### Parameters
* `index` Index of Node to access 

#### Returns
Reference to indexed node

#### `public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::iterator `[`begin`](#class_apex_1_1_i_k_chain2_d_1a5ddd586aa2085319f34d926228347513)`()` {#class_apex_1_1_i_k_chain2_d_1a5ddd586aa2085319f34d926228347513}

Returns the start iterator for Nodes vector.

#### Returns
Start iterator for vector of Nodes

#### `public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::iterator `[`end`](#class_apex_1_1_i_k_chain2_d_1a48baff70217e4747d50cfef7221157bb)`()` {#class_apex_1_1_i_k_chain2_d_1a48baff70217e4747d50cfef7221157bb}

Returns the end iterator for Nodes vector.

#### Returns
End iterator for vector of Nodes

#### `public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::reverse_iterator `[`rbegin`](#class_apex_1_1_i_k_chain2_d_1a0bdc11b9537960edf290c7a26b7200c7)`()` {#class_apex_1_1_i_k_chain2_d_1a0bdc11b9537960edf290c7a26b7200c7}

Returns the reverse start iterator for Nodes vector.

#### Returns
Reverse start iterator for vector of Nodes

#### `public inline std::vector< `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` >::reverse_iterator `[`rend`](#class_apex_1_1_i_k_chain2_d_1a24783e74b5faf470881c83959cfa55e7)`()` {#class_apex_1_1_i_k_chain2_d_1a24783e74b5faf470881c83959cfa55e7}

Returns the reverse end iterator for Nodes vector.

#### Returns
Reverse end iterator for vector of Nodes

#### `public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` `[`GetFirstNode`](#class_apex_1_1_i_k_chain2_d_1aa9c3f621b5562d13915d33f0b2bc01d8)`()` {#class_apex_1_1_i_k_chain2_d_1aa9c3f621b5562d13915d33f0b2bc01d8}

Returns last node or effector of the chain.

#### Returns
Last node in chain

#### `public inline `[`IKNode2D`](#struct_apex_1_1_i_k_node2_d)` `[`GetLastNode`](#class_apex_1_1_i_k_chain2_d_1a7ad9dcdd092b81435f22d7d8c10d50d3)`()` {#class_apex_1_1_i_k_chain2_d_1a7ad9dcdd092b81435f22d7d8c10d50d3}

Returns last node or effector of the chain.

#### Returns
Last node in chain

# class `Apex::IKChain3D` {#class_apex_1_1_i_k_chain3_d}

Represents a chain of IK Nodes in 3D.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`IKChain3D`](#class_apex_1_1_i_k_chain3_d_1ac70596eaf2a839fa186db98aae9169d1)`() = default` | 
`public  `[`~IKChain3D`](#class_apex_1_1_i_k_chain3_d_1ae386ca1b195b1ca136a793eb1bacf7d5)`() = default` | 
`public inline void `[`AddNode`](#class_apex_1_1_i_k_chain3_d_1a56685f26ea695803c523acd89ebf4398)`(const glm::vec3 & nodePos)` | 
`public inline void `[`AddNode`](#class_apex_1_1_i_k_chain3_d_1a01533196fac69185486ec92c64e44bb8)`(const `[`IKNode3D`](#struct_apex_1_1_i_k_node3_d)` & node)` | 
`public inline size_t `[`Size`](#class_apex_1_1_i_k_chain3_d_1abae690e489624f3905d7a0c893076d20)`()` | 
`public inline `[`IKNode3D`](#struct_apex_1_1_i_k_node3_d)` & `[`operator[]`](#class_apex_1_1_i_k_chain3_d_1ab2df3cf9295b36ae97c419e5dd3c932d)`(size_t index)` | 

## Members

#### `public  `[`IKChain3D`](#class_apex_1_1_i_k_chain3_d_1ac70596eaf2a839fa186db98aae9169d1)`() = default` {#class_apex_1_1_i_k_chain3_d_1ac70596eaf2a839fa186db98aae9169d1}

#### `public  `[`~IKChain3D`](#class_apex_1_1_i_k_chain3_d_1ae386ca1b195b1ca136a793eb1bacf7d5)`() = default` {#class_apex_1_1_i_k_chain3_d_1ae386ca1b195b1ca136a793eb1bacf7d5}

#### `public inline void `[`AddNode`](#class_apex_1_1_i_k_chain3_d_1a56685f26ea695803c523acd89ebf4398)`(const glm::vec3 & nodePos)` {#class_apex_1_1_i_k_chain3_d_1a56685f26ea695803c523acd89ebf4398}

#### `public inline void `[`AddNode`](#class_apex_1_1_i_k_chain3_d_1a01533196fac69185486ec92c64e44bb8)`(const `[`IKNode3D`](#struct_apex_1_1_i_k_node3_d)` & node)` {#class_apex_1_1_i_k_chain3_d_1a01533196fac69185486ec92c64e44bb8}

#### `public inline size_t `[`Size`](#class_apex_1_1_i_k_chain3_d_1abae690e489624f3905d7a0c893076d20)`()` {#class_apex_1_1_i_k_chain3_d_1abae690e489624f3905d7a0c893076d20}

#### `public inline `[`IKNode3D`](#struct_apex_1_1_i_k_node3_d)` & `[`operator[]`](#class_apex_1_1_i_k_chain3_d_1ab2df3cf9295b36ae97c419e5dd3c932d)`(size_t index)` {#class_apex_1_1_i_k_chain3_d_1ab2df3cf9295b36ae97c419e5dd3c932d}

# struct `Apex::IKNode2D` {#struct_apex_1_1_i_k_node2_d}

Represents a node in a 2D IK chain.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public glm::vec2 `[`position`](#struct_apex_1_1_i_k_node2_d_1ab0455c2aca0252e1d570155286efc200) | 
`public inline void `[`operator=`](#struct_apex_1_1_i_k_node2_d_1a878b2eed5edc40f1080f38ea53c08bcd)`(const glm::vec2 & position)` | 
`public inline  `[`operator const glm::vec2`](#struct_apex_1_1_i_k_node2_d_1a2b109c875500251a116d37691e212c37)`() const` | 
`public inline  `[`operator glm::vec2`](#struct_apex_1_1_i_k_node2_d_1a40759be3219e065f691acf1b83245574)`()` | 

## Members

#### `public glm::vec2 `[`position`](#struct_apex_1_1_i_k_node2_d_1ab0455c2aca0252e1d570155286efc200) {#struct_apex_1_1_i_k_node2_d_1ab0455c2aca0252e1d570155286efc200}

#### `public inline void `[`operator=`](#struct_apex_1_1_i_k_node2_d_1a878b2eed5edc40f1080f38ea53c08bcd)`(const glm::vec2 & position)` {#struct_apex_1_1_i_k_node2_d_1a878b2eed5edc40f1080f38ea53c08bcd}

#### `public inline  `[`operator const glm::vec2`](#struct_apex_1_1_i_k_node2_d_1a2b109c875500251a116d37691e212c37)`() const` {#struct_apex_1_1_i_k_node2_d_1a2b109c875500251a116d37691e212c37}

#### `public inline  `[`operator glm::vec2`](#struct_apex_1_1_i_k_node2_d_1a40759be3219e065f691acf1b83245574)`()` {#struct_apex_1_1_i_k_node2_d_1a40759be3219e065f691acf1b83245574}

# struct `Apex::IKNode3D` {#struct_apex_1_1_i_k_node3_d}

Represents a node in a 3D IK chain.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public glm::vec3 `[`position`](#struct_apex_1_1_i_k_node3_d_1a97cf9f9340c53c97b3a653bab13e6e42) | 
`public inline  `[`operator const glm::vec3 &`](#struct_apex_1_1_i_k_node3_d_1a43fb734e45905e56a2230a5a8aa9eab5)`()` | 
`public inline  `[`operator glm::vec3`](#struct_apex_1_1_i_k_node3_d_1a86ad211fb303f50a1faf90e8d30dc937)`()` | 

## Members

#### `public glm::vec3 `[`position`](#struct_apex_1_1_i_k_node3_d_1a97cf9f9340c53c97b3a653bab13e6e42) {#struct_apex_1_1_i_k_node3_d_1a97cf9f9340c53c97b3a653bab13e6e42}

#### `public inline  `[`operator const glm::vec3 &`](#struct_apex_1_1_i_k_node3_d_1a43fb734e45905e56a2230a5a8aa9eab5)`()` {#struct_apex_1_1_i_k_node3_d_1a43fb734e45905e56a2230a5a8aa9eab5}

#### `public inline  `[`operator glm::vec3`](#struct_apex_1_1_i_k_node3_d_1a86ad211fb303f50a1faf90e8d30dc937)`()` {#struct_apex_1_1_i_k_node3_d_1a86ad211fb303f50a1faf90e8d30dc937}

Generated by [Moxygen](https://sourcey.com/moxygen)