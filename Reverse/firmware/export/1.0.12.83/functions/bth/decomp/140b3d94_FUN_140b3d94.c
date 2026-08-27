/* FUN_140b3d94 @ 0x140b3d94 */

undefined4 FUN_140b3d94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c;
  
  uVar1 = DAT_140b3e1c;
  local_1c = *DAT_140b3e24;
  FUN_1402a6e8(4,0x213,DAT_140b3e2c,DAT_140b3e28,DAT_140b3e20,DAT_140b3e1c,param_2);
  local_24 = 0;
  uStack_20 = 0;
  FUN_1402a6e8(4,0x218,DAT_140b3e2c,DAT_140b3e28,DAT_140b3e30,uVar1,param_1);
  FUN_140dc3ec(param_1,DAT_140b3e34,&local_24,&uStack_20);
  FUN_1402a6e8(4,0x23d,DAT_140b3e2c,DAT_140b3e28,DAT_140b3e38,uVar1,local_24,uStack_20);
  if (*DAT_140b3e24 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

