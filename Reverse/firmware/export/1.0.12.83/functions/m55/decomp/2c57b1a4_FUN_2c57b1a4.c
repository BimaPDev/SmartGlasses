/* FUN_2c57b1a4 @ 0x2c57b1a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57b1a4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = _LAB_2c57b2b4;
  if (*_LAB_2c57b2b4 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0xc);
  *puVar1 = param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = puVar1;
  if (iVar3 == 0) {
    return;
  }
  piVar2 = *(int **)(iVar3 + 8);
  if (piVar2 != (int *)0x0) {
    if ((int *)piVar2[0x14] != piVar2 + 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((int *)piVar2[0xe] != piVar2 + 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (piVar2[0xc] != 0) {
      FUN_2c58d410(piVar2 + 0xc);
    }
    if (piVar2[0xb] != 0) {
      FUN_2c58d410(piVar2 + 0xb);
    }
    if (piVar2[10] != 0) {
      FUN_2c58d410(piVar2 + 10);
    }
    if (piVar2[9] != 0) {
      FUN_2c58d410(piVar2 + 9);
    }
    if (piVar2[8] != 0) {
      FUN_2c58d410(piVar2 + 8);
    }
    if (piVar2[7] != 0) {
      FUN_2c58d410(piVar2 + 7);
    }
    if (piVar2[6] != 0) {
      FUN_2c58d410(piVar2 + 6);
    }
    if (piVar2[5] != 0) {
      FUN_2c58d410(piVar2 + 5);
    }
    if (piVar2[4] != 0) {
      FUN_2c58d410(piVar2 + 4);
    }
    if (piVar2[3] != 0) {
      FUN_2c58d410(piVar2 + 3);
    }
    if (piVar2[2] != 0) {
      FUN_2c58d410(piVar2 + 2);
    }
    if (piVar2[1] != 0) {
      FUN_2c58d410(piVar2 + 1);
    }
    if (*piVar2 != 0) {
      FUN_2c58d410(piVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar2);
  }
  if (*(int **)(iVar3 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 4) + 0x10))();
  }
  puVar1 = DAT_2c4726d4;
  piVar2 = DAT_2c4726d0;
  if (iVar3 != 0) {
    if (*DAT_2c4726d0 != 0) {
      FUN_2c644044(*DAT_2c4726d4,0xffffffff);
      FUN_2c47231c(*piVar2,DAT_2c4726d8,0,iVar3);
      FUN_2c644080(*puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
  }
  return;
}

