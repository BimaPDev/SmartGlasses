/* FUN_10132850 @ 0x10132850 */

undefined4 FUN_10132850(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar1 = FUN_10132824(param_1,0);
  if (iVar1 == 0xd) {
    if (*(char *)(param_1 + 0xc) == '0') {
      uVar3 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xc) != '1') goto LAB_10132892;
      uVar3 = 1;
    }
    *param_2 = uVar3;
    param_2 = param_2 + 6;
    iVar1 = param_1;
    do {
      iVar4 = iVar1 + 2;
      FUN_10119d28(iVar1,2,param_2,1);
      param_2 = param_2 + -1;
      iVar1 = iVar4;
    } while (iVar4 != param_1 + 0xc);
    uVar2 = 0;
  }
  else {
LAB_10132892:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

