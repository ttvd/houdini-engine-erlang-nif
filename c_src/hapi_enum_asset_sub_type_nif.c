/// @author Mykola Konyk  <mykola@konyk.org>
///
/// @copyright 2015
/// This file is autogenerated from hapi_enum_nif.c.template
/// This file corresponds to HAPI_AssetSubType enum from HAPI_Common.h

#include "hapi_enums_nif.h"
#include "hapi_private_nif.h"

#include <string.h>


bool hapi_enum_asset_sub_type_erl_to_c(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetSubType* asset_sub_type)
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
        // "hapi_assetsubtype_invalid"
        case 4274947295:
        {
            *asset_sub_type = HAPI_ASSETSUBTYPE_INVALID;
            break;
        }

        // "hapi_assetsubtype_default"
        case 3111968334:
        {
            *asset_sub_type = HAPI_ASSETSUBTYPE_DEFAULT;
            break;
        }

        // "hapi_assetsubtype_curve"
        case 920954547:
        {
            *asset_sub_type = HAPI_ASSETSUBTYPE_CURVE;
            break;
        }

        // "hapi_assetsubtype_input"
        case 3978905612:
        {
            *asset_sub_type = HAPI_ASSETSUBTYPE_INPUT;
            break;
        }

        // "hapi_assetsubtype_max"
        case 1492763276:
        {
            *asset_sub_type = HAPI_ASSETSUBTYPE_MAX;
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


ERL_NIF_TERM hapi_enum_asset_sub_type_c_to_erl(ErlNifEnv* env, HAPI_AssetSubType asset_sub_type)
{
    switch(asset_sub_type)
    {
        /*
        case HAPI_ASSETSUBTYPE_INVALID:
        {
            return hapi_private_make_hash_tuple(env, "hapi_assetsubtype_invalid");
        }
        */

        case HAPI_ASSETSUBTYPE_DEFAULT:
        {
            return hapi_private_make_hash_tuple(env, "hapi_assetsubtype_default");
        }

        case HAPI_ASSETSUBTYPE_CURVE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_assetsubtype_curve");
        }

        case HAPI_ASSETSUBTYPE_INPUT:
        {
            return hapi_private_make_hash_tuple(env, "hapi_assetsubtype_input");
        }

        case HAPI_ASSETSUBTYPE_MAX:
        {
            return hapi_private_make_hash_tuple(env, "hapi_assetsubtype_max");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}
