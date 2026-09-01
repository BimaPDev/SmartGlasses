/* FUN_1009a2d8 @ 0x1009a2d8 */

undefined1 FUN_1009a2d8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 *puVar3;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar1 = FUN_10094038(*(undefined4 *)(param_2 + 4));
    iVar2 = FUN_1011ea18(uVar1,DAT_1009a484);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_10093f0c(&local_24,*(undefined4 *)(param_2 + 4),2);
    if (iVar2 != 0) {
      FUN_10094174(2,DAT_1009a490,0xa7,DAT_1009a48c,DAT_1009a488);
      return 0;
    }
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar2 = FUN_10094254(0x14,DAT_1009a48c);
      *(int *)(param_2 + 0x24) = iVar2;
      if (iVar2 == 0) {
        uVar5 = FUN_10094174(3,DAT_1009a490,0xae,DAT_1009a48c,DAT_1009a49c,DAT_1009a498,DAT_1009a494
                            );
        FUN_10119dc2(DAT_1009a4a4,DAT_1009a4a0,DAT_1009a490,0xae,uVar5);
        FUN_10119dc2(DAT_1009a4a8);
        FUN_1011a1f0(DAT_1009a490,0xae,extraout_r2,extraout_r3);
      }
      if (*(int *)(param_2 + 0x24) == 0) {
        FUN_10094174(3,DAT_1009a490,0xb0,DAT_1009a48c,DAT_1009a4ac);
        FUN_10093c38(&local_24);
        return 0;
      }
      FUN_1011ea48(*(int *)(param_2 + 0x24),0,0x14);
    }
    puVar3 = *(undefined4 **)(param_2 + 0x24);
    *puVar3 = local_24;
    puVar3[1] = uStack_20;
    puVar3[2] = local_1c;
  }
  else if ((*(char *)(param_2 + 0x10) == '\0') && (*(int *)(*(int *)(param_2 + 4) + 8) == 0)) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x14) & 0x1f) != 0x1a) {
    return 1;
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    iVar4 = *(int *)(param_2 + 0x24);
    FUN_1012af70(iVar4,0);
    FUN_10093c80(iVar4,iVar4 + 0xc,4,0);
    iVar2 = *(int *)(iVar4 + 0xc);
    if (iVar2 - 1U < 0x100) {
      iVar2 = FUN_10094254(iVar2 << 2,DAT_1009a48c);
      *(int *)(iVar4 + 0x10) = iVar2;
      if (iVar2 == 0) {
        uVar5 = FUN_10094174(3,DAT_1009a490,0xd0,DAT_1009a48c,DAT_1009a49c,DAT_1009a4b4,DAT_1009a494
                            );
        FUN_10119dc2(DAT_1009a4a4,DAT_1009a4a0,DAT_1009a490,0xd0,uVar5);
        FUN_10119dc2(DAT_1009a4a8);
        FUN_1011a1f0(DAT_1009a490,0xd0,extraout_r2_00,extraout_r3_00);
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        FUN_10093c80(iVar4,*(int *)(iVar4 + 0x10),*(int *)(iVar4 + 0xc) << 2,0);
        return 1;
      }
      FUN_10094174(3,DAT_1009a490,0xd2,DAT_1009a48c,DAT_1009a4ac);
    }
    else {
      FUN_10094174(3,DAT_1009a490,0xca,DAT_1009a48c,DAT_1009a4b0,iVar2);
    }
    FUN_1009a1f4(param_1,param_2);
  }
  else {
    iVar2 = **(int **)(*(int *)(param_2 + 4) + 8);
    if (iVar2 - 1U < 0x100) {
      return 1;
    }
    FUN_10094174(3,DAT_1009a490,0xdb,DAT_1009a48c,DAT_1009a4b0,iVar2);
  }
  return 0;
}

