/* FUN_2c4c05b0 @ 0x2c4c05b0 */

undefined4 FUN_2c4c05b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  
  pcVar1 = DAT_2c4c05f8;
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c0600,param_1,param_3,param_4,param_4);
  }
  DAT_2c4c05f8[param_2] = '\0';
  if ((*pcVar1 == '\0') && (pcVar1[1] == '\0')) {
    *DAT_2c4c05fc = *DAT_2c4c05fc & 0xfffffffe;
    FUN_2c673af8(0x2c);
    FUN_2c673af8(0x5f);
    FUN_2c673ce8(0x2c);
    FUN_2c673ce8(0x5f);
    FUN_2c674728();
    return 0;
  }
  return 0;
}

