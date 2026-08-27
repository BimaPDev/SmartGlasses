/* FUN_2c58cbd0 @ 0x2c58cbd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c58cbd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_2c58ccd8;
  if (param_1 == 0) {
    return -1;
  }
  if (*DAT_2c58ccd8 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x1c);
  puVar2[6] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uVar4 = DAT_2c58ccdc;
  *puVar2 = DAT_2c58ccdc;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[1] = puVar2 + 3;
  puVar5 = *(undefined4 **)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = puVar2;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = uVar4;
    if ((undefined4 *)puVar5[1] != puVar5 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5);
  }
  iVar3 = FUN_2c48e42c(param_1,_LAB_2c58cce0,0,puVar2,param_4);
  if ((iVar3 == 0) ||
     (iVar3 = FUN_2c55700c(iVar3,_LAB_2c58cce4,*(int *)(param_2 + 8) + 4,0), iVar3 < 0)) {
    return -1;
  }
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,8);
  uVar4 = _LAB_2c58cce8;
  *puVar2 = _LAB_2c58cce8;
  puVar2[1] = 0;
  puVar5 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = FUN_2c48e42c(param_1,_LAB_2c58ccf0);
    iVar3 = FUN_2c58cb1c(uVar4,*(undefined4 *)(param_2 + 4));
    return iVar3 >> 0x1f;
  }
  puVar2 = (undefined4 *)puVar5[1];
  *puVar5 = uVar4;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5);
  }
  *puVar2 = _LAB_2c58ccec;
  if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar2[7] != puVar2 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar2[1] != puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar2);
}

