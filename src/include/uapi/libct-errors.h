#ifndef __LIBCT_ERRORS_H__
#define __LIBCT_ERRORS_H__
/*
 * This file contains errors, that can be returned from various
 * library calls
 */

/* Generic */
#define LCTERR_BADCTSTATE	-2	/* Bad container state */

/* RPC-specific ones */
#define BADCTRID_ERR		-42	/* Bad container remote ID given */
#define BADCTRNAME_ERR		-43	/* Bad name on open */
#define LCTERR_RPCUNKNOWN	-44	/* Remote problem , but err is not given */

#endif /* __LIBCT_ERRORS_H__ */
