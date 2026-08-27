/* FUN_2c5b2f9c @ 0x2c5b2f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5b2f9c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r2;
  bool bVar6;
  
  uVar4 = _LAB_2c5b30b0;
  piVar1 = _LAB_2c5b30ac;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  iVar5 = *piVar1;
  *param_1 = uVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bVar6 = iVar5 == 0;
  if (bVar6) {
    FUN_2c4723c4();
    *piVar1 = 1;
    iVar5 = extraout_r2;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0xc4,iVar5,bVar6,param_4);
  *puVar2 = _LAB_2c5b30b4;
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x20);
  *puVar3 = _LAB_2c5b30b8;
  uVar4 = _LAB_2c5b30bc;
  puVar2[7] = 0;
  puVar2[1] = puVar3;
  puVar2[2] = uVar4;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  FUN_2c674268(puVar2 + 8,0,0x7c);
  puVar2[0x29] = 0;
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  puVar2[0x2f] = 0xffffffff;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0xffffffff;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  iVar5 = *piVar1;
  *(undefined1 *)(puVar2 + 0x30) = 1;
  param_1[8] = puVar2;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar4 = FUN_2c47245c(0,0x1c);
  func_0x2c5b7118();
  iVar5 = *piVar1;
  param_1[9] = uVar4;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x40);
  uVar4 = _LAB_2c5b30c0;
  puVar2[10] = 0xffffffff;
  puVar2[0xb] = 0;
  *puVar2 = uVar4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  FUN_2c5dc8f0(puVar2 + 0xc);
  uVar4 = _LAB_2c5b30c4;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = 0;
  param_1[10] = puVar2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}

