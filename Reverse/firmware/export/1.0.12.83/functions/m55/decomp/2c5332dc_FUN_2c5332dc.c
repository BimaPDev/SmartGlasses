/* FUN_2c5332dc @ 0x2c5332dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5332dc(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  piVar1 = _LAB_2c533468;
  iStack_1c = *_LAB_2c533464;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c53347c,0xa9,_LAB_2c533478,_LAB_2c533480);
  }
  if (*_LAB_2c533468 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x10);
  FUN_2c530760(puVar2,0x13,0x13,0,param_2,0xff);
  *puVar2 = _DAT_2c53346c;
  iVar3 = FUN_2c530d50(param_1 + 0x2c,puVar2);
  if (iVar3 != 0) {
    FUN_2c5326a8(&piStack_30);
    uStack_20 = FUN_2c530d48(param_1 + 0x2c);
    puVar2 = (undefined4 *)FUN_2c64ca5c(4);
    piVar1 = piStack_2c;
    *puVar2 = _LAB_2c533470;
    piStack_2c[0xe] = (int)puVar2;
    piStack_28[0xe] = (int)puVar2;
    piStack_30[0xe] = (int)puVar2;
    piVar5 = *(int **)(param_1 + 0x1c);
    if (piVar5 == (int *)(*(int *)(param_1 + 0x24) + -0x14)) {
      FUN_2c533128(param_1 + 4,&piStack_30);
    }
    else {
      *piVar5 = 0;
      piVar5[1] = 0;
      piStack_2c = (int *)0x0;
      piVar4 = (int *)piVar5[1];
      piVar5[1] = (int)piVar1;
      piVar5[2] = 0;
      piVar5[3] = 0;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      piVar1 = piStack_30;
      piStack_30 = (int *)0x0;
      piVar4 = (int *)*piVar5;
      *piVar5 = (int)piVar1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      piVar1 = piStack_28;
      piStack_28 = (int *)0x0;
      piVar4 = (int *)piVar5[2];
      piVar5[2] = (int)piVar1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      piVar1 = piStack_24;
      if (piStack_24 != (int *)0x0) {
        piStack_24 = (int *)0x0;
        piVar4 = (int *)piVar5[3];
        piVar5[3] = (int)piVar1;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x14;
    }
    piVar1 = piStack_2c;
    piStack_2c = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = piStack_30;
    piStack_30 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = piStack_28;
    piStack_28 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = piStack_24;
    piStack_24 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      if (piStack_24 != (int *)0x0) {
        (**(code **)(*piStack_24 + 4))();
      }
    }
    if (piStack_28 != (int *)0x0) {
      (**(code **)(*piStack_28 + 4))();
    }
    if (piStack_2c != (int *)0x0) {
      (**(code **)(*piStack_2c + 4))();
    }
    if (piStack_30 != (int *)0x0) {
      (**(code **)(*piStack_30 + 4))();
    }
    if (*_LAB_2c533464 == iStack_1c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c53347c,0xae,_LAB_2c533478,_LAB_2c533474);
}

