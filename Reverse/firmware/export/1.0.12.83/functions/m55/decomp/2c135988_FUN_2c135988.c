/* FUN_2c135988 @ 0x2c135988 */

void FUN_2c135988(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int local_d8;
  int local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_ac;
  undefined1 auStack_a8 [124];
  uint local_2c;
  
  pcVar1 = DAT_2c135b74;
  local_2c = *DAT_2c135b40;
  if (((*DAT_2c135b74 != '\0') || (param_1 < 2)) && (param_1 <= *DAT_2c135b44)) {
    local_ac = 0;
    FUN_2c13e9dc(auStack_a8,0,0x79);
    iVar2 = FUN_2c1427f8(param_3,0x2f);
    if (iVar2 != 0) {
      param_3 = iVar2 + 1;
    }
    if (*DAT_2c135b48 == '\0') {
      FUN_2c14486c();
      uVar3 = FUN_2c1448c4();
      iVar2 = FUN_2c135620(&local_ac,0x7d,DAT_2c135b4c,uVar3);
      puVar5 = (undefined4 *)((int)&local_ac + iVar2);
      iVar2 = 0x7d - iVar2;
    }
    else {
      iVar2 = FUN_2c14486c();
      lVar9 = (ulonglong)(uint)(iVar2 - *DAT_2c135b60) * 1000 + 0x2000;
      uVar7 = (uint)lVar9 >> 0xe | (int)((ulonglong)lVar9 >> 0x20) << 0x12;
      uVar8 = (uint)((ulonglong)DAT_2c135b64 * (ulonglong)uVar7 >> 0x26);
      uVar6 = uVar8 + *DAT_2c135b68;
      local_d8 = uVar6 + 0x7080;
      local_d4 = DAT_2c135b68[1] + (uint)CARRY4(uVar8,*DAT_2c135b68) + (uint)(0xffff8f7f < uVar6);
      iVar2 = FUN_2c142350(&local_d8,&local_d0);
      if (iVar2 == 0) {
        puVar5 = &local_ac;
        iVar2 = 0x7d;
      }
      else {
        iVar2 = FUN_2c142710(&local_ac,0x7d,DAT_2c135b6c,local_c0 + 1,local_c4,local_c8,local_cc,
                             local_d0,uVar7 + uVar8 * -1000);
        puVar5 = (undefined4 *)((int)&local_ac + iVar2);
        iVar2 = 0x7d - iVar2;
      }
    }
    iVar4 = FUN_2c1427d4(param_4,DAT_2c135b50);
    if (iVar4 == 0) {
      if (param_1 < 7) {
        iVar4 = (int)*(char *)(DAT_2c135b54 + param_1);
      }
      else {
        iVar4 = 0x49;
      }
      FUN_2c142710(puVar5,iVar2,DAT_2c135b70,DAT_2c135b58,iVar4,param_3,param_2);
    }
    else {
      if (param_1 < 7) {
        iVar4 = (int)*(char *)(DAT_2c135b54 + param_1);
      }
      else {
        iVar4 = 0x49;
      }
      FUN_2c142710(puVar5,iVar2,DAT_2c135b5c,DAT_2c135b58,iVar4,param_3,param_2,param_4);
    }
    iVar2 = FUN_2c1427e8(&local_ac);
    local_d0 = &stack0x00000004;
    FUN_2c142878(iVar2 + (int)&local_ac,0x7d - iVar2,param_5);
    param_2 = FUN_2c1427e8(&local_ac);
    auStack_a8[param_2 - 4] = 10;
    if (param_1 == 0) {
      lVar9 = FUN_2c1353b4(&local_ac,param_2 + 1);
      goto LAB_2c135a6e;
    }
    if (*pcVar1 != '\0') {
      lVar9 = FUN_2c1351d0(&local_ac,param_2 + 1);
      goto LAB_2c135a6e;
    }
  }
  lVar9 = (ulonglong)param_2 << 0x20;
LAB_2c135a6e:
  if ((*DAT_2c135b40 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),*DAT_2c135b40 ^ local_2c,0);
  }
  return;
}

