/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_Permissions enum from HAPI_Common.h

#include "../hapi_private_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_permissions(ErlNifEnv* env, HAPI_Permissions enum_value)
{
    switch(enum_value)
    {
        case HAPI_PERMISSIONS_NON_APPLICABLE:
        {
            return hapi_make_atom(env, "hapi_permissions_non_applicable");
        }

        case HAPI_PERMISSIONS_READ_WRITE:
        {
            return hapi_make_atom(env, "hapi_permissions_read_write");
        }

        case HAPI_PERMISSIONS_READ_ONLY:
        {
            return hapi_make_atom(env, "hapi_permissions_read_only");
        }

        case HAPI_PERMISSIONS_WRITE_ONLY:
        {
            return hapi_make_atom(env, "hapi_permissions_write_only");
        }

        case HAPI_PERMISSIONS_MAX:
        {
            return hapi_make_atom(env, "hapi_permissions_max");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}


bool
hapi_get_hapi_permissions(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_Permissions* enum_result)
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
        /* hapi_permissions_non_applicable */
        case 2395404179:
        {
            *enum_result = HAPI_PERMISSIONS_NON_APPLICABLE;
            break;
        }

        /* hapi_permissions_read_write */
        case 3046338534:
        {
            *enum_result = HAPI_PERMISSIONS_READ_WRITE;
            break;
        }

        /* hapi_permissions_read_only */
        case 3590233932:
        {
            *enum_result = HAPI_PERMISSIONS_READ_ONLY;
            break;
        }

        /* hapi_permissions_write_only */
        case 256108734:
        {
            *enum_result = HAPI_PERMISSIONS_WRITE_ONLY;
            break;
        }

        /* hapi_permissions_max */
        case 3126986835:
        {
            *enum_result = HAPI_PERMISSIONS_MAX;
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
