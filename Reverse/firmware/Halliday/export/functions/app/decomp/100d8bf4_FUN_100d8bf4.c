/* FUN_100d8bf4 @ 0x100d8bf4 */

void FUN_100d8bf4(byte *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_100d8c78;
  if (param_2 != 0) {
    uVar1 = DAT_100d8c74;
  }
  FUN_100a5b78(DAT_100d8c70 | (DAT_100d8c68 - DAT_100d8c64) * 0x20 & 0xff00U,DAT_100d8c6c,
               DAT_100d8c7c,uVar1,*param_1 & 1,(*param_1 & 3) >> 1,*(undefined2 *)(param_1 + 2),
               *(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),
               *(undefined2 *)(param_1 + 8));
  iVar2 = *DAT_100d8c80;
  if (param_2 == 0) {
    *(undefined4 *)(iVar2 + 2) = *(undefined4 *)param_1;
    *(undefined4 *)(iVar2 + 6) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar2 + 10) = *(undefined2 *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)param_1;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar2 + 0x14) = *(undefined2 *)(param_1 + 8);
  }
  return;
}

