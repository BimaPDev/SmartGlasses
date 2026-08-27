/* FUN_2c474018 @ 0x2c474018 */

/* WARNING: Control flow encountered bad instruction data */

uint FUN_2c474018(uint param_1,byte *param_2)

{
  uint uVar1;
  
  if (4 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *param_2 & 0x7f;
  if (((1 < param_1) && (uVar1 = uVar1 | (param_2[1] & 0x7f) << 7, param_1 != 2)) &&
     (uVar1 = uVar1 | (param_2[2] & 0x7f) << 0xe, param_1 != 3)) {
    uVar1 = uVar1 | (param_2[3] & 0x7f) << 0x15;
  }
  return uVar1;
}

