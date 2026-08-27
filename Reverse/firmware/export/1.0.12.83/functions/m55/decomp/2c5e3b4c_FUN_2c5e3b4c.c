/* FUN_2c5e3b4c @ 0x2c5e3b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5e3b4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400);
  uVar1 = FUN_2c62e2d0(uVar1,0,0,0xcc,0x400);
  iVar2 = FUN_2c62e27c(uVar1,0,0,0x400,0x400);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x28);
  *_LAB_2c5e3b9c = 2;
  return iVar3 + ((iVar4 - iVar3) * iVar2 >> 10);
}

