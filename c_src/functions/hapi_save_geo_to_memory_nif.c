/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_SaveGeoToMemory function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"


ERL_NIF_TERM
hapi_save_geo_to_memory_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return hapi_make_atom_ok(env);
}


ERL_NIF_TERM
hapi_save_geo_to_memory(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_save_geo_to_memory_schedule", 0, hapi_save_geo_to_memory_schedule, argc, argv);
}
