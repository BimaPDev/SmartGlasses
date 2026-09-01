/* FUN_10134ab0 @ 0x10134ab0 */

int FUN_10134ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100d023c(30000,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = param_5;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    *(code **)(iVar1 + 0xc) = param_4;
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    iVar2 = FUN_100cfd10(param_1,param_5,param_6);
    if (iVar2 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      iVar2 = (*param_4)(iVar2,param_6,param_3);
      if ((iVar2 == 0) && (iVar2 = FUN_100d05b8(param_1,iVar1), iVar2 == 0)) {
        return 0;
      }
      FUN_100d0268(iVar1);
      return iVar2;
    }
    FUN_100d0268(iVar1);
  }
  return -0xc;
}

