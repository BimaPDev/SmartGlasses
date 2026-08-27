/* FUN_2c63f824 @ 0x2c63f824 */

void FUN_2c63f824(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  
  uStack_1c = *DAT_2c63f868;
  uVar1 = FUN_2c63ed48(3,auStack_30,1,0);
  if ((int)uVar1 == 0) {
    auStack_30[0] = 0xffffffff;
  }
  if ((*DAT_2c63f868 ^ uStack_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(auStack_30[0],(int)((ulonglong)uVar1 >> 0x20),*DAT_2c63f868 ^ uStack_1c,0);
  }
  return;
}

