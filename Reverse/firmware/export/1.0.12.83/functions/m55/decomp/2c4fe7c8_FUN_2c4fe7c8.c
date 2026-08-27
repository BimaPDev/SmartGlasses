/* FUN_2c4fe7c8 @ 0x2c4fe7c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fe7c8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2 + 0x74;
  *(undefined2 *)(param_2 + 0x68) = 0xfff1;
  iVar4 = param_2 + 0x50;
  *(undefined4 *)(param_2 + 0x34) = 0x10001;
  *(int *)(param_2 + 0x58) = iVar5;
  *(int *)(param_2 + 0x5c) = iVar5;
  *(int *)(param_2 + 0x7c) = iVar4;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(int *)(param_2 + 0x40) = iVar4;
  *(int *)(param_2 + 0x44) = iVar4;
  *(int *)(param_2 + 0x38) = iVar5;
  *(int *)(param_2 + 0x3c) = iVar5;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x88) = 1;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  FUN_2c6129e4(param_2 + 0x94);
  FUN_2c62e7b4(param_2 + 0xc4);
  uVar2 = _LAB_2c4fe864;
  uVar1 = _LAB_2c4fe860;
  *(int *)(param_2 + 0xc4) = param_2;
  *(undefined4 *)(param_2 + 0xf0) = 300;
  *(undefined4 *)(param_2 + 0xc0) = 0;
  *(undefined4 *)(param_2 + 0xbc) = 0;
  uVar3 = _DAT_2c4fe868;
  *(undefined4 *)(param_2 + 200) = uVar2;
  *(undefined4 *)(param_2 + 0xcc) = uVar1;
  uVar1 = _LAB_2c4fe86c;
  *(undefined4 *)(param_2 + 0xd4) = _LAB_2c4fe86c;
  iVar4 = FUN_2c62bdd8(uVar3,300,param_2,uVar1,param_4);
  *(int *)(param_2 + 0x108) = iVar4;
  *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) | 1;
  return;
}

