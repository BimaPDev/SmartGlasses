/* FUN_14051c40 @ 0x14051c40 */

void FUN_14051c40(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1404a1b4();
  iVar1 = DAT_14051ce8;
  uVar3 = param_1;
  FUN_1402a6e8(4,0xa41,DAT_14051cf0,DAT_14051cec,DAT_14051ce4,param_1);
  FUN_1404a1b4(0);
  if (*(byte *)(iVar1 + 0x143) == param_1) {
    *(undefined1 *)(iVar1 + 0x143) = 0xff;
  }
  if (*(byte *)(iVar1 + 0x144) == param_1) {
    *(undefined1 *)(iVar1 + 0x144) = 0xff;
  }
  if (*(char *)(iVar2 + 0xdd) != '\0') {
    uVar3 = param_1;
    FUN_1402a6e8(4,0xa50,DAT_14051cf0,DAT_14051cec,DAT_14051cf4,param_1);
    FUN_14050de0(param_1);
  }
  *(undefined2 *)(iVar2 + 0xdc) = 0;
  if (((*(char *)(iVar1 + 0x122) != -1) && (*(char *)(iVar2 + 0x111) != '\0')) &&
     (*(char *)(iVar2 + 0xd8) == '\x01')) {
    FUN_1402a6e8(4,0xa59,DAT_14051cf0,DAT_14051cec,DAT_14051cf8,uVar3);
    return;
  }
  FUN_14051b04(iVar2);
  return;
}

