/* FUN_10064734 @ 0x10064734 */

undefined4 FUN_10064734(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  if (*DAT_10064760 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_1006476c,0x161,DAT_10064768,DAT_10064764);
  }
  FUN_1011dc6e(*DAT_10064760,param_1,0x8d,&local_c,param_1);
  return local_c;
}

