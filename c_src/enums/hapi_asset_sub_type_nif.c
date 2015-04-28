/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_AssetSubType enum from HAPI_Common.h

#include "../hapi_private_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_asset_sub_type(ErlNifEnv* env, HAPI_AssetSubType enum_value)
{
    switch(enum_value)
    {
        case HAPI_ASSETSUBTYPE_INVALID:
        {
            return hapi_make_atom(env, "hapi_assetsubtype_invalid");
        }

        case HAPI_ASSETSUBTYPE_DEFAULT:
        {
            return hapi_make_atom(env, "hapi_assetsubtype_default");
        }

        case HAPI_ASSETSUBTYPE_CURVE:
        {
            return hapi_make_atom(env, "hapi_assetsubtype_curve");
        }

        case HAPI_ASSETSUBTYPE_INPUT:
        {
            return hapi_make_atom(env, "hapi_assetsubtype_input");
        }

        case HAPI_ASSETSUBTYPE_MAX:
        {
            return hapi_make_atom(env, "hapi_assetsubtype_max");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}


bool
hapi_get_hapi_asset_sub_type(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetSubType* enum_result)
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
        /* hapi_assetsubtype_invalid */
        case 4274947295:
        {
            *enum_result = HAPI_ASSETSUBTYPE_INVALID;
            break;
        }

        /* hapi_assetsubtype_default */
        case 3111968334:
        {
            *enum_result = HAPI_ASSETSUBTYPE_DEFAULT;
            break;
        }

        /* hapi_assetsubtype_curve */
        case 920954547:
        {
            *enum_result = HAPI_ASSETSUBTYPE_CURVE;
            break;
        }

        /* hapi_assetsubtype_input */
        case 3978905612:
        {
            *enum_result = HAPI_ASSETSUBTYPE_INPUT;
            break;
        }

        /* hapi_assetsubtype_max */
        case 1492763276:
        {
            *enum_result = HAPI_ASSETSUBTYPE_MAX;
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
