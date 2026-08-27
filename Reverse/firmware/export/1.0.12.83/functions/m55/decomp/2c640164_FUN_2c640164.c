/* FUN_2c640164 @ 0x2c640164 */

int FUN_2c640164(uint param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined1 local_28 [20];
  int local_14;
  
  local_14 = *DAT_2c6401f0;
  if (3 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c6401fc,0x3bd,DAT_2c6401f8,DAT_2c6401f4,param_1);
  }
  if ((param_1 == 0) && (iVar4 = FUN_2c48f590(), iVar4 == 0)) {
    bVar3 = FUN_2c48f590();
    uVar2 = DAT_2c640200;
    uVar1 = DAT_2c6401f8;
    *param_2 = bVar3 ^ 1;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c6401fc,0x3c4,uVar1,uVar2,bVar3 ^ 1);
  }
  iVar4 = FUN_2c63ed48(param_1,local_28,1);
  if (iVar4 != 0) {
    bVar3 = FUN_2c48f42c(local_28[0]);
    *param_2 = bVar3;
  }
  if (*DAT_2c6401f0 == local_14) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

