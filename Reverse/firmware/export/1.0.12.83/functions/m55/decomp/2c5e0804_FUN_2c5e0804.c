/* FUN_2c5e0804 @ 0x2c5e0804 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5e0804(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  piVar2 = _LAB_2c5e097c;
  iStack_24 = *_LAB_2c5e0978;
  iStack_2c = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e0984,0x42,_LAB_2c5e0988,_LAB_2c5e0990,_LAB_2c5e098c);
  }
  if (_LAB_2c5e097c[1] != *_LAB_2c5e097c) {
    if (0xff < *(ushort *)(param_2 + 0x1a)) {
      iVar6 = FUN_2c5def3c();
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5e0984,0x4a,_LAB_2c5e0988,_LAB_2c5e0994);
      }
      iVar6 = FUN_2c5def1c(iStack_2c);
      if (iVar6 != 0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[1];
        iStack_28 = iStack_2c;
        if (piVar2 == piVar3) {
          if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5e0984,0x60,_LAB_2c5e0988,_LAB_2c5e0980);
          }
LAB_2c5e0952:
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5e0984,99,_LAB_2c5e0988,_LAB_2c5e0990,_LAB_2c5e0998);
        }
        iVar5 = 0;
        do {
          piVar4 = piVar3 + 1;
          iVar1 = FUN_2c5def1c(*piVar3);
          if (((iVar1 == 0) || (*(ushort *)(iStack_2c + 0x1a) < 0x100)) || (iVar5 != 0)) {
            iVar1 = *piVar3;
          }
          else {
            iVar1 = *piVar3;
            iVar5 = iVar1;
          }
          iVar1 = func_0x2c5def4c(iVar1);
          if (iVar1 != 0) {
            if (*(ushort *)(*piVar3 + 0x1a) < *(ushort *)(iStack_28 + 0x1a)) {
              iStack_28 = *piVar3;
            }
          }
          piVar3 = piVar4;
        } while (piVar2 != piVar4);
        if (iStack_2c != iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5e0984,0x60,_LAB_2c5e0988,_LAB_2c5e0980);
        }
        if (iVar5 == 0) goto LAB_2c5e0952;
        piVar2 = *(int **)(param_6 + 4);
        if (piVar2 == *(int **)(param_6 + 8)) {
          FUN_2c5dda50(param_6,piVar2,&iStack_2c);
        }
        else {
          *piVar2 = iStack_2c;
          *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 4;
        }
        piVar2 = *(int **)(param_5 + 4);
        if (piVar2 == *(int **)(param_5 + 8)) {
          FUN_2c5dda50(param_5,piVar2,&iStack_28);
        }
        else {
          *piVar2 = iStack_28;
          *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 4;
        }
        goto LAB_2c5e0844;
      }
    }
  }
  piVar2 = *(int **)(param_6 + 4);
  if (piVar2 == *(int **)(param_6 + 8)) {
    iVar6 = 1;
    FUN_2c5dda50(param_6,piVar2,&iStack_2c);
  }
  else {
    iVar6 = 1;
    *piVar2 = iStack_2c;
    *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 4;
  }
LAB_2c5e0844:
  if (*_LAB_2c5e0978 == iStack_24) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

