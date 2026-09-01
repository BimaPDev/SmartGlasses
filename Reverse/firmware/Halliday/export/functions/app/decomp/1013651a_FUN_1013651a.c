/* FUN_1013651a @ 0x1013651a */

undefined4 FUN_1013651a(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1013650a();
  iVar2 = FUN_100d45f8(uVar1,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar1;
}

