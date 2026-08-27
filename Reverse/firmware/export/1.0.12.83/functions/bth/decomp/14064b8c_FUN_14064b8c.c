/* FUN_14064b8c @ 0x14064b8c */

void FUN_14064b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *DAT_14064be0;
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    uVar3 = FUN_14064244();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
  }
  if ((*DAT_14064be0 ^ uVar2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_14064be0 ^ uVar2,0);
}

