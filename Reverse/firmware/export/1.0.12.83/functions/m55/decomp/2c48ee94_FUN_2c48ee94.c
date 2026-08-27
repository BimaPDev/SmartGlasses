/* FUN_2c48ee94 @ 0x2c48ee94 */

void FUN_2c48ee94(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  uint local_14;
  
  local_14 = *DAT_2c48ef1c;
  if (param_1 == 1) {
    uVar1 = FUN_2c4fab44();
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x94,DAT_2c48ef28,DAT_2c48ef2c,DAT_2c48ef30,DAT_2c48ef24,param_1);
    }
    uVar1 = FUN_2c4f87b8();
  }
  uVar2 = FUN_2c48ed34(param_1,uVar1,&local_18);
  if ((int)uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9b,DAT_2c48ef28,DAT_2c48ef2c,DAT_2c48ef20,DAT_2c48ef24,param_1,uVar1,local_18);
  }
  if ((*DAT_2c48ef1c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0xffffffff,(int)((ulonglong)uVar2 >> 0x20),*DAT_2c48ef1c ^ local_14,0);
}

