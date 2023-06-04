{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fnil\fcharset0 Menlo-Bold;\f2\fswiss\fcharset0 Helvetica;
}
{\colortbl;\red255\green255\blue255;\red253\green143\blue63;\red31\green31\blue36;\red252\green106\blue93;
\red255\green255\blue255;\red252\green95\blue163;\red93\green216\blue255;\red108\green121\blue134;\red108\green121\blue134;
\red158\green241\blue221;\red65\green161\blue192;\red103\green183\blue164;\red208\green191\blue105;\red103\green183\blue164;
\red161\green103\blue230;\red161\green103\blue230;\red208\green168\blue255;\red158\green241\blue221;}
{\*\expandedcolortbl;;\csgenericrgb\c99131\c56076\c24611;\csgenericrgb\c12054\c12284\c14131;\csgenericrgb\c98912\c41558\c36568;
\csgenericrgb\c100000\c100000\c100000\c85000;\csgenericrgb\c98839\c37355\c63833;\csgenericrgb\c36295\c84643\c99897;\csgenericrgb\c42394\c47462\c52518\c45000;\csgenericrgb\c42394\c47462\c52518;
\csgenericrgb\c62145\c94386\c86819;\csgenericrgb\c25490\c63137\c75294;\csgenericrgb\c40538\c71705\c64209;\csgenericrgb\c81498\c74939\c41233;\csgenericrgb\c40392\c71765\c64314;
\csgenericrgb\c63137\c40392\c90196;\csgenericrgb\c63232\c40219\c90115;\csgenericrgb\c81569\c65882\c100000;\csgenericrgb\c61961\c94510\c86667;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab840
\pard\tx840\pardeftab840\pardirnatural\partightenfactor0

\f0\fs34 \cf2 \cb3 #include \cf4 <iostream>\cf5 \
\cf2 #include \cf4 <string>\cf5 \
\cf2 #include \cf4 <stack>\cf5 \
\cf2 #include \cf4 <cmath>\cf5 \
\cf2 #include \cf4 <queue>\cf5 \

\f1\b \cf6 using
\f0\b0 \cf5  
\f1\b \cf6 namespace
\f0\b0 \cf5  \cf7 std\cf5 ;\
\
\cf8 ///
\f2 \cf9 binary search tree
\f0 \cf5 \

\f1\b \cf6 class
\f0\b0 \cf5  \cf7 BinarySearchTree\cf5 \{\

\f1\b \cf6 private
\f0\b0 \cf5 :\
    
\f1\b \cf6 struct
\f0\b0 \cf5  \cf7 Node\cf5 \{\
        
\f1\b \cf6 int
\f0\b0 \cf5  value;\
        \cf10 Node\cf5  *left;\
        \cf10 Node\cf5  *right;\
        \cf11 Node\cf5 (
\f1\b \cf6 int
\f0\b0 \cf5  val)\{\
            \cf12 value\cf5 =val;\
            \cf12 right\cf5 =\cf12 left\cf5 =
\f1\b \cf6 NULL
\f0\b0 \cf5 ;\
        \}\
    \};\
    \cf10 Node\cf5  *root;\
    
\f1\b \cf6 int
\f0\b0 \cf5  count;\
    
\f1\b \cf6 int
\f0\b0 \cf5  \cf11 getHighetHelper\cf5 (\cf10 Node\cf5 * temp)\{\
        
\f1\b \cf6 if
\f0\b0 \cf5 (temp==
\f1\b \cf6 nullptr
\f0\b0 \cf5 )\
            
\f1\b \cf6 return
\f0\b0 \cf5  -\cf13 1\cf5 ;\
        
\f1\b \cf6 int
\f0\b0 \cf5  leftSubTree=\cf14 getHighetHelper\cf5 (temp->\cf12 left\cf5 );\
        
\f1\b \cf6 int
\f0\b0 \cf5  rightSubTree=\cf14 getHighetHelper\cf5 (temp->\cf12 right\cf5 );\
        \
        
\f1\b \cf6 return
\f0\b0 \cf5  \cf13 1\cf5 +\cf15 max\cf5 (leftSubTree,rightSubTree);\
    \}\

\f1\b \cf6 public
\f0\b0 \cf5 :\
   \
    \cf11 BinarySearchTree\cf5 ()\{\
        \cf12 root\cf5 =
\f1\b \cf6 NULL
\f0\b0 \cf5 ;\
        \cf12 count\cf5 =\cf13 0\cf5 ;\
    \}\
    \
    \cf10 Node\cf5 * \cf11 getRoot\cf5 ()\{\
        
\f1\b \cf6 return
\f0\b0 \cf5  \cf12 root\cf5 ;\
    \}\
    \
    
\f1\b \cf6 void
\f0\b0 \cf5  \cf11 insert\cf5 (
\f1\b \cf6 int
\f0\b0 \cf5  element)\{\
        \cf14 insert\cf5 (element,\cf12 root\cf5 );\
    \}\
    \
    
\f1\b \cf6 void
\f0\b0 \cf5  \cf11 insert\cf5 (
\f1\b \cf6 int
\f0\b0 \cf5  element, \cf10 Node\cf5  *begin)\{\
        
\f1\b \cf6 if
\f0\b0 \cf5 (begin == 
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
        \{\
            begin=
\f1\b \cf6 new
\f0\b0 \cf5  \cf10 Node\cf5 (element);\
            \cf12 root\cf5 =begin;\
            \cf12 count\cf5 ++;\
        \}
\f1\b \cf6 else
\f0\b0 \cf5 \{\
            \cf10 Node\cf5  *curr=begin;\
            
\f1\b \cf6 if
\f0\b0 \cf5 (element<=curr->\cf12 value\cf5 )\
            \{\
                
\f1\b \cf6 if
\f0\b0 \cf5 (curr->\cf12 left\cf5  == 
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
                \{\
                    \cf10 Node\cf5  *newNodePtr=
\f1\b \cf6 new
\f0\b0 \cf5  \cf10 Node\cf5 (element);\
                    curr->\cf12 left\cf5 =newNodePtr;\
                    \cf12 count\cf5 ++;\
                \}
\f1\b \cf6 else
\f0\b0 \cf5 \{\
                    \cf14 insert\cf5 (element,curr->\cf12 left\cf5 );\
                \}\
            \}\
            \
            
\f1\b \cf6 if
\f0\b0 \cf5 (element>curr->\cf12 value\cf5 )\
            \{\
                
\f1\b \cf6 if
\f0\b0 \cf5 (curr->\cf12 right\cf5  == 
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
                \{\
                    \cf10 Node\cf5  *newNodePtr=
\f1\b \cf6 new
\f0\b0 \cf5  \cf10 Node\cf5 (element);\
                    curr->\cf12 right\cf5 =newNodePtr;\
                    \cf12 count\cf5 ++;\
                \}
\f1\b \cf6 else
\f0\b0 \cf5 \{\
                    \cf14 insert\cf5 (element,curr->\cf12 right\cf5 );\
                \}\
            \}\
        \}\
    \}\
    \
    
\f1\b \cf6 void
\f0\b0 \cf5  \cf11 preOrderTravere\cf5 (\cf10 Node\cf5  *root)\{\
        
\f1\b \cf6 if
\f0\b0 \cf5 (root!=
\f1\b \cf6 NULL
\f0\b0 \cf5 )\{\
            \cf16 cout\cf5 <<root->\cf12 value\cf5 <<\cf4 " "\cf5 ;\
            \cf14 preOrderTravere\cf5 (root->\cf12 left\cf5 );\
            \cf14 preOrderTravere\cf5 (root->\cf12 right\cf5 );\
        \}\
    \}\
    \
    
\f1\b \cf6 int
\f0\b0 \cf5  \cf11 getMin\cf5 ()\{\
        \cf10 Node\cf5  *curr=\cf12 root\cf5 ;\
        
\f1\b \cf6 while
\f0\b0 \cf5 (curr->\cf12 left\cf5 !=
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
            curr=curr->\cf12 left\cf5 ;\
        \
        
\f1\b \cf6 return
\f0\b0 \cf5  curr->\cf12 value\cf5 ;\
    \}\
    \
    
\f1\b \cf6 int
\f0\b0 \cf5  \cf11 getMax\cf5 ()\{\
        \cf10 Node\cf5  *curr=\cf12 root\cf5 ;\
        
\f1\b \cf6 while
\f0\b0 \cf5 (curr->\cf12 right\cf5  !=
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
            curr=curr->\cf12 right\cf5 ;\
        \
        
\f1\b \cf6 return
\f0\b0 \cf5  curr->\cf12 value\cf5 ;\
    \}\
    \
    
\f1\b \cf6 void
\f0\b0 \cf5  \cf11 search\cf5 (
\f1\b \cf6 int
\f0\b0 \cf5  element)\{\
        \
        \cf10 Node\cf5  *curr=\cf12 root\cf5 ;\
        
\f1\b \cf6 bool
\f0\b0 \cf5  found=
\f1\b \cf6 false
\f0\b0 \cf5 ;\
        
\f1\b \cf6 int
\f0\b0 \cf5  depth=\cf13 0\cf5 ;\
        
\f1\b \cf6 while
\f0\b0 \cf5 (curr !=
\f1\b \cf6 NULL
\f0\b0 \cf5 )\
        \{\
            
\f1\b \cf6 if
\f0\b0 \cf5 (element==curr->\cf12 value\cf5 )\{\
                \cf16 cout\cf5 <<element<< \cf4 " :Found\\t/ Depth= "\cf5 <<depth<<\cf4 "\\n"\cf5 ;\
                found=
\f1\b \cf6 true
\f0\b0 \cf5 ;\
                
\f1\b \cf6 break
\f0\b0 \cf5 ;\
            \}\
        
\f1\b \cf6 else
\f0\b0 \cf5 \{\
            
\f1\b \cf6 if
\f0\b0 \cf5 (element < curr->\cf12 value\cf5 )\
                curr=curr->\cf12 left\cf5 ;\
            
\f1\b \cf6 else
\f0\b0 \cf5 \
                curr=curr->\cf12 right\cf5 ;\
            depth++;\
        \}\
        \}\
        
\f1\b \cf6 if
\f0\b0 \cf5 (found==
\f1\b \cf6 false
\f0\b0 \cf5 )\
            \cf16 cout\cf5 <<element<<\cf4 " :Not found\\n"\cf5 ;\
    \}\
    \
    \cf9 //calculate height for any binary tree  h=1+max(L,R)\cf5 \
    
\f1\b \cf6 int
\f0\b0 \cf5  \cf11 getHeight\cf5 ()\{\
        
\f1\b \cf6 if
\f0\b0 \cf5 (\cf12 root\cf5 ==
\f1\b \cf6 nullptr
\f0\b0 \cf5 )\
            
\f1\b \cf6 return
\f0\b0 \cf5  -\cf13 1\cf5 ;\
        
\f1\b \cf6 else
\f0\b0 \cf5 \
        
\f1\b \cf6 return
\f0\b0 \cf5  \cf14 getHighetHelper\cf5 (\cf12 root\cf5 );\
    \}\
    \
    \
    
\f1\b \cf6 void
\f0\b0 \cf5  \cf11 breadthFirstTraverse\cf5 ()\{\
        
\f1\b \cf6 if
\f0\b0 \cf5 (\cf12 root\cf5  == 
\f1\b \cf6 nullptr
\f0\b0 \cf5 ) 
\f1\b \cf6 return
\f0\b0 \cf5 ;\
        \
        \cf17 queue\cf5 <\cf10 Node\cf5 *> q;\
        q.\cf15 push\cf5 (\cf12 root\cf5 );\
        \
        
\f1\b \cf6 while
\f0\b0 \cf5 (!q.\cf15 empty\cf5 ())\
        \{\
            \cf10 Node\cf5 * current = q.\cf15 front\cf5 ();\
            q.\cf15 pop\cf5 ();\
            \cf16 cout\cf5 <<current->\cf12 value\cf5 <<\cf4 " "\cf5 ;\
            
\f1\b \cf6 if
\f0\b0 \cf5 (current->\cf12 left\cf5  != 
\f1\b \cf6 nullptr
\f0\b0 \cf5 )\
                q.\cf15 push\cf5 (current->\cf12 left\cf5 );\
            
\f1\b \cf6 if
\f0\b0 \cf5 (current->\cf12 right\cf5  != 
\f1\b \cf6 nullptr
\f0\b0 \cf5 )\
                q.\cf15 push\cf5 (current->\cf12 right\cf5 );\
        \}\
    \}\
\
\};\
\
\
\
\

\f1\b \cf6 int
\f0\b0 \cf5  \cf11 main\cf5 ()\{\
    \cf18 BinarySearchTree\cf5  bst;\
    bst.\cf14 insert\cf5 (\cf13 10\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 5\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 15\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 6\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 4\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 3\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 7\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 30\cf5 );\
    bst.\cf14 insert\cf5 (\cf13 27\cf5 );\
    \cf16 cout\cf5 <<\cf4 "pre-Order: "\cf5 ;\
    bst.\cf14 preOrderTravere\cf5 (bst.\cf14 getRoot\cf5 ());\
    \cf16 cout\cf5 <<\cf15 endl\cf5 ;\
    \cf16 cout\cf5 <<\cf4 "Min item: "\cf5 <<bst.\cf14 getMin\cf5 ()<<\cf15 endl\cf5 ;\
    \cf16 cout\cf5 <<\cf4 "Max item: "\cf5 <<bst.\cf14 getMax\cf5 ()<<\cf15 endl\cf5 ;\
    bst.\cf14 search\cf5 (\cf13 4\cf5 );\
    \cf16 cout\cf5 <<\cf4 "Height: "\cf5 <<bst.\cf14 getHeight\cf5 ()<<\cf15 endl\cf5 ;\
    \cf16 cout\cf5 <<\cf4 "Breadth-first: "\cf5 ;\
    bst.\cf14 breadthFirstTraverse\cf5 ();\
    \cf16 cout\cf5 <<\cf15 endl\cf5 ;\
    \
    \
    
\f1\b \cf6 return
\f0\b0 \cf5  \cf13 0\cf5 ;\
\}\
}