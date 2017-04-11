#ifndef PROPHYLE_QUERY_H
#define PROPHYLE_QUERY_H

#include <stdint.h>
#include "bwt.h"
#include "bwtaln.h"
#include "bwa.h"
#include "klcp.h"
#include "prophyle_utils.h"

struct __bwa_seqio_t;
typedef struct __bwa_seqio_t bwa_seqio_t;

typedef struct {
	uint64_t position;
	int strand;
	int rid;
	int node;
} bwt_position_t;

prophyle_index_opt_t *prophyle_index_init_opt();
bwa_seqio_t *bwa_seq_open(const char *fn);
bwa_seqio_t *bwa_bam_open(const char *fn, int which);
void bwa_seq_close(bwa_seqio_t *bs);
void seq_reverse(int len, ubyte_t *seq, int is_comp);
bwa_seq_t *bwa_read_seq(bwa_seqio_t *seq, int n_needed, int *n, int mode, int trim_qual);
void prophyle_index_query_core(const char *prefix, const char *fn_fa, const prophyle_index_opt_t *opt);
void bwa_cal_sa(bwaidx_t* idx, int n_seqs, bwa_seq_t *seqs, const prophyle_index_opt_t *opt, klcp_t* klcp);

#endif //PROPHYLE_QUERY_H
