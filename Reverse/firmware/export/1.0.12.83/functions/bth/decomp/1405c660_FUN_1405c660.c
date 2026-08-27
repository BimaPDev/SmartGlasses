/* FUN_1405c660 @ 0x1405c660 */

undefined4
FUN_1405c660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_1405c6dc;
  local_28 = 0;
  iVar1 = FUN_14073468(&local_28,7,param_4,0);
  if (iVar1 == 0) {
    FUN_1407393c(local_28,param_5,param_4);
    uVar2 = FUN_14067ccc(param_1,*(undefined1 *)(DAT_1405c6e0 + 0x4f),param_2,0,param_3,0,local_28);
    FUN_140735a8(local_28);
  }
  else {
    uVar2 = 0x11;
  }
  if (*DAT_1405c6dc == local_24) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

