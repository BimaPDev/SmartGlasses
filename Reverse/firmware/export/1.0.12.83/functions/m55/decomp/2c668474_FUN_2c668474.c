/* FUN_2c668474 @ 0x2c668474 */

void FUN_2c668474(void)

{
  int extraout_r2;
  undefined4 extraout_r3;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_2c66b418(6);
  uVar3 = FUN_2c4e67d0(1);
  iVar1 = DAT_2c6684bc;
  iVar2 = DAT_2c6684bc;
  if (extraout_r2 != 0) {
    iVar1 = DAT_2c6684b4;
    iVar2 = extraout_r2;
  }
  FUN_2c66898c(*(undefined4 *)(*DAT_2c6684b0 + 0xc),DAT_2c6684b8,extraout_r3,(int)uVar3,
               (int)((ulonglong)uVar3 >> 0x20),iVar1,iVar2,extraout_r3);
                    /* WARNING: Subroutine does not return */
  FUN_2c668474();
}

