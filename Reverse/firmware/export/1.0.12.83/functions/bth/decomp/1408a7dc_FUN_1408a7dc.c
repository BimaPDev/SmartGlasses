/* FUN_1408a7dc @ 0x1408a7dc */

int FUN_1408a7dc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = DAT_1408a80c;
  do {
    piVar4 = piVar3 + 1;
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + 0x14);
      do {
        piVar3 = piVar3 + 1;
        iVar1 = *piVar3;
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_1)) {
          return iVar1;
        }
      } while (piVar3 != (int *)(iVar2 + 0x44));
    }
    piVar3 = piVar4;
    if (DAT_1408a80c + 8 == piVar4) {
      return 0;
    }
  } while( true );
}

