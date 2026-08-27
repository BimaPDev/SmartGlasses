/* FUN_2c5949f4 @ 0x2c5949f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5949f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_r2;
  undefined4 extraout_r2_00;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  uVar6 = _LAB_2c594bc0;
  piVar1 = _LAB_2c594bbc;
  iVar7 = *_LAB_2c594bbc;
  *param_1 = _LAB_2c594bc0;
  if (iVar7 == 0) {
    FUN_2c4723c4();
    iVar7 = 1;
    *piVar1 = 1;
    uVar6 = extraout_r2_00;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x20,uVar6,iVar7,param_4);
  FUN_2c674268(puVar4,0,0x20);
  *puVar4 = _LAB_2c594bc4;
  iVar7 = *piVar1;
  param_1[1] = puVar4;
  param_1[2] = 0;
  param_1[3] = 0x70000;
  param_1[4] = 0;
  bVar9 = iVar7 == 0;
  if (bVar9) {
    FUN_2c4723c4();
    *piVar1 = 1;
    iVar7 = extraout_r2;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,4,iVar7,bVar9,param_4);
  *puVar4 = _LAB_2c594bc8;
  param_1[5] = puVar4;
  param_1[6] = 0;
  puVar4 = (undefined4 *)FUN_2c64ca5c(0xd74);
  uVar6 = _LAB_2c594bcc;
  puVar4[1] = 1;
  puVar4[2] = 1;
  puVar8 = puVar4 + 3;
  *puVar4 = uVar6;
  FUN_2c55e1f4(puVar8);
  piVar5 = (int *)puVar4[6];
  param_1[6] = puVar8;
  param_1[7] = puVar4;
  if (piVar5 == (int *)0x0) {
    puVar4[5] = puVar8;
    puVar4[2] = puVar4[2] + 1;
  }
  else {
    if (piVar5[1] != 0) goto LAB_2c594a76;
    puVar4[5] = puVar8;
    puVar4[2] = puVar4[2] + 1;
    iVar7 = piVar5[2];
    piVar5[2] = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      (**(code **)(*piVar5 + 0xc))();
    }
  }
  puVar4[6] = puVar4;
LAB_2c594a76:
  uVar2 = _LAB_2c594bd4;
  uVar6 = _LAB_2c594bd0;
  *(undefined2 *)(param_1 + 10) = 0x100;
  uVar3 = _LAB_2c594bd8;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  param_1[8] = uVar6;
  param_1[9] = uVar2;
  uVar6 = FUN_2c62bdd8(uVar3,5000,param_1);
  param_1[0xb] = uVar6;
  param_1[0xc] = 0;
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar6 = FUN_2c47245c(0,8);
  func_0x2c594578();
  iVar7 = *piVar1;
  param_1[0xd] = uVar6;
  if (iVar7 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,8);
  *puVar4 = _LAB_2c594bdc;
  iVar7 = *piVar1;
  *(undefined2 *)(puVar4 + 1) = 0;
  param_1[0xe] = puVar4;
  if (iVar7 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar6 = FUN_2c47245c(0,0x34);
  FUN_2c546dd8();
  iVar7 = *piVar1;
  param_1[0x10] = uVar6;
  if (iVar7 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar6 = FUN_2c47245c(0,0x6c);
  FUN_2c590438(uVar6,param_1);
  iVar7 = *piVar1;
  param_1[0x11] = uVar6;
  if (iVar7 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar7 = FUN_2c47245c(0,0xa0);
  FUN_2c674268(iVar7,0,0xa0);
  *(undefined4 *)(iVar7 + 0xc) = _LAB_2c594be0;
  *(undefined4 *)(iVar7 + 0x10) = 1;
  uVar6 = _LAB_2c594be4;
  *(int *)(iVar7 + 0x14) = iVar7 + 0x1c;
  *(undefined4 *)(iVar7 + 0x2c) = uVar6;
  uVar6 = _LAB_2c594be8;
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  *(undefined4 *)(iVar7 + 0x30) = 3;
  *(undefined4 *)(iVar7 + 0x34) = uVar6;
  uVar6 = _LAB_2c594bf0;
  *(undefined4 *)(iVar7 + 0x38) = _LAB_2c594bec;
  param_1[0x12] = iVar7;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar6 = FUN_2c620f0c(0x404,uVar6,param_1);
  param_1[0x16] = uVar6;
  return param_1;
}

