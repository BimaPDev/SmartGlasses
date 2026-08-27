/* FUN_2c483704 @ 0x2c483704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483704(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _LAB_2c483760;
  iVar2 = FUN_2c471604(1);
  FUN_2c66c568(iVar1,iVar2 + 0x3e,0x2c);
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  FUN_2c66c568(iVar1 + 0x55,iVar2 + 0x93,0x13);
  *(undefined1 *)(iVar1 + 0x68) = 0;
  FUN_2c66c568(iVar1 + 0x41,iVar2 + 0x7f,0x13);
  *(undefined1 *)(iVar1 + 0x54) = 0;
  FUN_2c66c568(iVar1 + 0x2d,iVar2 + 0x6b,0x13);
  uVar3 = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined1 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = uVar3;
  return;
}

