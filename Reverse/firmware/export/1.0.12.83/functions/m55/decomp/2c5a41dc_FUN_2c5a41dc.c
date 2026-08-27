/* FUN_2c5a41dc @ 0x2c5a41dc */

void FUN_2c5a41dc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 200);
  do {
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x5f2,DAT_2c5a4220,LAB_2c5a4228,DAT_2c5a4224,iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 7);
  return;
}

