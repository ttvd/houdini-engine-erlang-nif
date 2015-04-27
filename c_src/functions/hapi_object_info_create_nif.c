/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_ObjectInfo_Create function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"


ERL_NIF_TERM
hapi_object_info_create_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return hapi_make_atom_ok(env);
}


ERL_NIF_TERM
hapi_object_info_create(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_object_info_create_schedule", 0, hapi_object_info_create_schedule, argc, argv);
}
