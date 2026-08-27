/* FUN_2c4c1a9e @ 0x2c4c1a9e */

/* WARNING: Removing unreachable block (ram,0x2c4c1a72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c1a9e(int param_1,int param_2,int param_3,uint param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if ((-1 < (int)((*(uint *)(param_3 + (param_4 >> 5) * 4) >> (param_4 & 0x1f)) << 0x1f)) ||
     (iVar3 = (**(code **)(param_1 + 0x24))(param_2,1), iVar3 == 0)) {
    return;
  }
  iVar6 = param_2 * 0x2c;
  (**(code **)(param_1 + 0x14))(param_2);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar3 = iVar7 + iVar6;
  for (piVar5 = *(int **)(iVar7 + iVar6); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    if (*(code **)(iVar3 + 0x24) != (code *)0x0) {
      (**(code **)(iVar3 + 0x24))(piVar5[2],piVar5[1]);
    }
    *(undefined1 *)(piVar5 + 3) = 0;
  }
  if (*(int *)(iVar3 + 4) == 0) {
    *(undefined4 *)(iVar7 + iVar6) = 0;
    iVar6 = *(int *)(param_1 + 0x38);
    iVar3 = param_2 * 0x2c + iVar6;
    if ((*(char *)(iVar3 + 0x29) != '\0') &&
       (*(undefined1 *)(iVar3 + 0x29) = 0, **(char **)(param_1 + 0x48) != '\0')) {
      uVar4 = 0;
      if (*(byte *)(param_1 + 0x35) != 0) {
        do {
          pcVar1 = (char *)(iVar6 + 0x29);
          uVar4 = uVar4 + 1;
          iVar6 = iVar6 + 0x2c;
          if (*pcVar1 != '\0') {
            return;
          }
        } while (*(byte *)(param_1 + 0x35) != uVar4);
      }
      FUN_2c4be750(*(undefined1 *)(param_1 + 0x34));
      **(undefined1 **)(param_1 + 0x48) = 0;
      return;
    }
    return;
  }
  *(int *)(iVar7 + iVar6) = *(int *)(iVar3 + 4);
  piVar2 = _LAB_2c4c1b48;
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(iVar3 + 4) = 0;
  piVar5 = *(int **)(iVar7 + iVar6);
  *piVar2 = *piVar2 + 1;
  piVar2 = _LAB_2c4c1b4c;
  while (piVar5 != (int *)0x0) {
    piVar5 = (int *)*piVar5;
    *piVar2 = *piVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x2c4c1b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}

