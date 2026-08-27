/* FUN_140ae9ec @ 0x140ae9ec */

void FUN_140ae9ec(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  local_14 = *DAT_140aea64;
  FUN_1402a6e8(4,0xe,DAT_140aea6c,DAT_140aea68,DAT_140aea5c,DAT_140aea60,param_1,param_2,param_3);
  *DAT_140aea70 = (char)param_2;
  if ((param_2 == 2) && (iVar1 = FUN_140af300(), iVar1 != 0xff)) {
    FUN_140af300();
    FUN_14044eb4();
  }
  local_18 = 9;
  local_17 = (char)param_2;
  FUN_140afd14(&local_18,2);
  if (*DAT_140aea64 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

