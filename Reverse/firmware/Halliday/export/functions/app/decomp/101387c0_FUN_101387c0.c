/* FUN_101387c0 @ 0x101387c0 */

undefined4 FUN_101387c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1013871c(param_1,0,1,0x10);
  if (iVar1 != 0) {
    FUN_101327da(iVar1 + 8,1);
    FUN_101386a6(iVar1,3);
    uVar2 = FUN_100e40e4(param_1,iVar1);
    return uVar2;
  }
  return 0xfffffff4;
}

