#ifndef _SGPCET_UNWEIGHT_H_
#define _SGPCET_UNWEIGHT_H_

#ifndef _SGPCET_TREE_H_
#include "tree.h"
#endif // !_SGPCET_TREE_H_
#ifndef _SGPCET_CHAIN_H_
#include "chain.h"
#endif // !_SGPCET_CHAIN_H_
#ifndef _SGPCET_FLOWER_H_
#include "flower.h"
#endif // !_SGPCET_FLOWER_H_
#ifndef _SGPCET_HEIGHT_TREE_H_
#include "graph/height_tree.h"
#endif // !_SGPCET_HEIGHT_TREE_H_
#ifndef _SGPCET_DEGREE_TREE_H_
#include "degree_tree.h"
#endif // !_SGPCET_DEGREE_TREE_H_
#ifndef _SGPCET_SON_TREE_H_
#include "son_tree.h"
#endif // !_SGPCET_SON_TREE_H_

namespace generator {
    namespace rand_graph {
        namespace unweight {
            using Edge = basic::_Edge<void>;
            using NodeWeight = basic::_Node<void>;
            using TreeGenerator = _enum::TreeGenerator;
            using TreeGen = basic::TreeGen<void, void>;
            using RandomFatherGen = basic::RandomFatherGen<void, void>;
            using PrueferGen = basic::PrueferGen<void, void>;
            using Tree = basic::Tree<void, void>;
            using ChainGen = basic::ChainGen<void, void>;
            using Chain = basic::Chain<void, void>;
            using FlowerGen = basic::FlowerGen<void, void>;
            using Flower = basic::Flower<void, void>;
            using HeightTreeGen = basic::HeightTreeGen<void, void>;
            using HeightTree = basic::HeightTree<void, void>;
            using DegreeTreeGen = basic::DegreeTreeGen<void, void>;
            using DegreeTree = basic::DegreeTree<void, void>;
            using SonTreeGen = basic::SonTreeGen<void, void>;
            using SonTree = basic::SonTree<void, void>;
        } // namespace unweight
    } // namespace rand_graph
} // namespace generator

#endif // !_SGPCET_UNWEIGHT_H_