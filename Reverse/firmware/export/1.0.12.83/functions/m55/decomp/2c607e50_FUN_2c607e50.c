/* FUN_2c607e50 @ 0x2c607e50 */

void FUN_2c607e50(int param_1)

{
  ulonglong uVar1;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  uint local_c;
  
  local_c = *DAT_2c607ebc;
  local_14 = FUN_2c600c2c();
  local_e = *(short *)(param_1 + 0x1a) + local_14;
  local_10 = local_14 + *(short *)(param_1 + 0x18);
  local_12 = *(short *)(param_1 + 0x16) - local_14;
  local_14 = *(short *)(param_1 + 0x14) - local_14;
  uVar1 = FUN_2c606b94(param_1,1);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_2c6077d0(param_1,&local_14);
  }
  else {
    uVar1 = uVar1 & 0xffffffff00000000;
  }
  if ((*DAT_2c607ebc ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar1,(int)(uVar1 >> 0x20),*DAT_2c607ebc ^ local_c,0);
}

