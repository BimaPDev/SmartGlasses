/* FUN_14065d14 @ 0x14065d14 */

bool FUN_14065d14(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_14065d60;
  local_1c = *DAT_14065d64;
  uStack_18 = DAT_14065d64[1];
  uStack_14 = DAT_14065d64[2];
  local_10 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_140db784(&local_1c,param_1,0x10);
  if (*DAT_14065d60 == local_c) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

