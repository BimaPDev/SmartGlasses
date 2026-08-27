/* FUN_2c4dbfa0 @ 0x2c4dbfa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4dbfa0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = _LAB_2c4dc08c;
  iVar4 = func_0x2c4dc4d4(param_1 + 0x66);
  uVar3 = _DAT_2c4dc090;
  if (iVar4 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x19,1);
    uVar6 = 0x19;
    uVar5 = _LAB_2c4dc094;
  }
  else {
    FUN_2c4e0504(_LAB_2c4dc09c,7,0,0,_DAT_2c4dc090,0x1b,uVar2,0x1300,0);
    *(undefined1 *)(param_1 + 0x68) = 0;
    cVar1 = *(char *)((int)param_1 + 0x167);
    uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
    *_LAB_2c4dc0a0 = uVar5;
    iVar4 = FUN_2c4caf68((int)cVar1,1);
    param_1[0x67] = iVar4;
    if (iVar4 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x23,0xffffffff);
      uVar6 = 0x23;
      uVar5 = _LAB_2c4dc0a4;
    }
    else {
      iVar4 = FUN_2c4dbe90(param_1,param_2,iVar4);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x24,0xffffffff);
      uVar6 = 0x24;
      uVar5 = _LAB_2c4dc0a8;
    }
  }
  FUN_2c4e0504(_LAB_2c4dc098,0,0,0,uVar3,uVar6,uVar2,0x1300,uVar5);
  return 0;
}

