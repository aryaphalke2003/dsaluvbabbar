Node *findlca(Node *root, int a, int b)
{
    if (root == NULL)
        return NULL;

    Node *left = findlca(root->left, a, b);
    Node *right = findlca(root->right, a, b);

    if (root->data == a || root->data == b)
        return root;

    if (left != NULL && right != NULL)
        return root;

    if (left != NULL)
        return left;

    if (right != NULL)
        return right;

    return NULL; // Added a return statement for the case when no LCA is found
}
// int ans = 0;

int dist(Node *root, int no, int h)
{
    if (root == NULL)
        return -1;

    if (root->data == no)
        return h;

    int leftDist = dist(root->left, no, h + 1); // Added a variable to store the left subtree's distance
    if (leftDist != -1)
        return leftDist;
    // if leftdist is -1 you wont search in right sp dont return for -1;
    int rightDist = dist(root->right, no, h + 1); // Added a variable to store the right subtree's distance
    if (rightDist != -1)
        return rightDist;

    return -1; // Added a return statement for the case when the node is not found
}

int findDist(Node *root, int a, int b)
{
    Node *lca = findlca(root, a, b);
    if (lca == NULL)
        return -1; // LCA not found

    int aa = dist(lca, a, 0);
    int bb = dist(lca, b, 0);

    if (aa == -1 || bb == -1)
        return -1; // One or both nodes not found

    return aa + bb;
}


//Same but better except usage of global var

Node *findlca(Node *root, int a, int b)
{
    if (root == NULL)
        return NULL;

    if (root->data == a || root->data == b)
        return root;

    Node *l = findlca(root->left, a, b);
    Node *r = findlca(root->right, a, b);

    if (l != NULL && r != NULL)
        return root;
    else if (l)
        return l;
    else
        return r;
}

int ans = 0; // global

void dist(Node *root, int a, int h)
{
    if (root == NULL)
        return;

    if (root->data == a)
    {
        ans = h;
        return;
    }

    dist(root->left, a, h + 1);
    dist(root->right, a, h + 1);
}

int findDist(Node *root, int a, int b)
{
    // Your code here
    int fans = 0;
    Node *lca = findlca(root, a, b);
    dist(lca, a, 0);
    fans = ans;
    ans = 0;
    dist(lca, b, 0);
    fans += ans;
    return fans;
}