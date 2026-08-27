/* FUN_2c62a47c @ 0x2c62a47c */

int FUN_2c62a47c(undefined4 *param_1)

{
  short *psVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)*DAT_2c62a49c, param_1 == (undefined4 *)0x0)) {
    return 0;
  }
  psVar1 = (short *)*param_1;
  if (-1 < (int)((uint)*(byte *)(psVar1 + 8) << 0x1b)) {
    return (int)*psVar1;
  }
  return (int)psVar1[1];
}

