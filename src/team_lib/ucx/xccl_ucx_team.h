/*
 * Copyright (C) Mellanox Technologies Ltd. 2001-2020.  ALL RIGHTS RESERVED.
 * See file LICENSE for terms.
 */
#ifndef XCCL_UCX_TEAM_H_
#define XCCL_UCX_TEAM_H_
#include "xccl_ucx_lib.h"

typedef struct xccl_ucx_team_t {
    xccl_tl_team_t   super;
    uint16_t         ctx_id;
    uint16_t         seq_num;
    ucp_ep_h        *ucp_eps;
} xccl_ucx_team_t;

xccl_status_t xccl_ucx_team_create_post(xccl_tl_context_t *context, xccl_team_config_t *config,
                                        xccl_oob_collectives_t oob, xccl_tl_team_t **team);
xccl_status_t xccl_ucx_team_destroy(xccl_tl_team_t *team);

#endif
