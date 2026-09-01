/* FUN_100cc614 @ 0x100cc614 */

uint FUN_100cc614(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_14;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffea;
  }
  else if ((*param_1 == 0) || (*(char *)(*param_1 + 0xd) != '\a')) {
    uVar2 = 0xffffff80;
  }
  else {
    piVar3 = param_1;
    local_14 = param_2;
    uStack_10 = param_3;
    iVar1 = FUN_10133e76(param_1 + 0x10);
    if (iVar1 << 0x1e < 0) {
      uVar2 = 0xffffff92;
    }
    else if (*(char *)(*param_1 + 2) == '\x02') {
      uVar2 = FUN_100e22c0(param_1,local_14);
    }
    else if (((param_1[0x21] == 0) && (param_1[0x1a] == 0)) &&
            (iVar1 = FUN_10133e76(param_1 + 0x19), iVar1 != 0)) {
      uVar2 = FUN_10134054(param_1,&local_14);
      if ((int)uVar2 < 0) {
        if ((uVar2 == 0xfffffff5) && (*(short *)(local_14 + 0x14) != 0)) {
          FUN_100c1c20(param_1 + 0x1a);
          return (uint)*(ushort *)(local_14 + 0x14);
        }
        FUN_100a5b78(DAT_100cc6d8 | (DAT_100cc6d4 - DAT_100cc6d0) * 0x20 & 0xff00U,DAT_100cc6e0,
                     DAT_100cc6dc,uVar2,piVar3);
      }
    }
    else {
      uVar2 = 0;
      *(undefined2 *)(local_14 + 0x14) = 0;
      FUN_100c1c20(param_1 + 0x1a);
      FUN_101144f8(param_1 + 0x22);
    }
  }
  return uVar2;
}

