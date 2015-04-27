/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_StatusVerbosity enum from HAPI_Common.h

#include "../hapi_private_nif.h"
#include <string.h>


bool
hapi_make_hapi_status_verbosity(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_StatusVerbosity* enum_result)
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
        /* hapi_statusverbosity_0 */
        case 1281355693:
        {
            *enum_result = HAPI_STATUSVERBOSITY_0;
            break;
        }

        /* hapi_statusverbosity_1 */
        case 3580236127:
        {
            *enum_result = HAPI_STATUSVERBOSITY_1;
            break;
        }

        /* hapi_statusverbosity_2 */
        case 2340815382:
        {
            *enum_result = HAPI_STATUSVERBOSITY_2;
            break;
        }

        /* hapi_statusverbosity_all */
        case 342427634:
        {
            *enum_result = HAPI_STATUSVERBOSITY_ALL;
            break;
        }

        /* hapi_statusverbosity_errors */
        case 3898403122:
        {
            *enum_result = HAPI_STATUSVERBOSITY_ERRORS;
            break;
        }

        /* hapi_statusverbosity_warnings */
        case 823904373:
        {
            *enum_result = HAPI_STATUSVERBOSITY_WARNINGS;
            break;
        }

        /* hapi_statusverbosity_messages */
        case 753691706:
        {
            *enum_result = HAPI_STATUSVERBOSITY_MESSAGES;
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
hapi_get_hapi_status_verbosity(ErlNifEnv* env, HAPI_StatusVerbosity enum_value)
{
    switch(enum_value)
    {
        case HAPI_STATUSVERBOSITY_0:
        {
            return hapi_make_atom(env, "hapi_statusverbosity_0");
        }

        case HAPI_STATUSVERBOSITY_1:
        {
            return hapi_make_atom(env, "hapi_statusverbosity_1");
        }

        case HAPI_STATUSVERBOSITY_2:
        {
            return hapi_make_atom(env, "hapi_statusverbosity_2");
        }

        default:
        {
            break;
        }
    }

    return enif_make_badarg(env);
}