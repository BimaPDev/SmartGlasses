/* FUN_140c3a9c @ 0x140c3a9c */

undefined4 FUN_140c3a9c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puStack_c;
  
  puStack_c = param_2;
  if (param_2[6] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140cb800(DAT_140c3abc);
  }
  FUN_140c4bb4(param_1,*param_2,param_2[1],&puStack_c,param_1);
  return param_1;
}

