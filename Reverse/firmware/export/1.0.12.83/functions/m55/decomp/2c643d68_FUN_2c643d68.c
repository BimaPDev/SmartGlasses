/* FUN_2c643d68 @ 0x2c643d68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c643d68(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(_LAB_2c643e4c + 0x14);
  if (iVar6 == 0) {
    FUN_2c643b08(param_1,0xfffffff8,param_3,_LAB_2c643e4c,param_4);
    return 0xffffffff;
  }
  uVar3 = _LAB_2c643e4c;
  if ((param_1 == (byte *)0x0) || (uVar3 = (uint)*param_1, uVar3 != 0xf5)) {
    FUN_2c643b08(param_1,0xfffffffc,param_3,uVar3,param_4);
    return 0xfffffffc;
  }
  if (param_1[0x18] == 0) {
    FUN_2c643b08(param_1,0xfffffff1,param_3,0xf5,param_4);
    return 0xfffffffd;
  }
  if (*(int *)(param_1 + 0xc) != iVar6) {
    FUN_2c643b08(param_1,0xfffffff2,param_3,*(int *)(param_1 + 0xc),param_4);
    return 0xfffffffd;
  }
  param_1[0x18] = param_1[0x18] - 1;
  func_0x2c643b30();
  if (param_1[0x18] != 0) {
    return 0;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(iVar6 + 0x2c) = uVar4;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = uVar4;
  }
  if ((int)((uint)param_1[3] << 0x1e) < 0) {
    cVar2 = *(char *)(iVar6 + 0x21);
    for (iVar5 = *(int *)(iVar6 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      if ((*(int *)(iVar5 + 8) != 0) &&
         (cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x20), cVar2 < cVar1)) {
        cVar2 = cVar1;
      }
    }
    *(char *)(iVar6 + 0x20) = cVar2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = FUN_2c645b54(param_1);
    FUN_2c64621c(iVar6,0);
    *(int *)(param_1 + 0xc) = iVar6;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iVar5 = *(int *)(iVar6 + 0x2c);
    *(int *)(param_1 + 0x14) = iVar5;
    if (iVar5 != 0) {
      *(byte **)(iVar5 + 0x10) = param_1;
    }
    *(byte **)(iVar6 + 0x2c) = param_1;
    param_1[0x18] = 1;
    func_0x2c643b24(param_1);
  }
  FUN_2c64610c(0);
  return 0;
}

