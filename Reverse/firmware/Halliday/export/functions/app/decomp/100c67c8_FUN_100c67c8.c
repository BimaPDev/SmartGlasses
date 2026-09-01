/* FUN_100c67c8 @ 0x100c67c8 */

int FUN_100c67c8(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
                char param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  
  FUN_1011ea48(&local_38,0,0x10);
  uVar3 = DAT_100c68ac;
  if (param_7 != '\0') {
    if (param_2 != 0) {
      for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
        if (*(byte *)(param_2 + iVar1 * 8) - 8 < 2) {
          return -0x16;
        }
      }
    }
    if (param_4 != 0) {
      for (iVar1 = 0; param_5 != iVar1; iVar1 = iVar1 + 1) {
        if (*(byte *)(param_4 + iVar1 * 8) - 8 < 2) {
          return -0x16;
        }
      }
    }
    local_3f = FUN_1011ea10(DAT_100c68ac);
    local_40 = 9;
    local_3c = uVar3;
  }
  if ((param_7 == '\0') || (param_6 != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
    local_2c = 1;
    local_30 = &local_40;
  }
  local_38 = param_2;
  iStack_34 = param_3;
  iVar1 = FUN_100c66d8(0x2008,&local_38,uVar3);
  if (iVar1 == 0) {
    if (param_6 != '\0') {
      uVar3 = 1;
      iStack_34 = param_5;
      if (param_7 != '\0') {
        local_2c = 1;
        uVar3 = 2;
        local_30 = &local_40;
      }
      local_38 = param_4;
      iVar2 = FUN_100c66d8(0x2009,&local_38,uVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    FUN_10132e3c(param_1 + 0x10,4);
  }
  return iVar1;
}

