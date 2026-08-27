/* FUN_2c5de7b0 @ 0x2c5de7b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5de7b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  undefined4 local_1c;
  
  piVar2 = *(int **)(param_1 + 0x24);
  piVar1 = *(int **)(param_1 + 0x14);
  local_1c = *_LAB_2c5de904;
  if (piVar2 != piVar1) {
    do {
      if (*(int **)(param_1 + 0x28) == piVar2) {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + -4) + 0x1fc);
        if (iVar3 != 0) {
          local_20 = iVar3;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        break;
      }
      iVar3 = piVar2[-1];
      if (iVar3 == 0) break;
      piVar2 = piVar2 + -1;
      *(int **)(param_1 + 0x24) = piVar2;
      local_20 = iVar3;
      if (piVar1 == piVar2) {
        iVar5 = 0;
        iVar4 = 0;
        if (piVar2 != (int *)(*(int *)(param_1 + 0x2c) + -4)) goto LAB_2c5de7fa;
LAB_2c5de8d0:
        FUN_2c5de330(param_1 + 0xc,&local_20);
      }
      else {
        piVar1 = piVar2;
        if (*(int **)(param_1 + 0x28) == piVar2) {
          piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x30) + -4) + 0x200);
        }
        iVar4 = piVar1[-1];
        iVar5 = iVar4;
        if (piVar2 == (int *)(*(int *)(param_1 + 0x2c) + -4)) goto LAB_2c5de8d0;
LAB_2c5de7fa:
        *piVar2 = iVar3;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
        iVar4 = iVar5;
      }
      if (iVar4 == 0) {
        if (param_2 != 0) {
          *(int *)(param_1 + 0x40) = iVar3;
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5de910,0x156,_LAB_2c5de90c,_LAB_2c5de918,
                       *(undefined4 *)(iVar3 + 0xc));
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        FUN_2c5dfac4(param_1,iVar3);
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 == *(int *)(param_1 + 0x28)) goto LAB_2c5de872;
      }
      else {
        FUN_2c5dfac4(param_1,iVar3);
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 == *(int *)(param_1 + 0x28)) {
LAB_2c5de872:
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
      }
      piVar2 = (int *)(iVar3 + -4);
      *(int **)(param_1 + 0x24) = piVar2;
      piVar1 = *(int **)(param_1 + 0x14);
    } while (piVar1 != piVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5de910,0x14b,_LAB_2c5de90c,_LAB_2c5de908);
}

