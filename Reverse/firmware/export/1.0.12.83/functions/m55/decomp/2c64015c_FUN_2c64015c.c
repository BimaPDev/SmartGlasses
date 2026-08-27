/* FUN_2c64015c @ 0x2c64015c */

int FUN_2c64015c(uint param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int unaff_r4;
  undefined1 auStack_3c [20];
  int iStack_28;
  int iStack_20;
  
  iStack_20 = unaff_r4 + -0x7e;
  iStack_28 = *DAT_2c6401f0;
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
  iVar4 = FUN_2c63ed48(param_1,auStack_3c,1);
  if (iVar4 != 0) {
    bVar3 = FUN_2c48f42c(auStack_3c[0]);
    *param_2 = bVar3;
  }
  if (*DAT_2c6401f0 == iStack_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

