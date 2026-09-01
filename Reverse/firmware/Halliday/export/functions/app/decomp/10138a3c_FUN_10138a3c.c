/* FUN_10138a3c @ 0x10138a3c */

undefined4 FUN_10138a3c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_100e4bd8();
  if (iVar3 == 0) {
    return 0xfffffffb;
  }
  iVar1 = FUN_1013871c(iVar3,0,1,0x30);
  if (iVar1 != 0) {
    FUN_101327da(iVar1 + 8,0);
    uVar2 = FUN_100e40e4(iVar3,iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}

