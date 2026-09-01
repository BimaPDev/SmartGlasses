/* FUN_1012d0ce @ 0x1012d0ce */

undefined4 FUN_1012d0ce(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10115464();
  iVar1 = FUN_1009eaf4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}

