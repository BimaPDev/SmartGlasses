/* FUN_2c604188 @ 0x2c604188 */

int FUN_2c604188(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  while (iVar4 = iVar2, iVar4 != 0) {
    param_1 = iVar4;
    iVar2 = *(int *)(iVar4 + 4);
  }
  iVar2 = FUN_2c62ca10(DAT_2c6041d0);
  uVar1 = DAT_2c6041d0;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x28) != 0) {
      iVar4 = 0;
      piVar3 = (int *)(*(int *)(iVar2 + 0xc) + -4);
      do {
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + 1;
        if (*piVar3 == param_1) {
          return iVar2;
        }
      } while (iVar4 != *(int *)(iVar2 + 0x28));
    }
    iVar2 = FUN_2c62ca20(uVar1,iVar2);
  } while( true );
}

