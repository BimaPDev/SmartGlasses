/* FUN_2c5817ec @ 0x2c5817ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5817ec(int *param_1,int param_2,undefined4 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  piVar3 = _LAB_2c581974;
  if (*_LAB_2c581974 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x38);
  puVar7 = puVar1 + 3;
  *puVar1 = 0;
  puVar1[1] = puVar7;
  uVar2 = FUN_2c66c4ec(param_4);
  if (uVar2 < 0x10) {
    puVar5 = puVar7;
    if (uVar2 == 1) {
      *(undefined1 *)(puVar1 + 3) = *param_4;
    }
    else if (uVar2 != 0) goto LAB_2c58190e;
  }
  else {
    if (*piVar3 == 0) {
      FUN_2c4723c4();
      *piVar3 = 1;
    }
    puVar5 = (undefined4 *)FUN_2c47245c(0,uVar2 + 1);
    puVar1[1] = puVar5;
    puVar1[3] = uVar2;
LAB_2c58190e:
    FUN_2c674668(puVar5,param_4);
    puVar5 = (undefined4 *)puVar1[1];
  }
  puVar6 = puVar1 + 9;
  puVar1[2] = uVar2;
  *(undefined1 *)((int)puVar5 + uVar2) = 0;
  puVar1[7] = puVar6;
  uVar2 = FUN_2c66c4ec(param_5);
  if (uVar2 < 0x10) {
    puVar5 = puVar6;
    if (uVar2 == 1) {
      *(undefined1 *)(puVar1 + 9) = *param_5;
      goto LAB_2c581860;
    }
    if (uVar2 == 0) goto LAB_2c581860;
  }
  else {
    if (*piVar3 == 0) {
      FUN_2c4723c4();
      *piVar3 = 1;
    }
    puVar5 = (undefined4 *)FUN_2c47245c(0,uVar2 + 1);
    puVar1[7] = puVar5;
    puVar1[9] = uVar2;
  }
  FUN_2c674668(puVar5,param_5);
  puVar5 = (undefined4 *)puVar1[7];
LAB_2c581860:
  puVar1[8] = uVar2;
  *(undefined1 *)((int)puVar5 + uVar2) = 0;
  uVar2 = FUN_2c64c9f4(puVar1[1],puVar1[2],_LAB_2c581970);
  iVar4 = uVar2 - *(uint *)(param_2 + 4) * (uVar2 / *(uint *)(param_2 + 4));
  piVar3 = (int *)FUN_2c56a02c(param_2,iVar4,puVar1 + 1,uVar2);
  if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
    iVar4 = FUN_2c5815a4(param_2,iVar4,uVar2,puVar1,1);
    *param_1 = iVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  puVar5 = (undefined4 *)puVar1[7];
  *param_1 = *piVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar6 != puVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puVar7 == (undefined4 *)puVar1[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

