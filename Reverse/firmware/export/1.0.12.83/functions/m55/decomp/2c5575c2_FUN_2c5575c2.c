/* FUN_2c5575c2 @ 0x2c5575c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5575c2(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_2 + 4);
  param_1[2] = param_4;
  param_1[3] = *(int *)(param_2 + 0xc);
  *param_1 = param_4;
  param_1[1] = iVar5;
  iVar4 = *(int *)(param_2 + 0x14);
  param_1[4] = *(int *)(param_2 + 0x10);
  param_1[5] = iVar4;
  param_1[6] = param_4;
  piVar1 = _LAB_2c5576d0;
  if (iVar5 == 1) {
    piVar1 = param_1 + 6;
  }
  else {
    if (*_LAB_2c5576d0 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    piVar1 = (int *)FUN_2c47245c(0,iVar5 << 2);
    FUN_2c674268(piVar1,0,iVar5 << 2);
  }
  piVar6 = *(int **)(param_2 + 8);
  *param_1 = (int)piVar1;
  piVar1 = _LAB_2c5576d0;
  if (piVar6 != (int *)0x0) {
    if (*_LAB_2c5576d0 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,0xc);
    *puVar2 = 0;
    iVar4 = piVar6[2];
    puVar2[1] = piVar6[1];
    puVar2[2] = iVar4;
    param_1[2] = (int)puVar2;
    *(int **)(*param_1 + (puVar2[1] - param_1[1] * ((uint)puVar2[1] / (uint)param_1[1])) * 4) =
         param_1 + 2;
    for (piVar6 = (int *)*piVar6; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
      while( true ) {
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        puVar3 = (undefined4 *)FUN_2c47245c(0,0xc);
        *puVar3 = 0;
        iVar4 = piVar6[2];
        puVar3[1] = piVar6[1];
        puVar3[2] = iVar4;
        *puVar2 = puVar3;
        iVar4 = puVar3[1] - param_1[1] * ((uint)puVar3[1] / (uint)param_1[1]);
        if (*(int *)(*param_1 + iVar4 * 4) == 0) break;
        piVar6 = (int *)*piVar6;
        puVar2 = puVar3;
        if (piVar6 == (int *)0x0) {
          return param_1;
        }
      }
      *(undefined4 **)(*param_1 + iVar4 * 4) = puVar2;
      puVar2 = puVar3;
    }
  }
  return param_1;
}

