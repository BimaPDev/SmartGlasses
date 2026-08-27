/* FUN_2c5b3de4 @ 0x2c5b3de4 */

void FUN_2c5b3de4(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_18;
  int local_14;
  uint local_c;
  
  local_c = *DAT_2c5b3e5c;
  local_18 = 0;
  local_14 = 0;
  uVar3 = FUN_2c5e31b4(0x2f,&local_18);
  uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    local_18 = 1;
    local_14 = 0;
  }
  else {
    if ((int)(uint)(local_18 < 3) <= local_14) {
      lVar4 = (ulonglong)uVar1 << 0x20;
      goto LAB_2c5b3e18;
    }
    bVar2 = 0xfffffffe < local_18;
    local_18 = local_18 + 1;
    local_14 = local_14 + (uint)bVar2;
  }
  lVar4 = FUN_2c5e317c(0x2f,uVar1,local_18,local_14,1);
  if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b3e68,0xeb,DAT_2c5b3e64,DAT_2c5b3e60);
  }
LAB_2c5b3e18:
  if ((*DAT_2c5b3e5c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),*DAT_2c5b3e5c ^ local_c,0);
}

