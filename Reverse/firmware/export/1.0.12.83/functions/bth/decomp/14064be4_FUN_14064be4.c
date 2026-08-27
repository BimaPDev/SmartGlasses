/* FUN_14064be4 @ 0x14064be4 */

void FUN_14064be4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 ushort param_5,byte param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *DAT_14064c44;
  if ((param_6 < 3) && (param_4 <= param_5)) {
    uVar3 = FUN_14064244();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
  }
  else {
    uVar1 = 0x40;
  }
  if ((*DAT_14064c44 ^ uVar2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_14064c44 ^ uVar2,0);
}

