/* FUN_100e3fb8 @ 0x100e3fb8 */

int FUN_100e3fb8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_100e4014;
  iVar3 = param_2;
  do {
    if (*(short *)(param_2 + 0xc) == 0) break;
    if (4 < *(byte *)(param_1 + 7)) {
      return -0x16;
    }
    iVar2 = (**(code **)(iVar1 + (uint)*(byte *)(param_1 + 7) * 4))
                      (param_1,param_2,param_3,param_4,param_5,iVar3);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined1 *)(param_1 + 7) = 0;
      FUN_100c1f58(param_2 + 8,*(undefined2 *)(param_2 + 0xc));
      return 0;
    }
  } while (*(char *)(param_1 + 7) != '\x04');
  *(undefined2 *)(param_1 + 6) = 0;
  return 0;
}

