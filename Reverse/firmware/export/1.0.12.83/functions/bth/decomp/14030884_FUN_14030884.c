/* FUN_14030884 @ 0x14030884 */

void FUN_14030884(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 local_16;
  int local_14;
  
  uVar1 = DAT_1403095c;
  local_14 = *DAT_14030958;
  FUN_140e5338(0x19,&local_16,param_3,0);
  FUN_1402a6e8(4,0x247,DAT_14030964,DAT_14030960,uVar1,0x19,local_16);
  local_16 = FUN_14030834(local_16);
  FUN_1402e37c(0x3019);
  FUN_140e5338(0x1a,&local_16);
  FUN_1402a6e8(4,0x24c,DAT_14030964,DAT_14030960,uVar1,0x1a,local_16);
  local_16 = FUN_14030834(local_16);
  FUN_1402e37c(0x301a);
  FUN_140e5338(0x1c,&local_16);
  FUN_1402a6e8(4,0x251,DAT_14030964,DAT_14030960,uVar1,0x1c,local_16);
  local_16 = FUN_14030834(local_16);
  FUN_1402e37c(0x301c);
  if (*DAT_14030958 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

