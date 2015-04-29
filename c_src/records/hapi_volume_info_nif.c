/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_VolumeInfo struct from HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_records_nif.h"
#include "../hapi_enums_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_volume_info(ErlNifEnv* env, const HAPI_VolumeInfo* hapi_struct)
{
    return enif_make_tuple(env, 15,
        hapi_make_atom(env, "hapi_volume_info"),
        hapi_make_int(env, (int32_t) hapi_struct->nameSH),
        hapi_make_int(env, hapi_struct->xLength),
        hapi_make_int(env, hapi_struct->yLength),
        hapi_make_int(env, hapi_struct->zLength),
        hapi_make_int(env, hapi_struct->minX),
        hapi_make_int(env, hapi_struct->minY),
        hapi_make_int(env, hapi_struct->minZ),
        hapi_make_int(env, hapi_struct->tupleSize),
        hapi_make_hapi_storage_type(env, hapi_struct->storage),
        hapi_make_int(env, hapi_struct->tileSize),
        hapi_make_hapi_transform(env, &hapi_struct->transform),
        hapi_make_bool(env, (bool) hapi_struct->hasTaper),
        hapi_make_float(env, (double) hapi_struct->xTaper),
        hapi_make_float(env, (double) hapi_struct->yTaper));
}


bool
hapi_get_hapi_volume_info(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_VolumeInfo* hapi_struct)
{
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* tuple_record = NULL;
    bool atom_name_match = false;

    int32_t record_name_sh = 0;
    int32_t record_x_length = 0;
    int32_t record_y_length = 0;
    int32_t record_z_length = 0;
    int32_t record_min_x = 0;
    int32_t record_min_y = 0;
    int32_t record_min_z = 0;
    int32_t record_tuple_size = 0;
    HAPI_StorageType record_storage;
    int32_t record_tile_size = 0;
    HAPI_Transform record_transform;
    bool record_has_taper = false;
    float record_x_taper = 0.0f;
    float record_y_taper = 0.0f;

    if(!enif_get_tuple(env, term, &tuple_size, &tuple_record) ||
        (tuple_size != 15) ||
        !hapi_check_atom(env, tuple_record[0], "hapi_volume_info", &atom_name_match) ||
        !atom_name_match ||
        !hapi_get_int(env, tuple_record[1], &record_name_sh) ||
        !hapi_get_int(env, tuple_record[2], &record_x_length) ||
        !hapi_get_int(env, tuple_record[3], &record_y_length) ||
        !hapi_get_int(env, tuple_record[4], &record_z_length) ||
        !hapi_get_int(env, tuple_record[5], &record_min_x) ||
        !hapi_get_int(env, tuple_record[6], &record_min_y) ||
        !hapi_get_int(env, tuple_record[7], &record_min_z) ||
        !hapi_get_int(env, tuple_record[8], &record_tuple_size) ||
        !hapi_get_hapi_storage_type(env, tuple_record[9], &record_storage) ||
        !hapi_get_int(env, tuple_record[10], &record_tile_size) ||
        !hapi_get_hapi_transform(env, tuple_record[11], &record_transform) ||
        !hapi_get_bool(env, tuple_record[12], &record_has_taper) ||
        !hapi_get_float(env, tuple_record[13], &record_x_taper) ||
        !hapi_get_float(env, tuple_record[14], &record_y_taper))
    {
        return false;
    }

    hapi_struct->nameSH = (HAPI_StringHandle) record_name_sh;
    hapi_struct->xLength = record_x_length;
    hapi_struct->yLength = record_y_length;
    hapi_struct->zLength = record_z_length;
    hapi_struct->minX = record_min_x;
    hapi_struct->minY = record_min_y;
    hapi_struct->minZ = record_min_z;
    hapi_struct->tupleSize = record_tuple_size;
    hapi_struct->storage = record_storage;
    hapi_struct->tileSize = record_tile_size;
    memcpy(&hapi_struct->transform, &record_transform, sizeof(HAPI_Transform));
    hapi_struct->hasTaper = (HAPI_Bool) record_has_taper;
    hapi_struct->xTaper = (float) record_x_taper;
    hapi_struct->yTaper = (float) record_y_taper;

    return true;
}


ERL_NIF_TERM
hapi_make_hapi_volume_info_list(ErlNifEnv* env, const HAPI_VolumeInfo* hapi_structs, int32_t list_size)
{
    ERL_NIF_TERM list = enif_make_list(env, 0);

    for(int32_t idx = list_size - 1; idx >= 0; idx--)
    {
        const HAPI_VolumeInfo* hapi_struct = hapi_structs + idx;
        list = enif_make_list_cell(env, hapi_make_hapi_volume_info(env, hapi_struct), list);
    }

    return list;
}


bool
hapi_get_hapi_volume_info_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_VolumeInfo* hapi_structs, int32_t list_size)
{
    uint32_t read_list_size = 0;
    ERL_NIF_TERM head, tail;

    if(enif_get_list_length(env, term, &read_list_size) && (list_size == read_list_size))
    {
        ERL_NIF_TERM list = term;
        int32_t index = 0;

        while(enif_get_list_cell(env, list, &head, &tail))
        {
            HAPI_VolumeInfo* hapi_struct = hapi_structs + index;

            if(!hapi_get_hapi_volume_info(env, head, hapi_struct))
            {
                return false;
            }

            index++;
            list = tail;
        }

        return true;
    }

    return false;
}
