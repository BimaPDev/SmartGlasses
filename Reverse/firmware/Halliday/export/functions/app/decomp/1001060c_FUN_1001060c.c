/* FUN_1001060c @ 0x1001060c */

void FUN_1001060c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint extraout_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  puVar1 = DAT_100107dc;
  iVar4 = *DAT_100107d8;
  puVar5 = (undefined4 *)*DAT_100107dc;
  uVar7 = puVar5[1];
  uVar8 = *puVar5;
  if (*(char *)(puVar5 + 7) == '\0') {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
  }
  uVar2 = FUN_1012d608(puVar5[0x12]);
  uVar6 = *puVar1;
  iVar3 = *(int *)(uVar6 + 0xc);
  uVar9 = CONCAT44(iVar3,uVar2);
  if (iVar3 + uVar2 < 0x3e0) goto LAB_100107b6;
  FUN_1012e018(*(undefined4 *)(uVar6 + 0x40),iVar3 + *(int *)(uVar6 + 4),0x3e0 - iVar3,uVar6,param_1
               ,param_2,param_3);
  puVar5 = (undefined4 *)*puVar1;
  puVar5[3] = 0;
  FUN_100105cc(puVar5[1],*puVar5,0xf8);
  uVar6 = *puVar1;
  if (*(int *)(uVar6 + 0x14) << 0x1f < 0) {
    iVar3 = *(int *)(uVar6 + 0x3c);
    *(undefined2 *)(iVar3 + 8) = 0;
    FUN_1011ea40(iVar3 + 0x10,uVar8,0x1f0);
    iVar3 = FUN_100b6474(*(undefined4 *)(uVar6 + 0x3c),0x200,2000);
    if (iVar3 != 0x200) {
      FUN_100a5b78((DAT_100107e4 - DAT_100107e0) * 0x20 & 0xff00U | 0xe60012,DAT_100107ec,
                   DAT_100107e8,0xe6,iVar3);
      param_1 = iVar3;
    }
  }
  uVar6 = *puVar1;
  if (*(int *)(uVar6 + 0x14) << 0x1e < 0) {
    iVar3 = *(int *)(uVar6 + 0x3c);
    *(undefined2 *)(iVar3 + 8) = 1;
    FUN_1011ea40(iVar3 + 0x10,uVar7,0x1f0);
    iVar3 = FUN_100b6474(*(undefined4 *)(uVar6 + 0x3c),0x200,2000);
    if (iVar3 != 0x200) {
      FUN_100a5b78((DAT_100107e4 - DAT_100107e0) * 0x20 & 0xff00U | 0xf30012,DAT_100107ec,
                   DAT_100107f0,0xf3,iVar3);
      param_1 = iVar3;
    }
  }
  uVar6 = *puVar1;
  if (*(int *)(uVar6 + 0x14) << 0x1d < 0) {
    iVar3 = *(int *)(uVar6 + 0x3c);
    *(undefined2 *)(iVar3 + 8) = 2;
    FUN_1011ea40(iVar3 + 0x10,uVar8,0x1f0);
    iVar3 = FUN_100b6474(*(undefined4 *)(uVar6 + 0x3c),0x200,2000);
    if (iVar3 != 0x200) {
      FUN_100a5b78((DAT_100107e4 - DAT_100107e0) * 0x20 & 0xff00U | 0xfe0012,DAT_100107ec,
                   DAT_100107e8,0xfe,iVar3);
      param_1 = iVar3;
    }
  }
  uVar2 = *puVar1;
  if (*(int *)(uVar2 + 0x14) << 0x1c < 0) {
    iVar3 = *(int *)(uVar2 + 0x3c);
    *(undefined2 *)(iVar3 + 8) = 3;
    FUN_1011ea40(iVar3 + 0x10,uVar7,0x1f0);
    iVar3 = FUN_100b6474(*(undefined4 *)(uVar2 + 0x3c),0x200,2000);
    if (iVar3 != 0x200) {
      uVar2 = (DAT_100107e4 - DAT_100107e0) * 0x20 & 0xff00;
      FUN_100a5b78(uVar2 | 0x1080012,DAT_100107ec,DAT_100107f0,0x108,iVar3);
      param_1 = iVar3;
    }
  }
  *(int *)(*(int *)(*puVar1 + 0x3c) + 0xc) = *(int *)(*(int *)(*puVar1 + 0x3c) + 0xc) + 1;
  while( true ) {
    if (*DAT_100107d8 == iVar4) break;
    uVar9 = FUN_1013cdc0();
    uVar6 = extraout_r3;
LAB_100107b6:
    if ((int)uVar9 != 0) {
      FUN_1012e018(*(undefined4 *)(uVar6 + 0x40),
                   (int)((ulonglong)uVar9 >> 0x20) + *(int *)(uVar6 + 4),uVar2,uVar6,param_1,param_2
                   ,param_3);
      *(uint *)(*puVar1 + 0xc) = *(int *)(*puVar1 + 0xc) + uVar2;
    }
  }
  return;
}

