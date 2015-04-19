/// @author Mykola Konyk  <mykola@konyk.org>
///
/// @copyright 2015
/// This file is autogenerated from hapi_enum_nif.c.template
/// This file corresponds to HAPI_GroupType enum from HAPI_Common.h

#include "hapi_enums_nif.h"
#include "hapi_private_nif.h"

#include <string.h>


bool hapi_enum_group_type_erl_to_c(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_GroupType* group_type)
{
    bool nif_success = true;

    uint32_t atom_hash = 0;
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* hash_tuple = NULL;

    char* atom_value = NULL;

    if(enif_is_tuple(env, term) && enif_get_tuple(env, term, &tuple_size, &hash_tuple) && (2 == tuple_size))
    {
        if(!enif_get_uint(env, hash_tuple[1], &atom_hash))
        {
            nif_success = false;
            goto label_cleanup;
        }
    }
    else if(enif_is_atom(env, term))
    {
        uint32_t atom_len = 0;

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
    }
    else if(!enif_get_uint(env, term, &atom_hash))
    {
        nif_success = false;
        goto label_cleanup;
    }

    switch(atom_hash)
    {
        // "hapi_grouptype_invalid"
        case 1807777027:
        {
            *group_type = HAPI_GROUPTYPE_INVALID;
            break;
        }

        // "hapi_grouptype_point"
        case 3354691949:
        {
            *group_type = HAPI_GROUPTYPE_POINT;
            break;
        }

        // "hapi_grouptype_prim"
        case 2860112191:
        {
            *group_type = HAPI_GROUPTYPE_PRIM;
            break;
        }

        // "hapi_grouptype_max"
        case 2983497873:
        {
            *group_type = HAPI_GROUPTYPE_MAX;
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


ERL_NIF_TERM hapi_enum_group_type_c_to_erl(ErlNifEnv* env, HAPI_GroupType group_type)
{
    switch(group_type)
    {
        /*
        case HAPI_GROUPTYPE_INVALID:
        {
            return hapi_private_make_hash_tuple(env, "hapi_grouptype_invalid");
        }
        */

        case HAPI_GROUPTYPE_POINT:
        {
            return hapi_private_make_hash_tuple(env, "hapi_grouptype_point");
        }

        case HAPI_GROUPTYPE_PRIM:
        {
            return hapi_private_make_hash_tuple(env, "hapi_grouptype_prim");
        }

        case HAPI_GROUPTYPE_MAX:
        {
            return hapi_private_make_hash_tuple(env, "hapi_grouptype_max");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}
