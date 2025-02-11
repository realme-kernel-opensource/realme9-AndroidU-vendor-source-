/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020 Oplus. All rights reserved.
 */


#ifndef _OPLUS_SCHED_FORK_H_
#define _OPLUS_SCHED_FORK_H_

static inline void init_task_ux_info(struct task_struct *p)
{
	p->ux_state = 0;
	atomic64_set(&(p->inherit_ux), 0);
	INIT_LIST_HEAD(&p->ux_entry);
#ifdef CONFIG_LOCKING_PROTECT
	INIT_LIST_HEAD(&p->locking_entry);
	p->locking_time_start = 0;
	p->locking_depth = 0;
#endif
	p->ux_depth = 0;
	p->enqueue_time = 0;
	p->inherit_ux_start = 0;
#ifdef CONFIG_MMAP_LOCK_OPT
	p->ux_once = 0;
	p->get_mmlock = 0;
	p->get_mmlock_ts = 0;
#endif
#ifdef CONFIG_OPLUS_FEATURE_SCHED_SPREAD
	p->lb_state = 0;
	p->ld_flag = 0;
#endif
}
#endif /* _OPLUS_SCHED_FORK_H_ */
