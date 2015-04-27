/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_CurveInfo struct from HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_records_nif.h"
#include "../hapi_enums_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_curve_info(ErlNifEnv* env, const HAPI_CurveInfo* hapi_struct)
{
    return enif_make_tuple(env, 9,
        hapi_make_atom(env, "hapi_curve_info"),
        hapi_make_hapi_curve_type(env, hapi_struct->curveType),
        enif_make_int(env, hapi_struct->curveCount),
        enif_make_int(env, hapi_struct->vertexCount),
        enif_make_int(env, hapi_struct->knotCount),
        hapi_make_atom_bool(env, (bool) hapi_struct->isPeriodic),
        hapi_make_atom_bool(env, (bool) hapi_struct->isRational),
        enif_make_int(env, hapi_struct->order),
        hapi_make_atom_bool(env, (bool) hapi_struct->hasKnots));
}


bool
hapi_get_hapi_curve_info(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_CurveInfo* hapi_struct)
{
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* tuple_record = NULL;
    bool atom_name_match = false;

    HAPI_CurveType record_curve_type;
    int32_t record_curve_count = 0;
    int32_t record_vertex_count = 0;
    int32_t record_knot_count = 0;
    bool record_is_periodic = false;
    bool record_is_rational = false;
    int32_t record_order = 0;
    bool record_has_knots = false;

    if(!enif_get_tuple(env, term, &tuple_size, &tuple_record) ||
        (tuple_size != 9) ||
        !hapi_check_atom(env, tuple_record[0], "hapi_curve_info", &atom_name_match) ||
        !atom_name_match ||
        !hapi_get_hapi_curve_type(env, tuple_record[1], &record_curve_type) ||
        !enif_get_int(env, tuple_record[2], &record_curve_count) ||
        !enif_get_int(env, tuple_record[3], &record_vertex_count) ||
        !enif_get_int(env, tuple_record[4], &record_knot_count) ||
        !hapi_get_atom_bool(env, tuple_record[5], &record_is_periodic) ||
        !hapi_get_atom_bool(env, tuple_record[6], &record_is_rational) ||
        !enif_get_int(env, tuple_record[7], &record_order) ||
        !hapi_get_atom_bool(env, tuple_record[8], &record_has_knots))
    {
        return false;
    }

    hapi_struct->curveType = record_curve_type;
    hapi_struct->curveCount = record_curve_count;
    hapi_struct->vertexCount = record_vertex_count;
    hapi_struct->knotCount = record_knot_count;
    hapi_struct->isPeriodic = (HAPI_Bool) record_is_periodic;
    hapi_struct->isRational = (HAPI_Bool) record_is_rational;
    hapi_struct->order = record_order;
    hapi_struct->hasKnots = (HAPI_Bool) record_has_knots;

    return true;
}
