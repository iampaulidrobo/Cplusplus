https://www.geeksforgeeks.org/introduction-to-binary-tree-data-structure-and-algorithm-tutorials/
https://www.youtube.com/playlist?list=PLkjdNRgDmcc0Pom5erUBU4ZayeU9AyRRu


Traversal of Binary Tree

Traversal of Binary Tree involves visiting all the nodes of the binary tree. Tree Traversal algorithms can be classified broadly into two categories:

    Depth-First Search (DFS) Algorithms
    Breadth-First Search (BFS) Algorithms

Depth-First Search (DFS) algorithms:using stack to store the path/data

    Preorder Traversal (root-left-right): Visit the current node before visiting any nodes inside the left or right subtrees. Here, the traversal is root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
    Inorder Traversal (left-root-right): Visit the current node after visiting all nodes inside the left subtree but before visiting any node within the right subtree. Here, the traversal is left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
    Postorder Traversal (left-right-root): Visit the current node after visiting all the nodes of the left and right subtrees.  Here, the traversal is left child – right child – root.  It means that the left child has traversed first then the right child and finally its root node.

Breadth-First Search (BFS) algorithms:using queue to store path/data

    Level Order Traversal:  Visit nodes level-by-level and left-to-right fashion at the same level. Here, the traversal is level-wise. It means that the most left child has traversed first and then the other children of the same level from left to right have traversed.