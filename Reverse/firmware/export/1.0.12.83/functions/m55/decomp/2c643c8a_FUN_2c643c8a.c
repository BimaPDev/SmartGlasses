/* FUN_2c643c8a @ 0x2c643c8a */

undefined4 FUN_2c643c8a(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_4 + 0x14);
  if (iVar3 == 0) {
    FUN_2c643b08(param_1,0xfffffff8);
    return 0xffffffff;
  }
  if ((param_1 == (char *)0x0) || (*param_1 != -0xb)) {
    FUN_2c643b08(param_1,0xfffffffc);
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
    func_0x2c643b24(param_1);
    return 0;
  }
  if (((int)((uint)(byte)param_1[3] << 0x1f) < 0) && (*(int *)(param_1 + 0xc) == iVar3)) {
    if (cVar1 != -1) {
      param_1[0x18] = cVar1 + '\x01';
      func_0x2c643b24();
      return 0;
    }
    FUN_2c643b08(param_1,0xfffffff0);
    return 0xfffffffd;
  }
  if (param_2 == 0) {
    func_0x2c643b28(param_1);
    return 0xfffffffd;
  }
  if ((int)((uint)(byte)param_1[3] << 0x1e) < 0) {
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x20) < *(char *)(iVar3 + 0x20)) {
      *(char *)(*(int *)(param_1 + 0xc) + 0x20) = *(char *)(iVar3 + 0x20);
      func_0x2c645b68(*(undefined4 *)(param_1 + 0xc));
    }
  }
  func_0x2c643b1c(param_1,param_2);
  iVar2 = FUN_2c645ea4(0x53,param_2);
  if (iVar2 != 0) {
    FUN_2c645b24(param_1,iVar3);
    return 0xfffffffe;
  }
  func_0x2c643b20(param_1);
  return 0xfffffffe;
}

