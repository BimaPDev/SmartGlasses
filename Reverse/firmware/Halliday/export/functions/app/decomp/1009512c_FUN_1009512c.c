/* FUN_1009512c @ 0x1009512c */

void FUN_1009512c(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,byte param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_7 & 2) != 0) {
      param_6 = 0x1fffffff;
    }
    uVar2 = *(uint *)(param_3 + 8);
    while (iVar5 = param_2 + iVar4, *(char *)(param_2 + iVar4) != '\0') {
      iVar1 = FUN_10094d74(iVar5,param_3,param_4,param_6,0,param_7);
      iVar3 = (uVar2 & 0xffff) + param_5 + param_1[1];
      iVar4 = iVar4 + iVar1;
      if (iVar3 < 0) {
        FUN_10094174(2,DAT_100951f8,0x6f,DAT_100951fc);
        return;
      }
      param_1[1] = iVar3;
      iVar5 = FUN_1012b53a(iVar5,iVar1,param_3,param_4,param_7);
      if (*param_1 < iVar5) {
        *param_1 = iVar5;
      }
      else {
        *param_1 = *param_1;
      }
    }
    if ((iVar4 != 0) && ((*(char *)(iVar5 + -1) == '\n' || (*(char *)(iVar5 + -1) == '\r')))) {
      param_1[1] = param_1[1] + (uVar2 & 0xffff) + param_5;
    }
    if (param_1[1] == 0) {
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar2 = param_1[1] - param_5;
    }
    param_1[1] = uVar2;
  }
  return;
}

