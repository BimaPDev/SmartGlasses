/* FUN_100240c0 @ 0x100240c0 */

void FUN_100240c0(undefined4 param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r3;
  undefined *puVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_2e;
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *(int *)PTR_DAT_10024220;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_100433f8(&local_2c,param_2,param_3,0);
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  if (param_2 != (short *)0x0) {
    iVar1 = (**(code **)(PTR_DAT_10024224 + 0xc))();
    uVar3 = (uint)*(byte *)(param_2 + 2);
    if (iVar1 != 0) goto LAB_100241c4;
    FUN_10118a1c(&local_20,0xc,PTR_s__02u__02u_10024228,uVar3,*(undefined1 *)((int)param_2 + 5));
  }
  while( true ) {
    uVar8 = ((int)PTR_DAT_10024230 - (int)PTR_DAT_1002422c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_10024234 | uVar8,PTR_s_notify_show_time_format_1002423c,
                 PTR_s_today_time__d__d__d__d__d__d_10024238,local_28._2_2_,local_28 & 0xff,
                 local_2c >> 0x18,local_2c >> 0x10 & 0xff,local_2c >> 8 & 0xff,local_2c & 0xff);
    uVar3 = (uint)*(byte *)(param_2 + 3);
    uVar4 = (uint)*(byte *)((int)param_2 + 5);
    uVar5 = (uint)*(byte *)(param_2 + 2);
    uVar6 = (uint)*(byte *)((int)param_2 + 3);
    FUN_100a5b78(uVar8 | 0x1ba0036,PTR_s_notify_show_time_format_1002423c,
                 PTR_s_time__d__d__d__d__d__d_101536ab_0x1b_10024240,*param_2,(char)param_2[1],uVar6
                 ,uVar5,uVar4,uVar3);
    if ((local_28._2_2_ == *param_2) && ((char)param_2[1] == (char)local_28)) {
      bVar9 = *(char *)((int)param_2 + 3) == local_2c._3_1_;
    }
    else {
      bVar9 = false;
    }
    uVar2 = *param_2 - 0x7e4;
    if ((bVar9 == false) && (uVar2 < 0xb)) {
      FUN_100a5b78(DAT_10024254 | uVar8,PTR_s_notify_show_time_format_1002423c,DAT_10024258,
                   *(undefined1 *)((int)param_2 + 3),(char)param_2[1],uVar6,uVar5,uVar4,uVar3);
      FUN_10097aec(param_1,DAT_1002425c,*(undefined1 *)((int)param_2 + 3),(char)param_2[1]);
    }
    else {
      FUN_100a5b78(uVar8 | 0x1c40033,PTR_s_notify_show_time_format_1002423c,
                   PTR_s_Display_time_format___s__is_toda_10024244,&local_20,bVar9,10 < uVar2,uVar5,
                   uVar4,uVar3);
      FUN_10097998(param_1,&local_20);
    }
    if (*(int *)PTR_DAT_10024220 == local_14) break;
    FUN_1013cdc0();
    uVar3 = extraout_r3;
LAB_100241c4:
    FUN_10043680(uVar3,&local_2e,&local_2d);
    puVar7 = PTR_DAT_1002424c;
    if (local_2d == '\0') {
      puVar7 = PTR_DAT_10024248;
    }
    FUN_10118a1c(&local_20,0xc,PTR_s__01u__02u__s_10024250,local_2e,
                 *(undefined1 *)((int)param_2 + 5),puVar7);
  }
  return;
}

