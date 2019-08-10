/*****************************************************************************
 *
 * TempPointAnalyze.c
 *	  Functions for gathering statistics from temporal point columns
 *
 * Portions Copyright (c) 1996-2019, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 * * IDENTIFICATION
 *	include/TemporalAnalyze.c
 *
 *****************************************************************************/

#include <postgres.h>
#include <catalog/pg_type.h>
#include <utils/rangetypes.h>

#include "TemporalTypes.h"
#include "TemporalAnalyze.h"
#include "TempPointAnalyze.h"

/*****************************************************************************/


PG_FUNCTION_INFO_V1(tpoint_analyze);

PGDLLEXPORT Datum
tpoint_analyze(PG_FUNCTION_ARGS)
{
	PG_RETURN_BOOL(true);
}

/*****************************************************************************/
