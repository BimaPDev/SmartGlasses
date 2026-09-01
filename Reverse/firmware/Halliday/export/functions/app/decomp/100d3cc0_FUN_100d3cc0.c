/* FUN_100d3cc0 @ 0x100d3cc0 */

undefined4 FUN_100d3cc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_100d3d18;
  iVar4 = *DAT_100d3d14;
  if (iVar4 == 0) {
    uVar3 = 0xfffffffb;
  }
  else {
    *(undefined4 *)(iVar4 + 0x30) = *param_1;
    iVar2 = DAT_100d3d1c;
    *(undefined4 *)(iVar4 + 0x34) = param_1[1];
    *(undefined4 *)(iVar4 + 0x38) = param_1[2];
    FUN_100a5b78(DAT_100d3d20 | (iVar2 - iVar1) * 0x20 & 0xff00U,DAT_100d3d28,DAT_100d3d24,
                 *(byte *)(iVar4 + 0x30) & 0xf,*(byte *)(iVar4 + 0x30) >> 4,
                 *(byte *)(iVar4 + 0x31) & 1);
    uVar3 = 0;
  }
  return uVar3;
}

