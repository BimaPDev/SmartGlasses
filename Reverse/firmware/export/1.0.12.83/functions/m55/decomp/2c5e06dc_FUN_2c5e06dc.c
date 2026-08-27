/* FUN_2c5e06dc @ 0x2c5e06dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e06dc(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar4 = _LAB_2c5e07f0;
  iStack_1c = *_LAB_2c5e07ec;
  iStack_24 = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e0800,0x94,_LAB_2c5e07fc,_LAB_2c5e07f8,_LAB_2c5e07f4);
  }
  if ((_LAB_2c5e07f0[1] == *_LAB_2c5e07f0) || (*(ushort *)(param_2 + 0x1a) < 0x100)) {
    piVar4 = *(int **)(param_5 + 4);
    if (piVar4 == *(int **)(param_5 + 8)) {
      FUN_2c5dda50(param_5,piVar4,&iStack_24);
    }
    else {
      *piVar4 = param_2;
      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 4;
    }
  }
  else {
    iVar2 = FUN_2c5def1c();
    if (iVar2 == 0) {
      piVar5 = (int *)piVar4[1];
      iStack_20 = 0;
      piVar4 = (int *)*piVar4;
      iVar2 = iStack_24;
      while (piVar1 = piVar4, piVar5 != piVar1) {
        piVar4 = piVar1 + 1;
        if (0xff < *(ushort *)(*piVar1 + 0x1a)) {
          iVar3 = FUN_2c5def1c();
          if ((iVar3 != 0) && (iStack_20 == 0)) {
            iStack_20 = *piVar1;
          }
          iVar3 = func_0x2c5def4c(*piVar1);
          if ((iVar3 != 0) && (*(ushort *)(*piVar1 + 0x1a) < *(ushort *)(iVar2 + 0x1a))) {
            iVar2 = *piVar1;
          }
        }
      }
      if (*(ushort *)(iVar2 + 0x1a) <= *(ushort *)(iStack_20 + 0x1a)) {
        piVar4 = *(int **)(param_5 + 4);
        if (piVar4 == *(int **)(param_5 + 8)) {
          FUN_2c5dda50(param_5,piVar4,&iStack_24);
        }
        else {
          *piVar4 = iStack_24;
          *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 4;
        }
        piVar4 = *(int **)(param_4 + 4);
        if (piVar4 == *(int **)(param_4 + 8)) {
          FUN_2c5dda50(param_4,piVar4,&iStack_20);
        }
        else {
          *piVar4 = iStack_20;
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
        }
      }
    }
  }
  if (*_LAB_2c5e07ec != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 1;
}

