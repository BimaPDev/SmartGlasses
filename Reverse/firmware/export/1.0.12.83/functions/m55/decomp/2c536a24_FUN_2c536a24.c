/* FUN_2c536a24 @ 0x2c536a24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c536a24(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c536aa4,0x27b,_LAB_2c536aa0,_LAB_2c536a9c);
  }
  piVar2 = *(int **)(param_1 + 0xac);
  piVar4 = *(int **)(param_1 + 0xbc);
  piVar3 = *(int **)(param_1 + 0xb4);
  puVar5 = *(undefined4 **)(param_1 + 0xb8);
  do {
    if (piVar4 == piVar2) {
      return;
    }
    while( true ) {
      iVar1 = FUN_2c53084c(piVar2 + 3,param_2);
      if (iVar1 != 0) {
        if (*piVar2 != 0) {
          FUN_2c53c8a4(*piVar2,param_3);
        }
        if (piVar2[2] != 0) {
          FUN_2c53c8a4(piVar2[2],param_3);
        }
        if (piVar2[1] != 0) {
          FUN_2c53c8a4(piVar2[1],param_3);
        }
      }
      piVar2 = piVar2 + 7;
      if (piVar3 != piVar2) break;
      puVar5 = puVar5 + 1;
      piVar2 = (int *)*puVar5;
      piVar3 = piVar2 + 0x7e;
      if (piVar4 == piVar2) {
        return;
      }
    }
  } while( true );
}

