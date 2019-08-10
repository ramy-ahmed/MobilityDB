/*****************************************************************************
 *
 * IndexSpgistTempPoint.c
 *	  SP-GiST implementation of 8-dimensional oct-tree over temporal points
 *
 * Portions Copyright (c) 2019, Esteban Zimanyi, Arthur Lesuisse, 
 * 		Universite Libre de Bruxelles
 * Portions Copyright (c) 1996-2019, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *****************************************************************************/

#ifndef __INDEXSPGISTTEMPPOINT_H__
#define __INDEXSPGISTTEMPPOINT_H__

/*****************************************************************************/

extern Datum spgist_tgeogpoint_config(PG_FUNCTION_ARGS);
extern Datum spgist_tpoint_choose(PG_FUNCTION_ARGS);
extern Datum spgist_tpoint_picksplit(PG_FUNCTION_ARGS);
extern Datum spgist_tpoint_inner_consistent(PG_FUNCTION_ARGS);
extern Datum spgist_tpoint_leaf_consistent(PG_FUNCTION_ARGS);

/*****************************************************************************/

#endif
