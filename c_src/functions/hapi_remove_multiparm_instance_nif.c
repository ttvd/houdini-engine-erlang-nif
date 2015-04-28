/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_RemoveMultiparmInstance function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_enums_nif.h"
#include "../hapi_records_nif.h"


ERL_NIF_TERM
hapi_remove_multiparm_instance_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    /* Input parameters. */
    HAPI_NodeId param_node_id = -1;
    HAPI_ParmId param_parm_id = -1;
    int32_t param_instance_position = 0;

    //return hapi_make_atom_ok(env);
    return enif_make_badarg(env);
}


ERL_NIF_TERM
hapi_remove_multiparm_instance(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_remove_multiparm_instance_schedule", 0, hapi_remove_multiparm_instance_schedule, argc, argv);
}
