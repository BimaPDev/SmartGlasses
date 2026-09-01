/* FUN_100e2d74 @ 0x100e2d74 */

int FUN_100e2d74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_5c;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [29];
  undefined1 local_1b;
  
  uVar4 = **(undefined4 **)(param_1 + -0xa4);
  FUN_1011ea48(auStack_58,0,0x1e);
  iVar1 = FUN_101385f2(param_1,auStack_58,0x1e);
  iVar2 = FUN_100e3f38(param_1,&local_5c);
  if (iVar1 + iVar2 < 0) {
    FUN_100a5b78(DAT_100e2e38 | (DAT_100e2e30 - DAT_100e2e34) * 0x20 & 0xff00U,DAT_100e2e3c);
    return iVar1 + iVar2;
  }
  if (param_2 == 1) {
    FUN_10138574(param_1);
    FUN_10138574(param_1);
    FUN_1011ea48(auStack_38,0,0x1e);
    FUN_101385f2(param_1,auStack_38,0x1e);
    local_1b = 0;
    if ((*DAT_100e2e40 != 0) && (pcVar3 = *(code **)(*DAT_100e2e40 + 0x38), pcVar3 != (code *)0x0))
    {
      (*pcVar3)(uVar4,auStack_58,local_5c,auStack_38);
      return 0;
    }
  }
  else {
    if (param_2 == 8) {
      if (*DAT_100e2e40 == 0) {
        return 0;
      }
      pcVar3 = *(code **)(*DAT_100e2e40 + 0x54);
    }
    else {
      if (param_2 != 0) {
        return 0;
      }
      if (*DAT_100e2e40 == 0) {
        return 0;
      }
      pcVar3 = *(code **)(*DAT_100e2e40 + 0x34);
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4,auStack_58,local_5c);
    }
  }
  return 0;
}

