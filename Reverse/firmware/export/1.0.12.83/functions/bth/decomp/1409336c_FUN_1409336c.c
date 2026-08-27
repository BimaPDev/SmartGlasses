/* FUN_1409336c @ 0x1409336c */

void FUN_1409336c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_17;
  undefined2 local_16;
  int local_14;
  
  uVar2 = *(undefined4 *)(param_1 + 0x350);
  local_14 = *DAT_140933d4;
  iVar1 = FUN_14079a94(uVar2,param_2,param_3,0);
  if (iVar1 != 0) {
    param_1 = param_1 + 0x10;
    iVar1 = FUN_140e54a8(param_1);
    if (2 < iVar1) {
      FUN_140e5448(param_1,&local_16);
      FUN_140e5448(param_1,&local_17);
      FUN_14079f18(uVar2,local_16,local_17);
    }
  }
  if (*DAT_140933d4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

