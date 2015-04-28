/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_GetInstanceTransforms function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_enums_nif.h"
#include "../hapi_records_nif.h"


ERL_NIF_TERM
hapi_get_instance_transforms_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    /* Input parameters. */
    HAPI_AssetId param_asset_id = -1;
    HAPI_ObjectId param_object_id = -1;
    HAPI_GeoId param_geo_id = -1;
    HAPI_RSTOrder param_rst_order;
    int32_t param_start = 0;
    int32_t param_length = 0;

    //return hapi_make_atom_ok(env);
    return enif_make_badarg(env);
}


ERL_NIF_TERM
hapi_get_instance_transforms(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_get_instance_transforms_schedule", 0, hapi_get_instance_transforms_schedule, argc, argv);
}
