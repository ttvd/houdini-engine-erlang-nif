/// @author Mykola Konyk  <mykola@konyk.org>
///
/// @copyright 2015
/// This file is autogenerated from hapi_enum_nif.c.template
/// This file corresponds to HAPI_Result enum from HAPI_Common.h

#include "hapi_enums_nif.h"
#include "hapi_private_nif.h"

#include <string.h>


bool hapi_enum_result_erl_to_c(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_Result* result)
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
        // "hapi_result_success"
        case 3713831785:
        {
            *result = HAPI_RESULT_SUCCESS;
            break;
        }

        // "hapi_result_failure"
        case 1037742049:
        {
            *result = HAPI_RESULT_FAILURE;
            break;
        }

        // "hapi_result_already_initialized"
        case 3090473558:
        {
            *result = HAPI_RESULT_ALREADY_INITIALIZED;
            break;
        }

        // "hapi_result_not_initialized"
        case 2669115710:
        {
            *result = HAPI_RESULT_NOT_INITIALIZED;
            break;
        }

        // "hapi_result_cant_loadfile"
        case 2751182470:
        {
            *result = HAPI_RESULT_CANT_LOADFILE;
            break;
        }

        // "hapi_result_parm_set_failed"
        case 1473470013:
        {
            *result = HAPI_RESULT_PARM_SET_FAILED;
            break;
        }

        // "hapi_result_invalid_argument"
        case 2141895781:
        {
            *result = HAPI_RESULT_INVALID_ARGUMENT;
            break;
        }

        // "hapi_result_cant_load_geo"
        case 2907852441:
        {
            *result = HAPI_RESULT_CANT_LOAD_GEO;
            break;
        }

        // "hapi_result_cant_generate_preset"
        case 1960848769:
        {
            *result = HAPI_RESULT_CANT_GENERATE_PRESET;
            break;
        }

        // "hapi_result_cant_load_preset"
        case 2629656986:
        {
            *result = HAPI_RESULT_CANT_LOAD_PRESET;
            break;
        }

        // "hapi_result_asset_def_already_loaded"
        case 1332688439:
        {
            *result = HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;
            break;
        }

        // "hapi_result_no_license_found"
        case 166875043:
        {
            *result = HAPI_RESULT_NO_LICENSE_FOUND;
            break;
        }

        // "hapi_result_disallowed_nc_license_found"
        case 3661265078:
        {
            *result = HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND;
            break;
        }

        // "hapi_result_disallowed_nc_asset_with_c_license"
        case 2873502490:
        {
            *result = HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE;
            break;
        }

        // "hapi_result_disallowed_nc_asset_with_lc_license"
        case 3894063770:
        {
            *result = HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE;
            break;
        }

        // "hapi_result_disallowed_lc_asset_with_c_license"
        case 2858294338:
        {
            *result = HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE;
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


ERL_NIF_TERM hapi_enum_result_c_to_erl(ErlNifEnv* env, HAPI_Result result)
{
    switch(result)
    {
        case HAPI_RESULT_SUCCESS:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_success");
        }

        case HAPI_RESULT_FAILURE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_failure");
        }

        case HAPI_RESULT_ALREADY_INITIALIZED:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_already_initialized");
        }

        case HAPI_RESULT_NOT_INITIALIZED:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_not_initialized");
        }

        case HAPI_RESULT_CANT_LOADFILE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_cant_loadfile");
        }

        case HAPI_RESULT_PARM_SET_FAILED:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_parm_set_failed");
        }

        case HAPI_RESULT_INVALID_ARGUMENT:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_invalid_argument");
        }

        case HAPI_RESULT_CANT_LOAD_GEO:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_cant_load_geo");
        }

        case HAPI_RESULT_CANT_GENERATE_PRESET:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_cant_generate_preset");
        }

        case HAPI_RESULT_CANT_LOAD_PRESET:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_cant_load_preset");
        }

        case HAPI_RESULT_ASSET_DEF_ALREADY_LOADED:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_asset_def_already_loaded");
        }

        case HAPI_RESULT_NO_LICENSE_FOUND:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_no_license_found");
        }

        case HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_disallowed_nc_license_found");
        }

        case HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_disallowed_nc_asset_with_c_license");
        }

        case HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_disallowed_nc_asset_with_lc_license");
        }

        case HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE:
        {
            return hapi_private_make_hash_tuple(env, "hapi_result_disallowed_lc_asset_with_c_license");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}
