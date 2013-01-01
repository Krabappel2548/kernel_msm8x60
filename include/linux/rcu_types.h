#ifndef __LINUX_RCU_TYPES_H
#define __LINUX_RCU_TYPES_H

#ifdef __KERNEL__

struct rcu_head {
	struct rcu_head *next;
	void (*func)(struct rcu_head *head);
};

#endif
#endif