/* FUN_1402a6e8 @ 0x1402a6e8 */

undefined4
FUN_1402a6e8(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_d8;
  int local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_ac;
  undefined1 auStack_a8 [124];
  int local_2c;
  
  pcVar2 = DAT_1402a8ec;
  local_2c = *DAT_1402a8b4;
  if ((*DAT_1402a8ec != '\0') || (uVar4 = 0, param_1 < 2)) {
    if (*DAT_1402a8b8 < param_1) {
      uVar4 = 0;
    }
    else {
      local_ac = 0;
      FUN_140e5658(auStack_a8,0,0x79);
      iVar3 = FUN_140dd402(param_3,0x2f);
      if (iVar3 != 0) {
        param_3 = iVar3 + 1;
      }
      if (*DAT_1402a8bc == '\0') {
        FUN_140e5848();
        uVar4 = FUN_140e5548();
        iVar3 = FUN_1402a350(&local_ac,0x7d,DAT_1402a8c0,uVar4);
        puVar6 = (undefined4 *)((int)&local_ac + iVar3);
        iVar3 = 0x7d - iVar3;
      }
      else {
        iVar3 = FUN_140e5848();
        lVar1 = (ulonglong)(uint)(iVar3 - *DAT_1402a8d8) * 1000 + 0x2000;
        uVar8 = (uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12;
        uVar9 = (uint)((ulonglong)DAT_1402a8dc * (ulonglong)uVar8 >> 0x26);
        uVar7 = uVar9 + *DAT_1402a8e0;
        local_d8 = uVar7 + 0x7080;
        local_d4 = DAT_1402a8e0[1] + (uint)CARRY4(uVar9,*DAT_1402a8e0) + (uint)(0xffff8f7f < uVar7);
        iVar3 = FUN_140db2f0(&local_d8,&local_d0);
        if (iVar3 == 0) {
          puVar6 = &local_ac;
          iVar3 = 0x7d;
        }
        else {
          iVar3 = FUN_140dc344(&local_ac,0x7d,DAT_1402a8e4,local_c0 + 1,local_c4,local_c8,local_cc,
                               local_d0,uVar8 + uVar9 * -1000);
          puVar6 = (undefined4 *)((int)&local_ac + iVar3);
          iVar3 = 0x7d - iVar3;
        }
      }
      iVar5 = FUN_140dc518(param_4,DAT_1402a8c4);
      if (iVar5 == 0) {
        if (param_1 < 7) {
          iVar5 = (int)*(char *)(DAT_1402a8c8 + param_1);
        }
        else {
          iVar5 = 0x49;
        }
        FUN_140dc344(puVar6,iVar3,DAT_1402a8e8,DAT_1402a8cc,iVar5,param_3,param_2);
      }
      else {
        if (param_1 < 7) {
          iVar5 = (int)*(char *)(DAT_1402a8c8 + param_1);
        }
        else {
          iVar5 = 0x49;
        }
        FUN_140dc344(puVar6,iVar3,DAT_1402a8d0,DAT_1402a8cc,iVar5,param_3,param_2,param_4);
      }
      iVar3 = FUN_140dd3a4(&local_ac);
      local_d0 = &stack0x00000004;
      FUN_140de9d8(iVar3 + (int)&local_ac,0x7d - iVar3,param_5);
      iVar3 = FUN_140dd3a4(&local_ac);
      auStack_a8[iVar3 + -4] = 10;
      if (param_1 == 0) {
        uVar4 = FUN_14029fb8(&local_ac,iVar3 + 1);
      }
      else {
        uVar4 = 0;
        if (*pcVar2 != '\0') {
          uVar4 = FUN_14029cb0(&local_ac,iVar3 + 1);
        }
      }
      if (*DAT_1402a8d4 - 1 < 2) {
        FUN_14029e30();
      }
    }
  }
  if (*DAT_1402a8b4 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar4;
}

