/* FUN_2c5cebc8 @ 0x2c5cebc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cebc8(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_2[1];
  piVar3 = (int *)*param_2;
  do {
    piVar1 = piVar3;
    if (piVar1 == piVar4) {
      return;
    }
    piVar3 = piVar1 + 1;
  } while (*piVar1 != param_3);
  if (piVar4 != piVar3) {
    FUN_2c673eb8(piVar1,piVar3,(int)piVar4 - (int)piVar3);
    piVar3 = (int *)param_2[1];
  }
  uVar2 = _LAB_2c5cec14;
  param_2[1] = (int)(piVar3 + -1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cec1c,0x1f0,_LAB_2c5cec18,uVar2,param_3);
}

