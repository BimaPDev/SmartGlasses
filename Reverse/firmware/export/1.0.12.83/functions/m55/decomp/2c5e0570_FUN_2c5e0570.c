/* FUN_2c5e0570 @ 0x2c5e0570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e0570(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar3 = _LAB_2c5e06c0;
  iStack_1c = *DAT_2c5e06bc;
  iStack_24 = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e06cc,0x6e,_LAB_2c5e06c8,_LAB_2c5e06d4,_LAB_2c5e06d0);
  }
  if (_LAB_2c5e06c0[1] != *_LAB_2c5e06c0) {
    if (0xff < *(ushort *)(param_2 + 0x1a)) {
      iVar1 = FUN_2c5def1c();
      if (iVar1 != 0) {
        piVar4 = (int *)*piVar3;
        piVar3 = (int *)piVar3[1];
        iStack_20 = iStack_24;
        if (piVar3 == piVar4) {
          if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5e06cc,0x86,_LAB_2c5e06c8,_LAB_2c5e06c4);
          }
        }
        else {
          iVar1 = 0;
          do {
            piVar5 = piVar4 + 1;
            iVar2 = FUN_2c5def1c(*piVar4);
            if (((iVar2 == 0) || (*(ushort *)(iStack_24 + 0x1a) < 0x100)) || (iVar1 != 0)) {
              iVar2 = *piVar4;
            }
            else {
              iVar2 = *piVar4;
              iVar1 = iVar2;
            }
            iVar2 = func_0x2c5def4c(iVar2);
            if (iVar2 != 0) {
              if (*(ushort *)(*piVar4 + 0x1a) < *(ushort *)(iStack_20 + 0x1a)) {
                iStack_20 = *piVar4;
              }
            }
            piVar4 = piVar5;
          } while (piVar3 != piVar5);
          if (iStack_24 != iVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5e06cc,0x86,_LAB_2c5e06c8,_LAB_2c5e06c4);
          }
          if (iVar1 != 0) {
            piVar3 = *(int **)(param_4 + 4);
            if (piVar3 == *(int **)(param_4 + 8)) {
              FUN_2c5dda50(param_4,piVar3,&iStack_24);
            }
            else {
              *piVar3 = iStack_24;
              *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
            }
            piVar3 = *(int **)(param_3 + 4);
            if (piVar3 == *(int **)(param_3 + 8)) {
              FUN_2c5dda50(param_3,piVar3,&iStack_20);
            }
            else {
              *piVar3 = iStack_20;
              *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
            }
            goto LAB_2c5e05ae;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5e06cc,0x89,_LAB_2c5e06c8,_LAB_2c5e06d4,_LAB_2c5e06d8);
      }
      goto LAB_2c5e05ae;
    }
  }
  piVar3 = *(int **)(param_4 + 4);
  if (piVar3 == *(int **)(param_4 + 8)) {
    FUN_2c5dda50(param_4,piVar3,&iStack_24);
  }
  else {
    *piVar3 = param_2;
    *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
  }
LAB_2c5e05ae:
  if (*DAT_2c5e06bc == iStack_1c) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

