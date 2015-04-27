/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_CookOptions struct from HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_records_nif.h"
#include "../hapi_enums_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_cook_options(ErlNifEnv* env, const HAPI_CookOptions* hapi_struct)
{
    return enif_make_tuple(env, 7,
        hapi_make_atom(env, "hapi_cook_options"),
        hapi_make_atom_bool(env, (bool) hapi_struct->splitGeosByGroup),
        enif_make_int(env, hapi_struct->maxVerticesPerPrimitive),
        hapi_make_atom_bool(env, (bool) hapi_struct->refineCurveToLinear),
        enif_make_double(env, (double) hapi_struct->curveRefineLOD),
        hapi_make_atom_bool(env, (bool) hapi_struct->clearErrorsAndWarnings),
        hapi_make_atom_bool(env, (bool) hapi_struct->cookTemplatedGeos));
}


bool
hapi_get_hapi_cook_options(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_CookOptions* hapi_struct)
{
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* tuple_record = NULL;
    bool atom_name_match = false;

    bool record_split_geos_by_group = false;
    int32_t record_max_vertices_per_primitive = 0;
    bool record_refine_curve_to_linear = false;
    double record_curve_refine_lod = 0.0;
    bool record_clear_errors_and_warnings = false;
    bool record_cook_templated_geos = false;

    if(!enif_get_tuple(env, term, &tuple_size, &tuple_record) ||
        (tuple_size != 7) ||
        !hapi_check_atom(env, tuple_record[0], "hapi_cook_options", &atom_name_match) ||
        !atom_name_match ||
        !hapi_get_atom_bool(env, tuple_record[1], &record_split_geos_by_group) ||
        !enif_get_int(env, tuple_record[2], &record_max_vertices_per_primitive) ||
        !hapi_get_atom_bool(env, tuple_record[3], &record_refine_curve_to_linear) ||
        !enif_get_double(env, tuple_record[4], &record_curve_refine_lod) ||
        !hapi_get_atom_bool(env, tuple_record[5], &record_clear_errors_and_warnings) ||
        !hapi_get_atom_bool(env, tuple_record[6], &record_cook_templated_geos))
    {
        return false;
    }

    hapi_struct->splitGeosByGroup = (HAPI_Bool) record_split_geos_by_group;
    hapi_struct->maxVerticesPerPrimitive = record_max_vertices_per_primitive;
    hapi_struct->refineCurveToLinear = (HAPI_Bool) record_refine_curve_to_linear;
    hapi_struct->curveRefineLOD = (float) record_curve_refine_lod;
    hapi_struct->clearErrorsAndWarnings = (HAPI_Bool) record_clear_errors_and_warnings;
    hapi_struct->cookTemplatedGeos = (HAPI_Bool) record_cook_templated_geos;

    return true;
}
