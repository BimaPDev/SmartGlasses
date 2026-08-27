/* FUN_2c5ab3c8 @ 0x2c5ab3c8 */

void FUN_2c5ab3c8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_2c5abf68();
  FUN_2c62c3b0(iVar1 + 0x1b9,0x20);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x1b9) = *param_2;
  *(undefined4 *)(iVar1 + 0x1bd) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c1) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c5) = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x1c9) = param_2[4];
  *(undefined4 *)(iVar1 + 0x1cd) = uVar2;
  *(undefined4 *)(iVar1 + 0x1d1) = uVar3;
  *(undefined4 *)(iVar1 + 0x1d5) = uVar4;
  return;
}

