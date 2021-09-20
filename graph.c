


typedef struct inderface_ {

    char if_name[IF_NAME_SIZE];
    struct node_ *att_node;
    struct link_ *link;

} interface_t;

struct link_ {

    interface_t intf1;
    interface_t intf2
    unsigned int cost;

};

struct node_ {
    char node_name[NODE_NAME_SIZE];
    interface_t *intf[MAX_INTF_PER_NODE];

};

typedef struct graph_{

    char topology_name[32];
    glthread_t node_list; //linked list

};

