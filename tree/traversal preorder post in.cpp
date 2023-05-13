
//class Tree{};
// in main tree p;
// preorder traversal using recursion
void preOrder (Node* p){
	if(p!=NULL){
		cout<< p->item<<" ";
		preOrder(p->left);
		preOrder(p->right);

	}
}
// inOrder traversal using recursion
void inOrder (Node* p){
	if(p!=NULL){
	preOrder(p->left);
	cout<< p->item<<" ";
	preOrder(p->right);

	}
}
// postOrder traversal using recursion
void postOrder (Node* p){
	if(p!=NULL){
		
		preOrder(p->left);
		preOrder(p->right);
        cout<< p->item<<" ";
	}
}
