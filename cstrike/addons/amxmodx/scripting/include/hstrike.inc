#if defined _hstrike_included
#endinput
#endif
#define _hstrike_included

#pragma library "hstrike"

#include <hstrike_const>

native hs_get_user_sprint(user)
native hs_set_user_sprint(user, int)

native hs_get_user_aim(user)
native hs_set_user_aim(user, int)

native hs_get_user_prone(user)
native hs_set_user_prone(user, int)

native hs_get_user_sneak(user)
native hs_set_user_sneak(user, int)

native hs_get_user_reload(user)
native hs_set_user_reload(user, int)

native hs_get_user_lean(user)
native hs_set_user_lean(user, int)

native hs_get_user_slide(user)
native hs_set_user_slide(user, int)

native hs_get_user_crawling(user)
native hs_set_user_crawling(user, int)

native hs_get_user_on_ladder(user)
native hs_set_user_on_ladder(user, int)

native hs_get_user_exhausted(user)
native hs_set_user_exhausted(user, int)

native hs_get_user_menu(user)
native hs_set_user_menu(user, int)

native hs_get_user_arm_critical(user)
native hs_set_user_arm_critical(user, int)

native hs_get_user_leg_critical(user)
native hs_set_user_leg_critical(user, int)

native hs_get_user_class(user)
native hs_set_user_class(user, int)

native hs_get_user_stun(user)
native hs_set_user_stun(user, int)

native hs_get_user_kicking(user)
native hs_set_user_kicking(user, int)

native hs_get_user_quickstab(user)
native hs_set_user_quickstab(user, int)

native hs_get_user_offradio(user)
native hs_set_user_offradio(user, int)

native hs_get_wpn_firemode(user, wpn_id)
native hs_set_wpn_firemode(user, wpn_id, firemode)
native hs_get_wpnbox_firemode(wpn_ent)
native hs_set_wpnbox_firemode(wpn_ent, int)

native hs_get_wpn_submodel(user, wpn_id)
native hs_set_wpn_submodel(user, wpn_id, submodel)
native hs_get_wpnbox_submodel(wpn_ent)
native hs_set_wpnbox_submodel(wpn_ent, submodel)

native hs_get_wpn_addon_reflex(user, wpn_id)
native hs_set_wpn_addon_reflex(user, wpn_id, int)
native hs_get_wpnbox_addon_reflex(wpn_ent)
native hs_set_wpnbox_addon_reflex(wpn_ent, int)

native hs_get_wpn_addon_scope(user, wpn_id)
native hs_set_wpn_addon_scope(user, wpn_id, int)
native hs_get_wpnbox_addon_scope(wpn_ent)
native hs_set_wpnbox_addon_scope(wpn_ent, int)

native hs_get_wpn_addon_sil(user, wpn_id)
native hs_set_wpn_addon_sil(user, wpn_id, int)
native hs_get_wpnbox_addon_sil(wpn_ent)
native hs_set_wpnbox_addon_sil(wpn_ent, int)

native hs_get_wpn_addon_lam(user, wpn_id)
native hs_set_wpn_addon_lam(user, wpn_id, int)
native hs_get_wpnbox_addon_lam(wpn_ent)
native hs_set_wpnbox_addon_lam(wpn_ent, int)

native hs_get_wpn_addon_slugs(user, wpn_id)
native hs_set_wpn_addon_slugs(user, wpn_id, int)
native hs_get_wpnbox_addon_slugs(wpn_ent)
native hs_set_wpnbox_addon_slugs(wpn_ent, int)

native hs_get_wpn_addon_choke(user, wpn_id)
native hs_set_wpn_addon_choke(user, wpn_id, int)
native hs_get_wpnbox_addon_choke(wpn_ent)
native hs_set_wpnbox_addon_choke(wpn_ent, int)

native hs_get_wpn_addon_extramag(user, wpn_id)
native hs_set_wpn_addon_extramag(user, wpn_id, int)
native hs_get_wpnbox_addon_extramag(wpn_ent)
native hs_set_wpnbox_addon_extramag(wpn_ent, int)

native hs_get_wpn_addon_longmag(user, wpn_id)
native hs_set_wpn_addon_longmag(user, wpn_id, int)
native hs_get_wpnbox_addon_longmag(wpn_ent)
native hs_set_wpnbox_addon_longmag(wpn_ent, int)

native hs_get_wpn_addon_hp(user, wpn_id)
native hs_set_wpn_addon_hp(user, wpn_id, int)
native hs_get_wpnbox_addon_hp(wpn_ent)
native hs_set_wpnbox_addon_hp(wpn_ent, int)

native hs_get_wpn_addon_ap(user, wpn_id)
native hs_set_wpn_addon_ap(user, wpn_id, int)
native hs_get_wpnbox_addon_ap(wpn_ent)
native hs_set_wpnbox_addon_ap(wpn_ent, int)

native hs_get_wpn_addon_tracer(user, wpn_id)
native hs_set_wpn_addon_tracer(user, wpn_id, int)
native hs_get_wpnbox_addon_tracer(wpn_ent)
native hs_set_wpnbox_addon_tracer(wpn_ent, int)

native hs_get_wpn_charged(user, wpn_id)
native hs_set_wpn_charged(user, wpn_id, int)

native hs_get_wpn_smokescreen(user)
native hs_set_wpn_smokescreen(user, int)

native hs_get_block_wpn_anim(user)
native hs_set_block_wpn_anim(user, int, Float:anim_time)
native Float:hs_get_anim_block_time(user)

native hs_get_user_nvg_on(user)
native hs_set_user_nvg_on(user, int)

native hs_set_user_submodel(user)

native hs_get_user_shootswater(user)
native hs_set_user_shootswater(user, int)

native hs_get_user_addonsmenu(user)
native hs_set_user_addonsmenu(user, int)

native hs_get_user_specitem(user)
native hs_set_user_specitem(user, int)

native hs_get_user_specitems_qty(user)
native hs_set_user_specitems_qty(user, int)

native hs_get_user_is_healing(user)
native hs_set_user_is_healing(user, int)

native hs_get_user_is_bleeding(user)
native hs_set_user_is_bleeding(user, int)

native hs_get_user_is_crippled(user)
native hs_set_user_is_crippled(user, int)

native hs_get_user_vip(user)

native Float:hs_get_shield_hp(user)
native hs_set_shield_hp(user, Float:shield_hp)

native hs_get_user_ammocheck(user)
native hs_set_user_ammocheck(user, int)

native hs_get_user_droning(user)
native hs_set_user_droning(user, int)

native hs_get_buytime_expired();
native hs_set_buytime_expired(int);

native hs_get_gameres_width();
native hs_get_gameres_height();

native hs_get_fxparticles(int);

native hs_get_fxlights(int);

native hs_get_hud(int);

native hs_get_bot_silent(team);
native hs_set_bot_silent(team, int);