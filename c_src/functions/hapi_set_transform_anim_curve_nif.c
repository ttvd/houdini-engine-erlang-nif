/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_function_nif.c.template
/// This file corresponds to HAPI_SetTransformAnimCurve function from HAPI.h or HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_enums_nif.h"
#include "../hapi_records_nif.h"


ERL_NIF_TERM
hapi_set_transform_anim_curve_schedule(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    /* Input parameters. */
    HAPI_NodeId param_node_id = -1;
    HAPI_TransformComponent param_trans_comp;
    HAPI_Keyframe param_curve_keyframes;
    int32_t param_keyframe_count = 0;

    //return hapi_make_atom_ok(env);
    return enif_make_badarg(env);
}


ERL_NIF_TERM
hapi_set_transform_anim_curve(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_schedule_nif(env, "hapi_set_transform_anim_curve_schedule", 0, hapi_set_transform_anim_curve_schedule, argc, argv);
}
