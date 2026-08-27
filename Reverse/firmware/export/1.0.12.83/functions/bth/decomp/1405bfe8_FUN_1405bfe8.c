/* FUN_1405bfe8 @ 0x1405bfe8 */

undefined4 FUN_1405bfe8(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_22;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_1405c070;
  uVar1 = *(undefined1 *)(DAT_1405c06c + 0x2d);
  local_20 = 0;
  local_22 = param_4;
  if (param_3 == 0) {
    iVar3 = FUN_14073468(&local_20,7,2,0);
    if (iVar3 == 0) {
      FUN_1407393c(local_20,&local_22,2);
    }
    else {
      param_3 = 0x11;
    }
  }
  uVar2 = FUN_1406af68(param_1,uVar1,param_2,param_3,2,local_20);
  if (local_20 != 0) {
    FUN_140735a8(local_20);
  }
  if (*DAT_1405c070 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

