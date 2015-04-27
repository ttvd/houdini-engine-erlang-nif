/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_VolumeInfo_Init function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"


ERL_NIF_TERM
hapi_volume_info_init_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return hapi_make_atom_ok(env);
}


ERL_NIF_TERM
hapi_volume_info_init(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_volume_info_init_schedule", 0, hapi_volume_info_init_schedule, argc, argv);
}
