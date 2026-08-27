/* FUN_2c4bd22c @ 0x2c4bd22c */

int FUN_2c4bd22c(uint param_1,uint param_2,int param_3,uint param_4,uint *param_5,int param_6,
                int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_30;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bd434,param_1);
  }
  if (*(char *)(DAT_2c4bd428 + param_1 * 0x70) != '\x01') {
    return -0x80000000;
  }
  iVar5 = *(int *)(DAT_2c4bd42c + param_1 * 0xc);
  if (param_2 != *(uint *)(iVar5 + 4)) {
    iVar2 = FUN_2c673c88();
    while (uVar6 = DAT_2c4bd430, (*(uint *)(iVar5 + 0x70) & 5) != 4) {
      iVar1 = FUN_2c673c88();
      if (15999 < (uint)(iVar1 - iVar2)) {
        iVar2 = 0x8000000;
        uVar6 = 0;
        goto LAB_2c4bd3b2;
      }
      if (param_8 != 0) {
        FUN_2c6444fc(1);
      }
    }
    *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) & 0xfffffffe;
    uVar6 = uVar6 & *(uint *)(iVar5 + 4);
    if ((param_2 & 0x8000) == 0) {
      uVar6 = param_2 & 0x3ff | uVar6 & 0xffffefff;
    }
    else {
      uVar6 = param_2 & 0x3ff | uVar6 | 0x1000;
    }
    *(uint *)(iVar5 + 4) = uVar6;
    *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) | 1;
  }
  if (*(int *)(iVar5 + 0x78) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(iVar5 + 0x78));
  }
  FUN_2c4bc18c(iVar5);
  local_30 = FUN_2c673c88();
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar8 = *(int *)(iVar5 + 0x74) + *(int *)(iVar5 + 0x78) + 1U & 0xff;
      if ((uVar8 < 8) && (uVar4 < param_4)) {
        uVar7 = 0;
        while (*(int *)(iVar5 + 0x70) << 0x1e < 0) {
          if ((uVar4 == 0) && (param_6 != 0)) {
            uVar3 = 0x400;
          }
          else {
            uVar3 = 0;
          }
          if ((param_4 - 1 == uVar4) && (param_7 != 0)) {
            uVar3 = uVar3 | 0x200;
          }
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 + 1;
          *(uint *)(iVar5 + 0x10) = uVar3 | 0x100;
          if (((8 - uVar8 & 0xff) <= uVar7) || (param_4 <= uVar4)) break;
        }
      }
      if (*(int *)(iVar5 + 0x70) << 0x1c < 0) {
        if (param_3 != 0) {
          *(char *)(param_3 + uVar6) = (char)*(undefined4 *)(iVar5 + 0x10);
          uVar6 = uVar6 + 1;
        }
        local_30 = FUN_2c673c88();
      }
      else {
        iVar2 = FUN_2c4bc18c(iVar5);
        if (iVar2 != 0) goto LAB_2c4bd3b2;
        iVar2 = FUN_2c673c88();
        if (15999 < (uint)(iVar2 - local_30)) {
          iVar2 = 0x1000000;
          goto LAB_2c4bd3b2;
        }
        if (param_8 != 0) {
          FUN_2c6444fc(1);
        }
      }
    } while (uVar6 < param_4);
  }
  if (param_7 != 0) {
    iVar1 = FUN_2c673c88();
    while (*(int *)(iVar5 + 0x70) << 0x1f < 0) {
      iVar2 = FUN_2c4bc18c(iVar5);
      if (iVar2 != 0) goto LAB_2c4bd3b2;
      iVar2 = FUN_2c673c88();
      if (15999 < (uint)(iVar2 - iVar1)) {
        iVar2 = 0x8000000;
        goto LAB_2c4bd3b2;
      }
      if (param_8 != 0) {
        FUN_2c6444fc(1);
      }
    }
  }
  iVar2 = FUN_2c4bc18c(iVar5);
LAB_2c4bd3b2:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar6;
  }
  return iVar2;
}

