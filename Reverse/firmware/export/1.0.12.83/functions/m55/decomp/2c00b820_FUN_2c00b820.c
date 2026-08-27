/* FUN_2c00b820 @ 0x2c00b820 */

undefined4
FUN_2c00b820(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
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
  
  pcVar3 = DAT_2c00ba30;
  local_2c = *DAT_2c00b9fc;
  if (((*DAT_2c00ba30 == '\x01') || (param_1 < 2)) && (param_1 <= *DAT_2c00ba00)) {
    local_ac = 0;
    FUN_2c003a7c(auStack_a8,0,0x79);
    iVar4 = FUN_2c013cfc(param_3,0x2f);
    if (iVar4 != 0) {
      param_3 = iVar4 + 1;
    }
    if (*DAT_2c00ba04 == '\0') {
      FUN_2c013858();
      uVar5 = FUN_2c0138bc();
      iVar4 = FUN_2c00b47c(&local_ac,0x7d,DAT_2c00ba08,uVar5);
      puVar7 = (undefined4 *)((int)&local_ac + iVar4);
      iVar4 = 0x7d - iVar4;
    }
    else {
      iVar4 = FUN_2c013858();
      uVar2 = (iVar4 - *DAT_2c00ba20) * 1000 + 0x2000;
      lVar1 = (ulonglong)DAT_2c00ba24 * (ulonglong)uVar2;
      uVar8 = (uint)((ulonglong)lVar1 >> 0x26);
      uVar9 = uVar8 + *DAT_2c00ba34;
      local_d8 = uVar9 + 0x7080;
      local_d4 = DAT_2c00ba34[1] + (uint)CARRY4(uVar8,*DAT_2c00ba34) + (uint)(0xffff8f7f < uVar9);
      iVar4 = FUN_2c013e1c(&local_d8,&local_d0,(int)lVar1);
      if (iVar4 == 0) {
        puVar7 = &local_ac;
        iVar4 = 0x7d;
      }
      else {
        iVar4 = FUN_2c013dac(&local_ac,0x7d,DAT_2c00ba28,local_c0 + 1,local_c4,local_c8,local_cc,
                             local_d0,uVar2 + uVar8 * -1000);
        puVar7 = (undefined4 *)((int)&local_ac + iVar4);
        iVar4 = 0x7d - iVar4;
      }
    }
    iVar6 = FUN_2c013bfc(param_4,DAT_2c00ba0c);
    if (iVar6 == 0) {
      if (param_1 < 7) {
        iVar6 = (int)*(char *)(DAT_2c00ba10 + param_1);
      }
      else {
        iVar6 = 0x49;
      }
      FUN_2c013dac(puVar7,iVar4,DAT_2c00ba2c,DAT_2c00ba14,iVar6,param_3,param_2);
    }
    else {
      if (param_1 < 7) {
        iVar6 = (int)*(char *)(DAT_2c00ba10 + param_1);
      }
      else {
        iVar6 = 0x49;
      }
      FUN_2c013dac(puVar7,iVar4,DAT_2c00ba18,DAT_2c00ba14,iVar6,param_3,param_2,param_4);
    }
    iVar4 = FUN_2c013b1c(&local_ac);
    local_d0 = &stack0x00000004;
    FUN_2c013bdc(iVar4 + (int)&local_ac,0x7d - iVar4,param_5);
    iVar4 = FUN_2c013b1c(&local_ac);
    auStack_a8[iVar4 + -4] = 10;
    if (param_1 == 0) {
      uVar5 = FUN_2c00b044(&local_ac,iVar4 + 1);
    }
    else {
      uVar5 = 0;
      if (*pcVar3 != '\0') {
        uVar5 = FUN_2c00acfc(&local_ac,iVar4 + 1);
      }
    }
    if (*DAT_2c00ba1c - 2 < 2) {
      FUN_2c00ae1c();
    }
  }
  else {
    uVar5 = 0;
  }
  if (*DAT_2c00b9fc == local_2c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

