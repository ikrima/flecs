#ifndef FLECS_API_SUPPORT_INTERNAL_H
#define FLECS_API_SUPPORT_INTERNAL_H

/** This is a stopgap file for supporting types and functions that need to be exposed 
 * in support of missing features/extension points needed to implement advanced stuff in userspace
 * (Ex: emulating 'ecs_progress') */

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////
//// ecs_progress extension Functions
////////////////////////////////////////////////////////////////////////////////

FLECS_EXPORT
void ecs_progress_begin(
    ecs_world_t* world,
    float user_delta_time);

FLECS_EXPORT
bool ecs_progress_end(
    ecs_world_t* world,
    float user_delta_time);

FLECS_EXPORT
void ecs_run_single_thread_stage_begin(
    ecs_world_t* world,
    bool staged);

FLECS_EXPORT
void ecs_run_single_thread_stage_end(
    ecs_world_t* world,
    bool staged,
    float elapsed_time);

////////////////////////////////////////////////////////////////////////////////
//// Entity creation extension Functions
////////////////////////////////////////////////////////////////////////////////

FLECS_EXPORT
void ecs_set_world_last_handle(
    ecs_world_t* world,
    ecs_entity_t new_last_handle);

FLECS_EXPORT
void ecs_new_type_w_eid(
    ecs_world_t* world,
    const char* id,
    const char* components,
    ecs_entity_t new_type_eid);



#ifdef __cplusplus
}
#endif

#endif
