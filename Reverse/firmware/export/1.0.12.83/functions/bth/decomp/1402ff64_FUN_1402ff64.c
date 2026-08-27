/* FUN_1402ff64 @ 0x1402ff64 */

void FUN_1402ff64(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  ushort uVar2;
  ushort local_e;
  uint local_c;
  
  local_c = *DAT_1402ffd4;
  if (param_1 == 0) {
    FUN_1402e37c(0x5e,0xc00,param_3,0);
    uVar2 = 0;
  }
  else if (param_1 == 1) {
    uVar2 = 8;
  }
  else if (param_1 == 2) {
    uVar2 = 0x10;
  }
  else {
    if (param_1 != 3) {
      uVar1 = 1;
      goto LAB_1402ffaa;
    }
    uVar2 = 0x18;
  }
  FUN_1402e1fc(0x44,&local_e);
  local_e = local_e & 0xffe7 | uVar2;
  FUN_1402e37c(0x44);
  uVar1 = 0;
  param_2 = extraout_r1;
LAB_1402ffaa:
  if ((*DAT_1402ffd4 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_1402ffd4 ^ local_c,0);
}

