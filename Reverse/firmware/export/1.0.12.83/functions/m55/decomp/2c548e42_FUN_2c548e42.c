/* FUN_2c548e42 @ 0x2c548e42 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c548e42(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar4 = _LAB_2c5490c0;
  if (*_LAB_2c5490c0 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x34);
  FUN_2c674268(puVar1,0,0x34);
  uVar2 = _LAB_2c5490a0;
  *puVar1 = _LAB_2c5490a0;
  puVar1[1] = puVar1 + 3;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[7] = puVar1 + 9;
  puVar5 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar1;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = uVar2;
    if ((undefined4 *)puVar5[7] != puVar5 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    if ((undefined4 *)puVar5[1] != puVar5 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5);
  }
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0xdc);
  FUN_2c674268(puVar1,0,0xdc);
  uVar2 = _LAB_2c5490a4;
  puVar1[1] = puVar1 + 3;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[8] = puVar1 + 10;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xe] = puVar1 + 0x10;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x14] = puVar1 + 0x16;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x1b] = puVar1 + 0x1d;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  puVar1[0x21] = puVar1 + 0x23;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *puVar1 = uVar2;
  puVar1[0x29] = puVar1 + 0x2b;
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  *(undefined1 *)(puVar1 + 0x31) = 0;
  puVar1[0x2f] = puVar1 + 0x31;
  puVar5 = *(undefined4 **)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = puVar1;
  if (puVar5 == (undefined4 *)0x0) {
    uVar2 = FUN_2c48e42c(param_1,_LAB_2c5490b8);
    iVar3 = func_0x2c548c9c(uVar2,*(undefined4 *)(param_2 + 8));
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      uVar2 = FUN_2c48e42c(param_1,_LAB_2c5490bc);
      iVar3 = func_0x2c58cd20(uVar2,*(undefined4 *)(param_2 + 4));
      iVar3 = iVar3 >> 0x1f;
    }
    return iVar3;
  }
  piVar4 = (int *)puVar5[0x36];
  *puVar5 = uVar2;
  if (piVar4 != (int *)0x0) {
    if (*(code **)(*piVar4 + 8) == _LAB_2c5490a8) {
      *piVar4 = _LAB_2c5490ac;
      if ((int *)piVar4[0x12] != piVar4 + 0x14) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((int *)piVar4[8] != piVar4 + 10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((int *)piVar4[1] != piVar4 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar4);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if ((undefined4 *)puVar5[0x2f] != puVar5 + 0x31) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar5[0x29] != puVar5 + 0x2b) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *puVar5 = _LAB_2c5490b0;
  if ((undefined4 *)puVar5[0x21] != puVar5 + 0x23) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar5[0x1b] != puVar5 + 0x1d) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar1 = (undefined4 *)puVar5[0x1a];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = _LAB_2c5490b4;
    if ((undefined4 *)puVar1[0xd] != puVar1 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar1[7] != puVar1 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar1[1] != puVar1 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  if ((undefined4 *)puVar5[0x14] != puVar5 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar5[0xe] != puVar5 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar5[8] != puVar5 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar5[1] != puVar5 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar5);
}

