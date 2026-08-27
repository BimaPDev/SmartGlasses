/* FUN_2c57bae0 @ 0x2c57bae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57bae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1[9];
  *param_1 = _LAB_2c57bc44;
  uVar1 = _LAB_2c57bc4c;
  if (puVar5 == (undefined4 *)0x0) {
    *param_1 = _LAB_2c57bc4c;
    if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1,uVar1,param_1 + 5,param_4);
  }
  piVar4 = (int *)puVar5[3];
  *puVar5 = _LAB_2c57bc48;
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != piVar4) {
      piVar2[2] = _LAB_2c57bc50;
      if ((int *)piVar2[3] != piVar2 + 5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar2,param_3,piVar2 + 5,param_4);
    }
    thunk_FUN_2c669588(piVar4,0xc);
  }
  iVar3 = puVar5[1];
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5);
  }
  piVar4 = *(int **)(iVar3 + 8);
  if (piVar4 != (int *)0x0) {
    if ((int *)piVar4[0x14] != piVar4 + 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)piVar4[0xe] != piVar4 + 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (piVar4[0xc] != 0) {
      FUN_2c58d410(piVar4 + 0xc);
    }
    if (piVar4[0xb] != 0) {
      FUN_2c58d410(piVar4 + 0xb);
    }
    if (piVar4[10] != 0) {
      FUN_2c58d410(piVar4 + 10);
    }
    if (piVar4[9] != 0) {
      FUN_2c58d410(piVar4 + 9);
    }
    if (piVar4[8] != 0) {
      FUN_2c58d410(piVar4 + 8);
    }
    if (piVar4[7] != 0) {
      FUN_2c58d410(piVar4 + 7);
    }
    if (piVar4[6] != 0) {
      FUN_2c58d410(piVar4 + 6);
    }
    if (piVar4[5] != 0) {
      FUN_2c58d410(piVar4 + 5);
    }
    if (piVar4[4] != 0) {
      FUN_2c58d410(piVar4 + 4);
    }
    if (piVar4[3] != 0) {
      FUN_2c58d410(piVar4 + 3);
    }
    if (piVar4[2] != 0) {
      FUN_2c58d410(piVar4 + 2);
    }
    if (piVar4[1] != 0) {
      FUN_2c58d410(piVar4 + 1);
    }
    if (*piVar4 != 0) {
      FUN_2c58d410(piVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  if (*(int **)(iVar3 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 4) + 0x10))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar3);
}

