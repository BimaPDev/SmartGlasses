/* FUN_1012ef56 @ 0x1012ef56 */

int FUN_1012ef56(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  
  switch(param_2) {
  case 0:
    puVar1 = (undefined4 *)FUN_100ae7e8();
    uVar3 = *param_3;
    uVar2 = param_3[1];
    uVar5 = param_3[2];
    *param_1 = (int)puVar1;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar5;
    puVar1[3] = 0;
    FUN_1012f3d0(puVar1 + 4);
    FUN_1012f3ec(puVar1 + 4,puVar1[2],*puVar1);
    break;
  case 2:
    if (param_3 != (undefined4 *)0x0) {
      FUN_1012f3d0(param_1 + 4,param_3,*param_1);
    }
    param_1[3] = 1;
    *(undefined2 *)(param_1 + 4) = 1;
    break;
  case 3:
    if (param_3 != (undefined4 *)0x0) {
      FUN_1012f3ec(param_1 + 4,param_3,*param_1,param_4,param_1);
    }
    *(undefined2 *)((int)param_1 + 0x12) = 1;
    *(undefined2 *)((int)param_1 + 0xe) = 1;
    break;
  case 4:
    return (int)*(short *)((int)param_1 + 0xe);
  case 5:
    iVar6 = param_3[2];
    if (iVar6 == 2) {
      uVar4 = (ushort)(param_3[1] == 0);
    }
    else {
      uVar4 = 0;
    }
    *(ushort *)(param_1 + 5) = uVar4;
    if ((short)param_1[3] == 1) {
      if (param_3[4] == 0x10) {
        FUN_1012f214();
      }
      else {
        FUN_1012f054(param_1 + 4,*param_3,param_3[1],param_3[3],iVar6);
      }
      if ((short)param_1[4] == 0) {
        *(undefined2 *)(param_1 + 3) = 2;
        return 0;
      }
    }
    else if ((ushort)(*(short *)((int)param_1 + 0xe) - 1U) < 2) {
      if (param_3[4] == 0x10) {
        FUN_1012f2b4();
      }
      else {
        FUN_1012f0f4(param_1 + 4,*param_3,param_3[1],param_3[3],iVar6,param_2);
      }
      if (*(short *)((int)param_1 + 0x12) == 0) {
        *(undefined2 *)((int)param_1 + 0xe) = 2;
        return 0;
      }
    }
    break;
  case 6:
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    return 0;
  }
  return 0;
}

