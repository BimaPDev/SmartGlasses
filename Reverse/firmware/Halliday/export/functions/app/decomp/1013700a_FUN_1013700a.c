/* FUN_1013700a @ 0x1013700a */

undefined4 FUN_1013700a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100dd8a8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffef;
  }
  else {
    if (*(char *)(iVar1 + 200) < '\0') {
      FUN_1013751e(iVar1 + 0x68);
    }
    if (*(char *)(iVar1 + 0x60) < '\0') {
      FUN_1013751e(iVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

