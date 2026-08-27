/* FUN_2c5fb9e0 @ 0x2c5fb9e0 */

char * FUN_2c5fb9e0(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  int local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = *DAT_2c5fba70;
  pcVar1 = (char *)0x0;
  uStack_20 = DAT_2c5fba6c;
  local_1c = 0;
  uStack_18 = 0;
  local_24 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else if (param_2[1] == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    FUN_2c5fa21c(&local_24,*param_2);
    FUN_2c5f6c14(&local_24);
    FUN_2c5f6c90(&local_24);
    uVar3 = FUN_2c5f6ba8(&local_24);
    param_2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
    pcVar1 = (char *)uVar3;
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fba80,0x26,DAT_2c5fba7c,DAT_2c5fba78,DAT_2c5fba74);
    }
    pcVar2 = pcVar1;
    if (*pcVar1 == '\0') {
      uVar3 = (**(code **)(param_1 + 8))(pcVar1);
      param_2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
      pcVar1 = (char *)uVar3;
      pcVar2 = (char *)0x0;
    }
  }
  if ((*DAT_2c5fba70 ^ local_14) == 0) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(pcVar1,param_2,*DAT_2c5fba70 ^ local_14,0);
}

