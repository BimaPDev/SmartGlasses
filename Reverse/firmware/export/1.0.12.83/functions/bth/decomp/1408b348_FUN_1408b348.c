/* FUN_1408b348 @ 0x1408b348 */

int FUN_1408b348(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 != 0x33) {
    iVar3 = FUN_1408ae80();
    return iVar3;
  }
  iVar3 = FUN_1408ae80();
  uVar2 = DAT_1408b3a0;
  if (iVar3 != 0) {
    piVar1 = (int *)(DAT_1408b39c + 8);
    piVar5 = (int *)*piVar1;
    if (piVar5 != piVar1) {
      iVar4 = 0x3ea;
      do {
        if ((short)piVar5[2] == 0x33) {
          if (*(char *)((int)piVar5 + 10) < '\x01') {
            return iVar3;
          }
          *(char *)((int)piVar5 + 10) = *(char *)((int)piVar5 + 10) + -1;
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,uVar2);
        }
        iVar4 = iVar4 + -1;
        piVar5 = (int *)*piVar5;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1408a810();
        }
      } while (piVar5 != piVar1);
    }
  }
  return iVar3;
}

