/// @author Mykola Konyk <mykola@konyk.org>
///
/// @copyright 2015
/// @license MS-RL
/// This file is autogenerated from util/hapi_types_nif.h.template

#pragma once

#if !defined(HAPI_TYPES_NIF_H)
#define HAPI_TYPES_NIF_H

#include "erl_nif.h"
#include "HAPI.h"


/* Converting HAPI_ObjectId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_object_id(ErlNifEnv* env, HAPI_ObjectId hapi_type);

/* Converting HAPI_ObjectId from erl to c. */
bool hapi_priv_get_hapi_object_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_ObjectId* hapi_type);

/* Conversion of array of HAPI_ObjectId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_object_id_list(ErlNifEnv* env, const HAPI_ObjectId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_ObjectId objects from erl to c. */
bool hapi_priv_get_hapi_object_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_ObjectId* hapi_types, uint32_t list_size);

/* Converting HAPI_ParmId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_parm_id(ErlNifEnv* env, HAPI_ParmId hapi_type);

/* Converting HAPI_ParmId from erl to c. */
bool hapi_priv_get_hapi_parm_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_ParmId* hapi_type);

/* Conversion of array of HAPI_ParmId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_parm_id_list(ErlNifEnv* env, const HAPI_ParmId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_ParmId objects from erl to c. */
bool hapi_priv_get_hapi_parm_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_ParmId* hapi_types, uint32_t list_size);

/* Converting HAPI_AssetLibraryId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_asset_library_id(ErlNifEnv* env, HAPI_AssetLibraryId hapi_type);

/* Converting HAPI_AssetLibraryId from erl to c. */
bool hapi_priv_get_hapi_asset_library_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetLibraryId* hapi_type);

/* Conversion of array of HAPI_AssetLibraryId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_asset_library_id_list(ErlNifEnv* env, const HAPI_AssetLibraryId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_AssetLibraryId objects from erl to c. */
bool hapi_priv_get_hapi_asset_library_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetLibraryId* hapi_types, uint32_t list_size);

/* Converting HAPI_Bool from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_bool(ErlNifEnv* env, HAPI_Bool hapi_type);

/* Converting HAPI_Bool from erl to c. */
bool hapi_priv_get_hapi_bool(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_Bool* hapi_type);

/* Conversion of array of HAPI_Bool objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_bool_list(ErlNifEnv* env, const HAPI_Bool* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_Bool objects from erl to c. */
bool hapi_priv_get_hapi_bool_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_Bool* hapi_types, uint32_t list_size);

/* Converting HAPI_NodeId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_node_id(ErlNifEnv* env, HAPI_NodeId hapi_type);

/* Converting HAPI_NodeId from erl to c. */
bool hapi_priv_get_hapi_node_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_NodeId* hapi_type);

/* Conversion of array of HAPI_NodeId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_node_id_list(ErlNifEnv* env, const HAPI_NodeId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_NodeId objects from erl to c. */
bool hapi_priv_get_hapi_node_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_NodeId* hapi_types, uint32_t list_size);

/* Converting HAPI_GeoId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_geo_id(ErlNifEnv* env, HAPI_GeoId hapi_type);

/* Converting HAPI_GeoId from erl to c. */
bool hapi_priv_get_hapi_geo_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_GeoId* hapi_type);

/* Conversion of array of HAPI_GeoId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_geo_id_list(ErlNifEnv* env, const HAPI_GeoId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_GeoId objects from erl to c. */
bool hapi_priv_get_hapi_geo_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_GeoId* hapi_types, uint32_t list_size);

/* Converting HAPI_StringHandle from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_string_handle(ErlNifEnv* env, HAPI_StringHandle hapi_type);

/* Converting HAPI_StringHandle from erl to c. */
bool hapi_priv_get_hapi_string_handle(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_StringHandle* hapi_type);

/* Conversion of array of HAPI_StringHandle objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_string_handle_list(ErlNifEnv* env, const HAPI_StringHandle* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_StringHandle objects from erl to c. */
bool hapi_priv_get_hapi_string_handle_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_StringHandle* hapi_types, uint32_t list_size);

/* Converting HAPI_AssetId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_asset_id(ErlNifEnv* env, HAPI_AssetId hapi_type);

/* Converting HAPI_AssetId from erl to c. */
bool hapi_priv_get_hapi_asset_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetId* hapi_type);

/* Conversion of array of HAPI_AssetId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_asset_id_list(ErlNifEnv* env, const HAPI_AssetId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_AssetId objects from erl to c. */
bool hapi_priv_get_hapi_asset_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_AssetId* hapi_types, uint32_t list_size);

/* Converting HAPI_PartId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_part_id(ErlNifEnv* env, HAPI_PartId hapi_type);

/* Converting HAPI_PartId from erl to c. */
bool hapi_priv_get_hapi_part_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_PartId* hapi_type);

/* Conversion of array of HAPI_PartId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_part_id_list(ErlNifEnv* env, const HAPI_PartId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_PartId objects from erl to c. */
bool hapi_priv_get_hapi_part_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_PartId* hapi_types, uint32_t list_size);

/* Converting HAPI_MaterialId from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_material_id(ErlNifEnv* env, HAPI_MaterialId hapi_type);

/* Converting HAPI_MaterialId from erl to c. */
bool hapi_priv_get_hapi_material_id(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_MaterialId* hapi_type);

/* Conversion of array of HAPI_MaterialId objects from c to erl. */
ERL_NIF_TERM hapi_priv_make_hapi_material_id_list(ErlNifEnv* env, const HAPI_MaterialId* hapi_types, uint32_t list_size);

/* Conversion of list of HAPI_MaterialId objects from erl to c. */
bool hapi_priv_get_hapi_material_id_list(ErlNifEnv* env, const ERL_NIF_TERM term, HAPI_MaterialId* hapi_types, uint32_t list_size);


#endif //!defined(HAPI_TYPES_NIF_H)
