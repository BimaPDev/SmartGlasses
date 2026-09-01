/* FUN_1011dfb2 @ 0x1011dfb2 */

uint FUN_1011dfb2(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_1011df34();
  iVar2 = FUN_1011df34(param_1);
  iVar3 = FUN_1011df34(param_1);
  iVar4 = FUN_1011df34(param_1);
  return uVar1 | iVar3 << 0x10 | iVar2 << 8 | iVar4 << 0x18;
}

