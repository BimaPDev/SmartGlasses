/* FUN_2c4bd020 @ 0x2c4bd020 */

int FUN_2c4bd020(uint param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6,
                int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *local_30;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bd228,param_1);
  }
  if (*(char *)(DAT_2c4bd21c + param_1 * 0x70) != '\x01') {
    return -0x80000000;
  }
  iVar5 = *(int *)(DAT_2c4bd220 + param_1 * 0xc);
  if (param_2 != *(uint *)(iVar5 + 4)) {
    iVar1 = FUN_2c673c88();
    while (uVar3 = DAT_2c4bd224, (*(uint *)(iVar5 + 0x70) & 5) != 4) {
      iVar7 = FUN_2c673c88();
      if (15999 < (uint)(iVar7 - iVar1)) {
        iVar1 = 0x8000000;
        iVar7 = 0;
        goto LAB_2c4bd184;
      }
      if (param_8 != 0) {
        FUN_2c6444fc(1);
      }
    }
    *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) & 0xfffffffe;
    uVar3 = uVar3 & *(uint *)(iVar5 + 4);
    if ((param_2 & 0x8000) == 0) {
      uVar3 = param_2 & 0x3ff | uVar3 & 0xffffefff;
    }
    else {
      uVar3 = param_2 & 0x3ff | uVar3 | 0x1000;
    }
    *(uint *)(iVar5 + 4) = uVar3;
    *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) | 1;
  }
  puVar4 = (uint *)(iVar5 + 0x70);
  FUN_2c4bc18c(iVar5);
  if (param_4 != 0) {
    local_30 = (byte *)(param_3 + -1);
    iVar7 = 0;
    do {
      if ((iVar7 == 0) && (param_6 != 0)) {
        uVar3 = 0x400;
      }
      else {
        uVar3 = 0;
      }
      if ((iVar7 == param_4 + -1) && (param_7 != 0)) {
        uVar6 = 0x200;
      }
      else {
        uVar6 = 0;
      }
      iVar2 = FUN_2c673c88();
      while (-1 < (int)(*puVar4 << 0x1e)) {
        iVar1 = FUN_2c4bc18c(iVar5);
        if (iVar1 != 0) goto LAB_2c4bd184;
        iVar1 = FUN_2c673c88();
        if (15999 < (uint)(iVar1 - iVar2)) {
          iVar1 = 0x4000000;
          goto LAB_2c4bd184;
        }
        if (param_8 != 0) {
          FUN_2c6444fc(1);
        }
      }
      iVar7 = iVar7 + 1;
      local_30 = local_30 + 1;
      *(uint *)(iVar5 + 0x10) = *local_30 | uVar3 | uVar6;
    } while (param_4 != iVar7);
  }
  iVar7 = param_4;
  if (param_7 == 0) {
    iVar2 = FUN_2c673c88();
    while (-1 < (int)(*puVar4 << 0x1d)) {
      iVar1 = FUN_2c4bc18c(iVar5);
      if (iVar1 != 0) goto LAB_2c4bd184;
      iVar1 = FUN_2c673c88();
      if (15999 < (uint)(iVar1 - iVar2)) {
        iVar1 = 0x2000000;
        goto LAB_2c4bd184;
      }
      if (param_8 != 0) {
        FUN_2c6444fc(1);
      }
    }
  }
  else {
    iVar2 = FUN_2c673c88();
    while ((*puVar4 & 5) != 4) {
      iVar1 = FUN_2c4bc18c(iVar5);
      if (iVar1 != 0) goto LAB_2c4bd184;
      iVar1 = FUN_2c673c88();
      if (15999 < (uint)(iVar1 - iVar2)) {
        iVar1 = 0x8000000;
        goto LAB_2c4bd184;
      }
      if (param_8 != 0) {
        FUN_2c6444fc(1);
      }
    }
  }
  iVar1 = FUN_2c4bc18c(iVar5);
LAB_2c4bd184:
  if (param_5 != (int *)0x0) {
    *param_5 = iVar7;
  }
  return iVar1;
}

