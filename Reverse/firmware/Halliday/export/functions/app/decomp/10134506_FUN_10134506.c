/* FUN_10134506 @ 0x10134506 */

int FUN_10134506(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = param_2 + 1;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  do {
    if (param_1 == 0) {
      local_20 = 0;
      uStack_1c = uStack_1c & 0xff000000;
      iVar1 = FUN_10134500(iVar2,&local_20);
      if (iVar1 == 0) {
        return iVar2 + -1;
      }
    }
    else {
      iVar1 = FUN_10133724(param_1,*(undefined1 *)(iVar2 + -1),iVar2);
      if (iVar1 != 0) {
        return iVar2 + -1;
      }
    }
    iVar2 = iVar2 + 10;
  } while (iVar2 != param_2 + 0x33);
  return 0;
}

