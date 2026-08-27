/* FUN_14030c98 @ 0x14030c98 */

undefined4 FUN_14030c98(char *param_1,undefined4 param_2)

{
  int iVar1;
  short local_28 [8];
  undefined2 local_18;
  char local_16;
  int local_14;
  
  local_14 = *DAT_14030d90;
  local_18 = (undefined2)*DAT_14030d8c;
  local_16 = (char)((uint)*DAT_14030d8c >> 0x10);
  FUN_14026abc(0);
  FUN_1402a6e8(4,0x1e7,DAT_14030d9c,DAT_14030d98,DAT_14030d94,param_1,param_1 + 7);
  FUN_1402a9fc(DAT_14030da0,1,param_2,param_1);
  if (((*param_1 == (char)local_18) && (param_1[1] == local_18._1_1_)) && (param_1[2] == local_16))
  {
    iVar1 = FUN_14038c00(local_28,0x10,param_1 + 7);
    if (iVar1 != 0) {
      FUN_1402a6e8(4,0x1ed,DAT_14030d9c,DAT_14030d98,DAT_14030da8,DAT_14030da4,0x1ed,iVar1);
    }
    if (local_28[0] != 0) {
      iVar1 = FUN_14038c00(DAT_14030dac,0x10,local_28);
      if (iVar1 != 0) {
        FUN_1402a6e8(4,499,DAT_14030d9c,DAT_14030d98,DAT_14030da8,DAT_14030da4,499,iVar1);
      }
      if (*DAT_14030db0 != 0) {
        FUN_140e5198(*DAT_14030db0,4);
      }
    }
  }
  FUN_14026a60(0);
  if (*DAT_14030d90 == local_14) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

