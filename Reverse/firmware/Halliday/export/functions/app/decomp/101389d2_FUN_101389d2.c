/* FUN_101389d2 @ 0x101389d2 */

undefined4 FUN_101389d2(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100e4bd8();
  if (iVar1 == 0) {
    iVar1 = FUN_100e4c18(param_1);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      *param_2 = iVar1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffff88;
  }
  return uVar2;
}

