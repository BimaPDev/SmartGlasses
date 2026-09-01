/* FUN_1013650a @ 0x1013650a */

undefined4 FUN_1013650a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4630();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}

