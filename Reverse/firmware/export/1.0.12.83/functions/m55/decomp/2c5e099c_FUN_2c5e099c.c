/* FUN_2c5e099c @ 0x2c5e099c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e099c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_2c [2];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar2 = _LAB_2c5e0b78;
  iStack_1c = *_LAB_2c5e0b74;
  aiStack_2c[0] = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e0b88,0xb,_LAB_2c5e0b84,_LAB_2c5e0b80,_LAB_2c5e0b7c);
  }
  if ((_LAB_2c5e0b78[1] == *_LAB_2c5e0b78) || (*(ushort *)(param_2 + 0x1a) < 0x100)) {
    piVar2 = *(int **)(param_3 + 4);
    if (piVar2 == *(int **)(param_3 + 8)) {
      FUN_2c5dda50(param_3,piVar2,aiStack_2c);
    }
    else {
      *piVar2 = param_2;
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
    }
    goto LAB_2c5e09da;
  }
  iVar1 = FUN_2c5def1c();
  if (iVar1 != 0) goto LAB_2c5e09da;
  iVar1 = FUN_2c5def3c(aiStack_2c[0]);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e0b88,0x17,_LAB_2c5e0b84,_LAB_2c5e0b8c);
  }
  iStack_24 = aiStack_2c[0];
  piVar3 = (int *)*piVar2;
  piVar2 = (int *)piVar2[1];
  iStack_20 = 0;
  if (piVar2 == piVar3) {
LAB_2c5e0afe:
    piVar2 = *(int **)(param_3 + 4);
    if (piVar2 == *(int **)(param_3 + 8)) {
      FUN_2c5dda50(param_3,piVar2,&iStack_24);
    }
    else {
      *piVar2 = iStack_24;
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
    }
    if (iStack_24 == aiStack_2c[0]) goto LAB_2c5e09da;
    piVar2 = *(int **)(param_4 + 4);
    if (piVar2 != *(int **)(param_4 + 8)) {
      *piVar2 = aiStack_2c[0];
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
      goto LAB_2c5e09da;
    }
  }
  else {
    do {
      piVar4 = piVar3 + 1;
      iVar1 = FUN_2c5def1c(*piVar3);
      if (((iVar1 != 0) && (0xff < *(ushort *)(aiStack_2c[0] + 0x1a))) && (iStack_20 == 0)) {
        iStack_20 = *piVar3;
      }
      iVar1 = func_0x2c5def4c(*piVar3);
      if ((iVar1 != 0) && (*(ushort *)(*piVar3 + 0x1a) < *(ushort *)(iStack_24 + 0x1a))) {
        iStack_24 = *piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != piVar2);
    if (iStack_20 == 0) goto LAB_2c5e0afe;
    if (*(ushort *)(iStack_24 + 0x1a) <= *(ushort *)(iStack_20 + 0x1a)) {
      piVar2 = *(int **)(param_3 + 4);
      if (iStack_24 == aiStack_2c[0]) {
        if (piVar2 == *(int **)(param_3 + 8)) {
          FUN_2c5dda50(param_3,piVar2,&iStack_24);
        }
        else {
          *piVar2 = iStack_24;
          *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
        }
        piVar2 = *(int **)(param_4 + 4);
        iVar1 = iStack_20;
        if (piVar2 == *(int **)(param_4 + 8)) {
          FUN_2c5dda50(param_4,piVar2,&iStack_20);
          goto LAB_2c5e09da;
        }
      }
      else {
        if (piVar2 == *(int **)(param_3 + 8)) {
          FUN_2c5dda50(param_3,piVar2,&iStack_24);
        }
        else {
          *piVar2 = iStack_24;
          *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 4;
        }
        piVar2 = *(int **)(param_4 + 4);
        if (piVar2 == *(int **)(param_4 + 8)) {
          FUN_2c5dda50(param_4,piVar2,&iStack_20);
          piVar2 = *(int **)(param_4 + 4);
        }
        else {
          *piVar2 = iStack_20;
          piVar2 = (int *)(*(int *)(param_4 + 4) + 4);
          *(int **)(param_4 + 4) = piVar2;
        }
        iVar1 = aiStack_2c[0];
        if (piVar2 == *(int **)(param_4 + 8)) {
          FUN_2c5dda50(param_4,piVar2,aiStack_2c);
          goto LAB_2c5e09da;
        }
      }
LAB_2c5e0a8a:
      *piVar2 = iVar1;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
      goto LAB_2c5e09da;
    }
    piVar2 = *(int **)(param_4 + 4);
    iVar1 = aiStack_2c[0];
    if (piVar2 != *(int **)(param_4 + 8)) goto LAB_2c5e0a8a;
  }
  FUN_2c5dda50(param_4,piVar2,aiStack_2c);
LAB_2c5e09da:
  if (*_LAB_2c5e0b74 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 1;
}

