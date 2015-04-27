/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_TransformComponent enum from HAPI_Common.h

#include "../hapi_private_nif.h"
#include <string.h>


bool
hapi_make_hapi_transform_component(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_TransformComponent* enum_result)
{
    bool nif_success = true;
    uint32_t atom_len = 0u;
    uint32_t atom_hash = 0u;
    char* atom_value = NULL;

    if(!enif_get_atom_length(env, term, &atom_len, ERL_NIF_LATIN1))
    {
        nif_success = false;
        goto label_cleanup;
    }

    atom_value = malloc(atom_len + 1);
    memset(atom_value, 0, atom_len + 1);

    if(!enif_get_atom(env, term, atom_value, atom_len + 1, ERL_NIF_LATIN1))
    {
        nif_success = false;
        goto label_cleanup;
    }

    atom_hash = XXH32(atom_value, strlen(atom_value), 0);

    switch(atom_hash)
    {
        /* hapi_transform_tx */
        case 2763045797:
        {
            *enum_result = HAPI_TRANSFORM_TX;
            break;
        }

        /* hapi_transform_ty */
        case 1138742908:
        {
            *enum_result = HAPI_TRANSFORM_TY;
            break;
        }

        /* hapi_transform_tz */
        case 1366188897:
        {
            *enum_result = HAPI_TRANSFORM_TZ;
            break;
        }

        /* hapi_transform_rx */
        case 1796486426:
        {
            *enum_result = HAPI_TRANSFORM_RX;
            break;
        }

        /* hapi_transform_ry */
        case 41409567:
        {
            *enum_result = HAPI_TRANSFORM_RY;
            break;
        }

        /* hapi_transform_rz */
        case 2024189270:
        {
            *enum_result = HAPI_TRANSFORM_RZ;
            break;
        }

        /* hapi_transform_qx */
        case 3784000339:
        {
            *enum_result = HAPI_TRANSFORM_QX;
            break;
        }

        /* hapi_transform_qy */
        case 2697215009:
        {
            *enum_result = HAPI_TRANSFORM_QY;
            break;
        }

        /* hapi_transform_qz */
        case 1869023627:
        {
            *enum_result = HAPI_TRANSFORM_QZ;
            break;
        }

        /* hapi_transform_qw */
        case 1077003245:
        {
            *enum_result = HAPI_TRANSFORM_QW;
            break;
        }

        /* hapi_transform_sx */
        case 3242450707:
        {
            *enum_result = HAPI_TRANSFORM_SX;
            break;
        }

        /* hapi_transform_sy */
        case 2683523763:
        {
            *enum_result = HAPI_TRANSFORM_SY;
            break;
        }

        /* hapi_transform_sz */
        case 1336671716:
        {
            *enum_result = HAPI_TRANSFORM_SZ;
            break;
        }

        default:
        {
            nif_success = false;
            break;
        }
    }

label_cleanup:

    if(atom_value)
    {
        free(atom_value);
    }

    return nif_success;
}


ERL_NIF_TERM
hapi_get_hapi_transform_component(ErlNifEnv* env, HAPI_TransformComponent enum_value)
{
    switch(enum_value)
    {
        case HAPI_TRANSFORM_TX:
        {
            return hapi_make_atom(env, "hapi_transform_tx");
        }

        case HAPI_TRANSFORM_TY:
        {
            return hapi_make_atom(env, "hapi_transform_ty");
        }

        case HAPI_TRANSFORM_TZ:
        {
            return hapi_make_atom(env, "hapi_transform_tz");
        }

        case HAPI_TRANSFORM_RX:
        {
            return hapi_make_atom(env, "hapi_transform_rx");
        }

        case HAPI_TRANSFORM_RY:
        {
            return hapi_make_atom(env, "hapi_transform_ry");
        }

        case HAPI_TRANSFORM_RZ:
        {
            return hapi_make_atom(env, "hapi_transform_rz");
        }

        case HAPI_TRANSFORM_QX:
        {
            return hapi_make_atom(env, "hapi_transform_qx");
        }

        case HAPI_TRANSFORM_QY:
        {
            return hapi_make_atom(env, "hapi_transform_qy");
        }

        case HAPI_TRANSFORM_QZ:
        {
            return hapi_make_atom(env, "hapi_transform_qz");
        }

        case HAPI_TRANSFORM_QW:
        {
            return hapi_make_atom(env, "hapi_transform_qw");
        }

        case HAPI_TRANSFORM_SX:
        {
            return hapi_make_atom(env, "hapi_transform_sx");
        }

        case HAPI_TRANSFORM_SY:
        {
            return hapi_make_atom(env, "hapi_transform_sy");
        }

        case HAPI_TRANSFORM_SZ:
        {
            return hapi_make_atom(env, "hapi_transform_sz");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}
