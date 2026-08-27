/* FUN_2c604458 @ 0x2c604458 */

void FUN_2c604458(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_2c607df0();
  FUN_2c606bc8(param_2);
  iVar1 = FUN_2c604204(param_1);
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = (iVar1 + 1) * 4;
  do {
    piVar3 = *(int **)(iVar4 + 8);
    if (piVar3 == (int *)0x0) {
      if (-2 < iVar1) goto LAB_2c6044ae;
    }
    else if (piVar3[1] + -1 <= iVar1) {
LAB_2c6044ae:
      piVar3[1] = piVar3[1] + -1;
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if (puVar5[1] == 0) {
        FUN_2c62bea8(*puVar5);
        **(undefined4 **)(iVar4 + 8) = 0;
      }
      else {
        uVar2 = FUN_2c62bebc(*puVar5,puVar5[1] << 2);
        *puVar5 = uVar2;
      }
      *(int *)(*(int *)(param_2 + 8) + 4) = *(int *)(*(int *)(param_2 + 8) + 4) + 1;
      puVar5 = *(undefined4 **)(param_2 + 8);
      uVar2 = FUN_2c62bebc(*puVar5,puVar5[1] << 2);
      *puVar5 = uVar2;
      *(int *)(**(int **)(param_2 + 8) + ((*(int **)(param_2 + 8))[1] + 0x3fffffff) * 4) = param_1;
      *(int *)(param_1 + 4) = param_2;
      FUN_2c605b80(iVar4,0);
      FUN_2c605b10(iVar4);
      FUN_2c602340(iVar4,0x22,param_1);
      FUN_2c602340(iVar4,0x24,0);
      FUN_2c602340(param_2,0x22,param_1);
      FUN_2c602340(param_2,0x23,0);
      FUN_2c607248(param_1);
      FUN_2c607df0(param_1);
      return;
    }
    puVar5 = (undefined4 *)(*piVar3 + iVar6);
    iVar6 = iVar6 + 4;
    *(undefined4 *)(*piVar3 + iVar1 * 4) = *puVar5;
    iVar1 = iVar1 + 1;
  } while( true );
}

