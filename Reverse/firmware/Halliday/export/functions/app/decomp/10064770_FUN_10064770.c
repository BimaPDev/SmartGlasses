/* FUN_10064770 @ 0x10064770 */

undefined4 FUN_10064770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  if (*DAT_1006479c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100647a8,0x16c,DAT_100647a4,DAT_100647a0);
  }
  FUN_1011dc6e(*DAT_1006479c,param_1,0x8e,&local_c,param_1);
  return local_c;
}

