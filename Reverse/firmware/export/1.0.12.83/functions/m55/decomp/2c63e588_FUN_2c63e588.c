/* FUN_2c63e588 @ 0x2c63e588 */

void FUN_2c63e588(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_24;
  
  piVar1 = DAT_2c63e818;
  local_24 = *DAT_2c63e81c;
  if (*DAT_2c63e818 == 0) {
    FUN_2c62a470();
    puVar2 = DAT_2c63e820;
    uVar5 = FUN_2c5fee80();
    puVar3 = DAT_2c63e828;
    *DAT_2c63e824 = uVar5;
    iVar6 = FUN_2c606a10();
    *piVar1 = iVar6;
    lv_obj_add_flag_invalidate(iVar6,1);
    iVar6 = *piVar1;
    FUN_2c606d30(iVar6,0,0);
    FUN_2c606d3c(iVar6,0,0);
    FUN_2c606d18(iVar6,0,0);
    FUN_2c606d24(iVar6,0,0);
    FUN_2c606d60(*piVar1,0xff000000,0);
    FUN_2c606d6c(*piVar1,0xff,0);
    FUN_2c606d90(*piVar1,0x4c,0);
    FUN_2c606e68(*piVar1,0x10,0);
    FUN_2c606d9c(*piVar1,1,0);
    FUN_2c606d84(*piVar1,0xff00ff00,0);
    FUN_2c606d00(*piVar1,0x80,0);
    FUN_2c606d0c(*piVar1,0x1e,0);
    uVar7 = FUN_2c6313f4(*piVar1);
    uVar5 = DAT_2c63e82c;
    *puVar2 = uVar7;
    FUN_2c603a04(uVar7,0,uVar5);
    puVar4 = DAT_2c63e85c;
    FUN_2c6315d0(*puVar2,0x10);
    lv_style_init_or_reset(DAT_2c63e830);
    lv_obj_set_style_pad_left(DAT_2c63e830,0);
    lv_obj_set_style_pad_right(DAT_2c63e830,0);
    lv_obj_set_style_pad_top(DAT_2c63e830,0);
    lv_obj_set_style_pad_bottom(DAT_2c63e830,0);
    lv_obj_set_style_prop_0x32(DAT_2c63e830,0);
    lv_obj_set_style_radius(DAT_2c63e830,4);
    lv_obj_set_style_bg_color(DAT_2c63e830,0xff00ff00);
    lv_obj_set_style_bg_opa(DAT_2c63e830,0x19);
    FUN_2c62c810(DAT_2c63e830,400);
    lv_style_init_or_reset(DAT_2c63e834);
    lv_obj_set_style_prop_0x32(DAT_2c63e834,0);
    lv_obj_set_style_radius(DAT_2c63e834,4);
    lv_obj_set_style_bg_opa(DAT_2c63e834,0xcc);
    lv_obj_set_style_bg_color(DAT_2c63e834,0xff00ff00);
    uVar7 = FUN_2c639320(*piVar1);
    uVar5 = DAT_2c63e82c;
    *puVar3 = uVar7;
    FUN_2c603a04(uVar7,0,uVar5);
    FUN_2c6036dc(*puVar3,DAT_2c63e830,0);
    FUN_2c6036dc(*puVar3,DAT_2c63e834,0x20000);
    FUN_2c6393f8(*puVar3,DAT_2c63e838);
    FUN_2c6393b8(*puVar3,0,100);
    puVar3 = DAT_2c63e83c;
    uVar5 = lv_mem_alloc(0x44);
    *puVar3 = uVar5;
    FUN_2c62e7b4();
    piVar8 = (int *)*puVar3;
    *piVar8 = *piVar1;
    piVar8[0xb] = 0x96;
    *(byte *)((int)piVar8 + 0x42) = *(byte *)((int)piVar8 + 0x42) & 0xfe;
    piVar8[1] = DAT_2c63e840;
    piVar8[3] = DAT_2c63e844;
    uVar5 = lv_mem_alloc(0x44);
    *puVar4 = uVar5;
    FUN_2c62e7b4();
    piVar8 = (int *)*puVar4;
    iVar6 = *piVar1;
    piVar8[0xb] = 0x96;
    *piVar8 = iVar6;
    uVar5 = DAT_2c63e860;
    *(byte *)((int)piVar8 + 0x42) = *(byte *)((int)piVar8 + 0x42) & 0xfe;
    piVar8[1] = DAT_2c63e848;
    FUN_2c62e7b4(&local_f0);
    local_f0 = *puVar2;
    local_c8 = 0x11c;
    local_c4 = 100;
    local_ec = DAT_2c63e84c;
    local_d4 = uVar5;
    local_d0 = 0x100;
    uStack_cc = 0x100;
    FUN_2c62e7b4(&local_ac);
    local_ac = *puVar2;
    local_80 = 100;
    local_90 = uVar5;
    local_a8 = DAT_2c63e850;
    local_8c = 0x11c;
    uStack_88 = 0x11c;
    local_84 = 0xe6;
    FUN_2c62e7b4(&local_68);
    puVar3 = DAT_2c63e854;
    local_68 = *puVar2;
    local_40 = 0x100;
    local_64 = DAT_2c63e858;
    local_4c = uVar5;
    local_3c = 100;
    local_48 = 0xe6;
    uStack_44 = 0xe6;
    uVar5 = FUN_2c62c538();
    *puVar3 = uVar5;
    FUN_2c62c550(uVar5,0,&local_f0);
    FUN_2c62c550(*puVar3,100,&local_ac);
    FUN_2c62c550(*puVar3,200,&local_68);
    if (*DAT_2c63e81c == local_24) {
      FUN_2c63e350(0,0,0,0);
      return;
    }
  }
  else if (*DAT_2c63e81c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

