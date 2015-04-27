%%% @author Mykola Konyk <mykola@konyk.org>
%%%
%%% @copyright 2015
%%% @license MS-RL
%%% This file is autogenerated from util/hapi_record.hrl.template
%%% This file corresponds to HAPI_ParmInfo structure from HAPI_Common.h

-record(hapi_parminfo,
{
    id,
    parent_id,
    type,
    type_info_sh,
    permissions,
    size,
    choice_count,
    name_sh,
    label_sh,
    template_name_sh,
    help_sh,
    has_min,
    has_max,
    has_uimin,
    has_uimax,
    min,
    max,
    uimin,
    uimax,
    invisible,
    disabled,
    spare,
    join_next,
    label_none,
    int_values_index,
    float_values_index,
    string_values_index,
    choice_index,
    is_child_of_multi_parm,
    instance_num,
    instance_length,
    instance_count,
    instance_start_offset,
    ramp_type
}).
