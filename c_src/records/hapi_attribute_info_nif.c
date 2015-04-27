/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_AttributeInfo struct from HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_records_nif.h"
#include "../hapi_enums_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_attribute_info(ErlNifEnv* env, const HAPI_AttributeInfo* hapi_struct)
{
    return enif_make_tuple(env, 7,
        hapi_make_atom(env, "hapi_attribute_info"),
        hapi_make_atom_bool(env, (bool) hapi_struct->exists),
        hapi_make_hapi_attribute_owner(env, hapi_struct->owner),
        hapi_make_hapi_storage_type(env, hapi_struct->storage),
        hapi_make_hapi_attribute_owner(env, hapi_struct->originalOwner),
        enif_make_int(env, hapi_struct->count),
        enif_make_int(env, hapi_struct->tupleSize));
}


bool
hapi_get_hapi_attribute_info(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AttributeInfo* hapi_struct)
{
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* tuple_record = NULL;
    bool atom_name_match = false;

    bool record_exists = false;
    HAPI_AttributeOwner record_owner;
    HAPI_StorageType record_storage;
    HAPI_AttributeOwner record_original_owner;
    int32_t record_count = 0;
    int32_t record_tuple_size = 0;

    if(!enif_get_tuple(env, term, &tuple_size, &tuple_record) ||
        (tuple_size != 7) ||
        !hapi_check_atom(env, tuple_record[0], "hapi_attribute_info", &atom_name_match) ||
        !atom_name_match ||
        !hapi_get_atom_bool(env, tuple_record[1], &record_exists) ||
        !hapi_get_hapi_attribute_owner(env, tuple_record[2], &record_owner) ||
        !hapi_get_hapi_storage_type(env, tuple_record[3], &record_storage) ||
        !hapi_get_hapi_attribute_owner(env, tuple_record[4], &record_original_owner) ||
        !enif_get_int(env, tuple_record[5], &record_count) ||
        !enif_get_int(env, tuple_record[6], &record_tuple_size))
    {
        return false;
    }

    hapi_struct->exists = (HAPI_Bool) record_exists;
    hapi_struct->owner = record_owner;
    hapi_struct->storage = record_storage;
    hapi_struct->originalOwner = record_original_owner;
    hapi_struct->count = record_count;
    hapi_struct->tupleSize = record_tuple_size;

    return true;
}