/* FUN_1011df88 @ 0x1011df88 */

uint FUN_1011df88(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_1011df34();
  iVar2 = FUN_1011df34(param_1);
  iVar3 = FUN_1011df34(param_1);
  uVar4 = FUN_1011df34(param_1);
  return uVar4 | iVar1 << 0x18 | iVar2 << 0x10 | iVar3 << 8;
}

