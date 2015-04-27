/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_enum_nif.c.template
/// This file corresponds to HAPI_AssetInfo struct from HAPI_Common.h

#include "../hapi_private_nif.h"
#include "../hapi_records_nif.h"
#include "../hapi_enums_nif.h"
#include <string.h>


ERL_NIF_TERM
hapi_make_hapi_asset_info(ErlNifEnv* env, const HAPI_AssetInfo* hapi_struct)
{
    return enif_make_tuple(env, 20,
        hapi_make_atom(env, "hapi_asset_info"),
        enif_make_int(env, (int32_t) hapi_struct->id),
        hapi_make_hapi_asset_type(env, hapi_struct->type),
        hapi_make_hapi_asset_sub_type(env, hapi_struct->subType),
        enif_make_int(env, hapi_struct->validationId),
        enif_make_int(env, (int32_t) hapi_struct->nodeId),
        enif_make_int(env, (int32_t) hapi_struct->objectNodeId),
        hapi_make_atom_bool(env, (bool) hapi_struct->hasEverCooked),
        enif_make_int(env, (int32_t) hapi_struct->nameSH),
        enif_make_int(env, (int32_t) hapi_struct->labelSH),
        enif_make_int(env, (int32_t) hapi_struct->filePathSH),
        enif_make_int(env, (int32_t) hapi_struct->versionSH),
        enif_make_int(env, (int32_t) hapi_struct->fullOpNameSH),
        enif_make_int(env, (int32_t) hapi_struct->helpTextSH),
        enif_make_int(env, hapi_struct->objectCount),
        enif_make_int(env, hapi_struct->handleCount),
        enif_make_int(env, hapi_struct->transformInputCount),
        enif_make_int(env, hapi_struct->geoInputCount),
        hapi_make_atom_bool(env, (bool) hapi_struct->haveObjectsChanged),
        hapi_make_atom_bool(env, (bool) hapi_struct->haveMaterialsChanged));
}


bool
hapi_get_hapi_asset_info(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetInfo* hapi_struct)
{
    int32_t tuple_size = 0;
    const ERL_NIF_TERM* tuple_record = NULL;
    bool atom_name_match = false;

    int32_t record_id = 0;
    HAPI_AssetType record_type;
    HAPI_AssetSubType record_sub_type;
    int32_t record_validation_id = 0;
    int32_t record_node_id = 0;
    int32_t record_object_node_id = 0;
    bool record_has_ever_cooked = false;
    int32_t record_name_sh = 0;
    int32_t record_label_sh = 0;
    int32_t record_file_path_sh = 0;
    int32_t record_version_sh = 0;
    int32_t record_full_op_name_sh = 0;
    int32_t record_help_text_sh = 0;
    int32_t record_object_count = 0;
    int32_t record_handle_count = 0;
    int32_t record_transform_input_count = 0;
    int32_t record_geo_input_count = 0;
    bool record_have_objects_changed = false;
    bool record_have_materials_changed = false;

    if(!enif_get_tuple(env, term, &tuple_size, &tuple_record) ||
        (tuple_size != 20) ||
        !hapi_check_atom(env, tuple_record[0], "hapi_asset_info", &atom_name_match) ||
        !atom_name_match ||
        !enif_get_int(env, tuple_record[1], &record_id) ||
        !hapi_get_hapi_asset_type(env, tuple_record[2], &record_type) ||
        !hapi_get_hapi_asset_sub_type(env, tuple_record[3], &record_sub_type) ||
        !enif_get_int(env, tuple_record[4], &record_validation_id) ||
        !enif_get_int(env, tuple_record[5], &record_node_id) ||
        !enif_get_int(env, tuple_record[6], &record_object_node_id) ||
        !hapi_get_atom_bool(env, tuple_record[7], &record_has_ever_cooked) ||
        !enif_get_int(env, tuple_record[8], &record_name_sh) ||
        !enif_get_int(env, tuple_record[9], &record_label_sh) ||
        !enif_get_int(env, tuple_record[10], &record_file_path_sh) ||
        !enif_get_int(env, tuple_record[11], &record_version_sh) ||
        !enif_get_int(env, tuple_record[12], &record_full_op_name_sh) ||
        !enif_get_int(env, tuple_record[13], &record_help_text_sh) ||
        !enif_get_int(env, tuple_record[14], &record_object_count) ||
        !enif_get_int(env, tuple_record[15], &record_handle_count) ||
        !enif_get_int(env, tuple_record[16], &record_transform_input_count) ||
        !enif_get_int(env, tuple_record[17], &record_geo_input_count) ||
        !hapi_get_atom_bool(env, tuple_record[18], &record_have_objects_changed) ||
        !hapi_get_atom_bool(env, tuple_record[19], &record_have_materials_changed))
    {
        return false;
    }

    hapi_struct->id = (HAPI_AssetId) record_id;
    hapi_struct->type = record_type;
    hapi_struct->subType = record_sub_type;
    hapi_struct->validationId = record_validation_id;
    hapi_struct->nodeId = (HAPI_NodeId) record_node_id;
    hapi_struct->objectNodeId = (HAPI_NodeId) record_object_node_id;
    hapi_struct->hasEverCooked = (HAPI_Bool) record_has_ever_cooked;
    hapi_struct->nameSH = (HAPI_StringHandle) record_name_sh;
    hapi_struct->labelSH = (HAPI_StringHandle) record_label_sh;
    hapi_struct->filePathSH = (HAPI_StringHandle) record_file_path_sh;
    hapi_struct->versionSH = (HAPI_StringHandle) record_version_sh;
    hapi_struct->fullOpNameSH = (HAPI_StringHandle) record_full_op_name_sh;
    hapi_struct->helpTextSH = (HAPI_StringHandle) record_help_text_sh;
    hapi_struct->objectCount = record_object_count;
    hapi_struct->handleCount = record_handle_count;
    hapi_struct->transformInputCount = record_transform_input_count;
    hapi_struct->geoInputCount = record_geo_input_count;
    hapi_struct->haveObjectsChanged = (HAPI_Bool) record_have_objects_changed;
    hapi_struct->haveMaterialsChanged = (HAPI_Bool) record_have_materials_changed;

    return true;
}
