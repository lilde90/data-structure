// Copyright 2018 lilde90. All Rights Reserved.
// Author: Pan Li (panli.me@gmail.com)
//
template<typename K>
struct skipListNode {
  K obj;
  double score;
  struct skipListNode<K>* backward;
  struct skipListLevel {
    struct skipListNode<K>* forward;
    unsigned int span;
  } level[];
};

template<typename K>
struct skiplist {
  struct skipListNode<K>* head;
  struct skipListNode<K>* tail;
  unsigned long length;
  int level;
};
