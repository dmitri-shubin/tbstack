/*
 * tbstack -- fast stack trace utility
 *
 * Copyright (c) 2014, Tbricks AB
 * All rights reserved.
 */

#ifndef __4ed4cde8_b414_11e3_a420_007bd8de5bcc
#define __4ed4cde8_b414_11e3_a420_007bd8de5bcc

/*
 * get process' stack trace
 */
int backtrace_snapshot(int pid, int *tids, int *index, int nr_tids);

/*
 * get process' stack trace using libunwind-ptrace
 */
int backtrace_ptrace(int pid, int *tids, int *index, int nr_tids);

#endif

