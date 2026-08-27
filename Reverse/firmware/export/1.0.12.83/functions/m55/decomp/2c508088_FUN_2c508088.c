/* FUN_2c508088 @ 0x2c508088 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c508088(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 0:
    piVar5 = *(int **)(param_1 + 8);
    pcVar3 = *(code **)(*piVar5 + 0x4c);
    iVar2 = FUN_2c63f82c();
    if (iVar2 == 1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    (*pcVar3)(piVar5,_LAB_2c508128,uVar1);
    piVar5 = *(int **)(param_1 + 4);
    puVar4 = (undefined4 *)*piVar5;
    pcVar3 = (code *)puVar4[4];
    break;
  case 1:
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_LAB_2c508128,3);
    piVar5 = *(int **)(param_1 + 4);
    puVar4 = (undefined4 *)*piVar5;
    pcVar3 = (code *)puVar4[5];
    break;
  case 2:
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_LAB_2c508128,4);
    piVar5 = *(int **)(param_1 + 4);
    puVar4 = (undefined4 *)*piVar5;
    pcVar3 = (code *)puVar4[6];
    break;
  case 3:
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_LAB_2c508128,5);
    piVar5 = *(int **)(param_1 + 4);
    puVar4 = (undefined4 *)*piVar5;
    pcVar3 = (code *)puVar4[7];
    break;
  case 4:
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),_LAB_2c508128,6);
    piVar5 = *(int **)(param_1 + 4);
    puVar4 = (undefined4 *)*piVar5;
    pcVar3 = (code *)puVar4[0xc];
    break;
  default:
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)*puVar4;
  uVar1 = (*pcVar3)(piVar5);
                    /* WARNING: Could not recover jumptable at 0x2c5080be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar5,uVar1);
  return;
}

