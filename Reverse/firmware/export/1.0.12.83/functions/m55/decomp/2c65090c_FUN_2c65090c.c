/* FUN_2c65090c @ 0x2c65090c */

undefined4 FUN_2c65090c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puStack_c;
  
  puStack_c = param_2;
  if (param_2[6] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c65092c);
  }
  FUN_2c651a30(param_1,*param_2,param_2[1],&puStack_c,param_1);
  return param_1;
}

