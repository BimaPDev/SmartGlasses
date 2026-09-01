/* FUN_100ef7a4 @ 0x100ef7a4 */

undefined4 FUN_100ef7a4(void)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_1011dbf4(DAT_100ef7d4,0xffffffff);
  uVar2 = 0;
  if (*DAT_100ef7d8 != 0) {
    cVar1 = *(char *)((int)DAT_100ef7d8 + 10);
    if (cVar1 < '\0') {
      cVar1 = *(char *)((int)DAT_100ef7d8 + 0xd);
    }
    uVar2 = FUN_100eebe8(cVar1);
  }
  FUN_100ef27c();
  return uVar2;
}

