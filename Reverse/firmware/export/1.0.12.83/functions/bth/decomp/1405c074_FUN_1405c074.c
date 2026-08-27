/* FUN_1405c074 @ 0x1405c074 */

undefined4 FUN_1405c074(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  int local_24;
  undefined4 local_4;
  
  local_24 = *DAT_1405c100;
  uVar1 = *(undefined1 *)(DAT_1405c0fc + 0x2d);
  local_28 = 0;
  local_4 = param_4;
  if (param_3 == 0) {
    iVar3 = FUN_14073468(&local_28,7,8,0);
    if (iVar3 == 0) {
      FUN_1407393c(local_28,&local_4,8);
    }
    else {
      param_3 = 0x11;
    }
  }
  uVar2 = FUN_1406af68(param_1,uVar1,param_2,param_3,8,local_28);
  if (local_28 != 0) {
    FUN_140735a8(local_28);
  }
  if (*DAT_1405c100 == local_24) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

