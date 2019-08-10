/*****************************************************************************
 *
 * TempDistance.h
 *	  Temporal distance for temporal points.
 *
 * Portions Copyright (c) 2019, Esteban Zimanyi, Arthur Lesuisse, 
 * 		Universite Libre de Bruxelles
 * Portions Copyright (c) 1996-2019, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *****************************************************************************/

#ifndef __TEMPDISTANCE_H__
#define __TEMPDISTANCE_H__

/*****************************************************************************/

extern Datum geom_distance2d(Datum geom1, Datum geom2);
extern Datum geom_distance3d(Datum geom1, Datum geom2);
extern Datum geog_distance(Datum geog1, Datum geog2);

extern Datum distance_geo_tpoint(PG_FUNCTION_ARGS);
extern Datum distance_tpoint_geo(PG_FUNCTION_ARGS);
extern Datum distance_tpoint_tpoint(PG_FUNCTION_ARGS);

extern Temporal *distance_tpoint_tpoint_internal(Temporal *temp1, Temporal *temp2);

/*****************************************************************************/

#endif
