/* FUN_2c4723c4 @ 0x2c4723c4 */

void FUN_2c4723c4(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = DAT_2c47244c;
  piVar1 = DAT_2c472430;
  if (*DAT_2c472430 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc0,DAT_2c472440,DAT_2c47243c,DAT_2c472438,DAT_2c472434);
  }
  FUN_2c674268(DAT_2c472448,0,DAT_2c472444);
  iVar5 = FUN_2c4732a0(DAT_2c472448,DAT_2c472444);
  iVar6 = *piVar2;
  *piVar1 = iVar5;
  if (iVar6 == 0) {
    iVar5 = FUN_2c64419c(DAT_2c472458);
    *piVar2 = iVar5;
  }
  uVar3 = DAT_2c472454;
  *DAT_2c472450 = DAT_2c472444;
  FUN_2c49b090();
  cVar4 = FUN_2c49b170();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xd9,DAT_2c472440,DAT_2c47243c,uVar3,cVar4 + -2);
}

