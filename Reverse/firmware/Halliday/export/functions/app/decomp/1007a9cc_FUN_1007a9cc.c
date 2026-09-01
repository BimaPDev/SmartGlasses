/* FUN_1007a9cc @ 0x1007a9cc */

void FUN_1007a9cc(void)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = DAT_1007a9e8;
  uVar2 = FUN_1007c5fc(*(undefined1 *)(DAT_1007a9e8 + 0x10));
  *(undefined2 *)(iVar1 + 0x14e) = uVar2;
  uVar2 = FUN_1007c5fc(*(undefined1 *)(iVar1 + 0x14));
  *(undefined2 *)(iVar1 + 0x150) = uVar2;
  return;
}

