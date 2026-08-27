/* FUN_2c4deb04 @ 0x2c4deb04 */

void FUN_2c4deb04(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_50 [5];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  uint local_14;
  
  local_14 = *DAT_2c4debb0;
  if (param_2[3] == 0x38) {
    iVar4 = *param_2;
    piVar7 = local_50;
    iVar3 = param_2[2];
    piVar5 = (int *)(iVar4 + iVar3);
    do {
      piVar6 = piVar5 + 2;
      iVar2 = piVar5[1];
      *piVar7 = *piVar5;
      piVar7[1] = iVar2;
      piVar7 = piVar7 + 2;
      piVar5 = piVar6;
    } while (piVar6 != (int *)(iVar4 + iVar3) + 0xe);
    param_1[0x14] = local_50[0];
    param_1[0x15] = local_50[1];
    param_1[0x16] = local_50[2];
    param_1[0x17] = local_50[3];
    param_1[0x18] = local_50[4];
    param_1[0x19] = iStack_3c;
    param_1[0x1a] = iStack_38;
    param_1[0x1b] = iStack_34;
    param_1[0x1c] = local_30;
    param_1[0x1d] = iStack_2c;
    param_1[0x1e] = iStack_28;
    param_1[0x1f] = iStack_24;
    param_1[0x20] = local_20;
    param_1[0x21] = iStack_1c;
    uVar1 = 1;
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 2;
  }
  else {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0xe2,1);
    FUN_2c4e0504(DAT_2c4debb8,0,0,0,DAT_2c4debc0,0xe2,DAT_2c4debbc,0x1300,DAT_2c4debb4);
    uVar1 = 0;
    iStack_1c = extraout_r1;
  }
  if ((*DAT_2c4debb0 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,iStack_1c,*DAT_2c4debb0 ^ local_14,0);
  }
  return;
}

