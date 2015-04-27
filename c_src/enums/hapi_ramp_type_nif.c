/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_RampType enum from HAPI_Common.h

#include "../hapi_private_nif.h"
#include <string.h>


bool
hapi_make_hapi_ramp_type(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_RampType* enum_result)
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
        /* hapi_ramptype_invalid */
        case 1007057020:
        {
            *enum_result = HAPI_RAMPTYPE_INVALID;
            break;
        }

        /* hapi_ramptype_float */
        case 1236730525:
        {
            *enum_result = HAPI_RAMPTYPE_FLOAT;
            break;
        }

        /* hapi_ramptype_color */
        case 784329284:
        {
            *enum_result = HAPI_RAMPTYPE_COLOR;
            break;
        }

        /* hapi_ramptype_max */
        case 1883049949:
        {
            *enum_result = HAPI_RAMPTYPE_MAX;
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
hapi_get_hapi_ramp_type(ErlNifEnv* env, HAPI_RampType enum_value)
{
    switch(enum_value)
    {
        case HAPI_RAMPTYPE_INVALID:
        {
            return hapi_make_atom(env, "hapi_ramptype_invalid");
        }

        case HAPI_RAMPTYPE_FLOAT:
        {
            return hapi_make_atom(env, "hapi_ramptype_float");
        }

        case HAPI_RAMPTYPE_COLOR:
        {
            return hapi_make_atom(env, "hapi_ramptype_color");
        }

        case HAPI_RAMPTYPE_MAX:
        {
            return hapi_make_atom(env, "hapi_ramptype_max");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}
