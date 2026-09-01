/* FUN_1011a5de @ 0x1011a5de */

/* WARNING: Removing unreachable block (ram,0x10055260) */
/* WARNING: Removing unreachable block (ram,0x10055236) */
/* WARNING: Removing unreachable block (ram,0x10055244) */
/* WARNING: Removing unreachable block (ram,0x1005526c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1011a5de(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_18;
  
  if (param_1 == 0) {
    return 0;
  }
  iStack_18 = param_1;
  iVar5 = FUN_1011ea10();
  piVar1 = DAT_1005527c;
  FUN_1011ea48(&local_3c,0,0x1c);
  *piVar1 = 0;
  piVar1[1] = 0;
  if (param_1 != 0) {
    if (iVar5 + 1U != 0) {
      uStack_2c = *DAT_10055280;
      uStack_28 = DAT_10055280[1];
      uStack_24 = DAT_10055280[2];
      local_3c = param_1;
      local_38 = iVar5 + 1U;
      iVar5 = FUN_1011a5a2();
      if (iVar5 != 0) {
        piVar4 = (int *)0x0;
        if (local_3c != 0) {
          if (local_34 == 0) {
            if ((4 < local_38) && (iVar3 = FUN_1011ea20(local_3c,DAT_10055284,3), iVar3 == 0)) {
              local_34 = local_34 + 3;
            }
            piVar4 = &local_3c;
          }
          else {
            piVar4 = (int *)0x0;
          }
        }
        uVar2 = FUN_1011a4ae(piVar4);
        iVar3 = FUN_10054ed8(iVar5,uVar2);
        if (iVar3 != 0) {
          return iVar5;
        }
        FUN_10054e90(iVar5);
      }
    }
    if ((local_38 <= local_34) && (local_34 = local_38, local_38 != 0)) {
      local_34 = local_38 - 1;
    }
    *piVar1 = param_1;
    piVar1[1] = local_34;
  }
  return 0;
}

