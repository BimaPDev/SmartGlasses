/* FUN_100ef7dc @ 0x100ef7dc */

undefined4 FUN_100ef7dc(void)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_1011dbf4(DAT_100ef80c,0xffffffff);
  uVar2 = 0;
  if (*DAT_100ef810 != 0) {
    cVar1 = *(char *)((int)DAT_100ef810 + 9);
    if (cVar1 < '\0') {
      cVar1 = (char)DAT_100ef810[3];
    }
    uVar2 = FUN_100eebe8(cVar1);
  }
  FUN_100ef27c();
  return uVar2;
}

