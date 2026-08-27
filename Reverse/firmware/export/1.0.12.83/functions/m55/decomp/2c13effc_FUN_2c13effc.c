/* FUN_2c13effc @ 0x2c13effc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13effc(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(_DAT_2c13f0d8 + 0x14);
  if (iVar3 == 0) {
    FUN_2c13ee98(param_1,0xfffffff8);
    return 0xffffffff;
  }
  if ((param_1 == (char *)0x0) || (*param_1 != -0xb)) {
    FUN_2c13ee98(param_1,0xfffffffc);
    return 0xfffffffc;
  }
  cVar1 = param_1[0x18];
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0xc) = iVar3;
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    iVar2 = *(int *)(iVar3 + 0x2c);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0x10) = param_1;
    }
    *(char **)(iVar3 + 0x2c) = param_1;
    param_1[0x18] = '\x01';
    func_0x2c13eeb0(param_1);
    return 0;
  }
  if (((int)((uint)(byte)param_1[3] << 0x1f) < 0) && (*(int *)(param_1 + 0xc) == iVar3)) {
    if (cVar1 != -1) {
      param_1[0x18] = cVar1 + '\x01';
      func_0x2c13eeb0();
      return 0;
    }
    FUN_2c13ee98(param_1,0xfffffff0);
    return 0xfffffffd;
  }
  if (param_2 == 0) {
    func_0x2c13eeb4(param_1);
    return 0xfffffffd;
  }
  if ((int)((uint)(byte)param_1[3] << 0x1e) < 0) {
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x20) < *(char *)(iVar3 + 0x20)) {
      *(char *)(*(int *)(param_1 + 0xc) + 0x20) = *(char *)(iVar3 + 0x20);
      func_0x2c1408b0(*(undefined4 *)(param_1 + 0xc));
    }
  }
  func_0x2c13eea8(param_1,param_2);
  iVar2 = FUN_2c140be8(0x53,param_2);
  if (iVar2 != 0) {
    FUN_2c14086c(param_1,iVar3);
    return 0xfffffffe;
  }
  func_0x2c13eeac(param_1);
  return 0xfffffffe;
}

