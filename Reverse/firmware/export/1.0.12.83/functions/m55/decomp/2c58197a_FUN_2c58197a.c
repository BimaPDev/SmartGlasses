/* FUN_2c58197a @ 0x2c58197a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c58197a(int *param_1,int param_2,int *param_3,undefined1 *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (*param_3 == 0) {
    FUN_2c4723c4();
    *_LAB_2c581abc = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x38);
  puVar9 = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = puVar9;
  uVar3 = FUN_2c66c4ec(param_4);
  if (uVar3 < 0x10) {
    puVar6 = puVar9;
    if (uVar3 == 1) {
      *(undefined1 *)(puVar2 + 3) = *param_4;
      goto LAB_2c5819c2;
    }
    if (uVar3 == 0) goto LAB_2c5819c2;
  }
  else {
    if (*_LAB_2c581abc == 0) {
      FUN_2c4723c4();
      *_LAB_2c581abc = 1;
    }
    puVar6 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    puVar2[3] = uVar3;
    puVar2[1] = puVar6;
  }
  FUN_2c674668(puVar6,param_4,uVar3);
  puVar6 = (undefined4 *)puVar2[1];
LAB_2c5819c2:
  puVar2[2] = uVar3;
  *(undefined1 *)((int)puVar6 + uVar3) = 0;
  puVar2[7] = puVar2 + 9;
  if ((int *)*param_5 == param_5 + 2) {
    iVar5 = param_5[3];
    iVar7 = param_5[4];
    iVar8 = param_5[5];
    puVar2[9] = param_5[2];
    puVar2[10] = iVar5;
    puVar2[0xb] = iVar7;
    puVar2[0xc] = iVar8;
  }
  else {
    puVar2[7] = (int *)*param_5;
    puVar2[9] = param_5[2];
  }
  *param_5 = (int)(param_5 + 2);
  uVar1 = _LAB_2c581ac0;
  puVar2[8] = param_5[1];
  param_5[1] = 0;
  *(undefined1 *)(param_5 + 2) = 0;
  uVar3 = FUN_2c64c9f4(puVar2[1],puVar2[2],uVar1);
  iVar5 = uVar3 - *(uint *)(param_2 + 4) * (uVar3 / *(uint *)(param_2 + 4));
  piVar4 = (int *)FUN_2c56a02c(param_2,iVar5,puVar2 + 1,uVar3);
  if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
    iVar5 = FUN_2c5815a4(param_2,iVar5,uVar3,puVar2,1);
    *param_1 = iVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  puVar6 = (undefined4 *)puVar2[7];
  *param_1 = *piVar4;
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar2 + 9 != puVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puVar9 == (undefined4 *)puVar2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

