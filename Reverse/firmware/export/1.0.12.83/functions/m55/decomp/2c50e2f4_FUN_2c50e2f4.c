/* FUN_2c50e2f4 @ 0x2c50e2f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c50e2f4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 == 0xd2) {
    if ((char)param_1[0xb] == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    (**(code **)(*(int *)param_1[2] + 0x4c))((int *)param_1[2],_LAB_2c50e37c,uVar2);
    func_0x2c50e1a8(param_1);
    if (*(code **)(*param_1 + 0x3c) == _LAB_2c50e380) {
      FUN_2c5d7694(4,0,0xffffffff);
      return 1;
    }
    uVar2 = 1;
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  else {
    if (iVar1 == 0xd3) {
      piVar3 = (int *)param_1[1];
      pcVar4 = *(code **)*piVar3;
      uVar2 = (*(code *)((undefined4 *)*piVar3)[3])(piVar3);
      (*pcVar4)(piVar3,uVar2);
      return 1;
    }
    if (iVar1 == 0xe3 || iVar1 == 0xd4) {
      (**(code **)(*(int *)param_1[1] + 0x44))();
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

