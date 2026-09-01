/* FUN_1006c364 @ 0x1006c364 */

int FUN_1006c364(char *param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_18;
  char *local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  if ((((param_1 == (char *)0x0) || (uVar1 = FUN_1011ea10(), uVar1 < 2)) || (*param_1 != '/')) ||
     (((param_2 == (char *)0x0 || (uVar1 = FUN_1011ea10(param_2), uVar1 < 2)) || (*param_2 != '/')))
     ) {
    iVar3 = DAT_1006c440 - DAT_1006c43c;
    uVar1 = DAT_1006c44c;
    uVar2 = DAT_1006c448;
  }
  else {
    iVar3 = FUN_1006b9f4(&local_18,param_1,&local_14);
    if (iVar3 < 0) {
      FUN_100a5b78(DAT_1006c450 | (DAT_1006c440 - DAT_1006c43c) * 0x20 & 0xff00U,DAT_1006c444,
                   DAT_1006c454);
      return iVar3;
    }
    if ((int)((uint)(byte)local_18[0x20] << 0x1e) < 0) {
      return -0x1e;
    }
    iVar3 = FUN_1011ea20(param_1,param_2,local_14);
    if (iVar3 == 0) {
      if (*(code **)(*(int *)(local_18 + 0x1c) + 0x38) == (code *)0x0) {
        return -0x86;
      }
      iVar3 = (**(code **)(*(int *)(local_18 + 0x1c) + 0x38))(local_18,param_1,param_2);
      if (-1 < iVar3) {
        return iVar3;
      }
      FUN_100a5b78(DAT_1006c460 | (DAT_1006c440 - DAT_1006c43c) * 0x20 & 0xff00U,DAT_1006c444,
                   DAT_1006c464,iVar3);
      return iVar3;
    }
    iVar3 = DAT_1006c440 - DAT_1006c43c;
    uVar1 = DAT_1006c45c;
    uVar2 = DAT_1006c458;
  }
  FUN_100a5b78(uVar1 | iVar3 * 0x20 & 0xff00U,DAT_1006c444,uVar2);
  return -0x16;
}

