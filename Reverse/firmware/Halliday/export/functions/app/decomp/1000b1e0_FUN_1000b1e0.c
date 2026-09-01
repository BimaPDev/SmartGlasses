/* FUN_1000b1e0 @ 0x1000b1e0 */

void FUN_1000b1e0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = DAT_1000b214;
  iVar5 = *DAT_1000b210;
  *(undefined2 *)(DAT_1000b214 + 2) = 0;
  *puVar2 = 1;
  puVar2[4] = 1;
  if (*DAT_1000b210 != iVar5) {
    param_1 = FUN_1013cdc0();
  }
  iVar5 = *DAT_1000b1b4;
  iVar4 = *(int *)(DAT_1000b1bc + (uint)*(ushort *)(DAT_1000b1b8 + 2) * 4);
  *DAT_1000b1c0 = iVar4;
  piVar1 = DAT_1000b1cc;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_1000b1c4);
    iVar4 = *DAT_1000b1b4;
    uVar3 = DAT_1000b1c8;
joined_r0x1000b1ac:
    if (iVar4 == iVar5) goto LAB_1000b158;
  }
  else {
    *DAT_1000b1cc = iVar4 + 4;
    *(undefined2 *)(piVar1 + 2) = 1;
    *(undefined2 *)((int)piVar1 + 0xe) = 0xffff;
    *(undefined1 *)(piVar1 + 4) = 0;
    piVar1[1] = DAT_1000b1d0;
    iVar4 = FUN_101324f8();
    if (iVar4 == 0) {
      FUN_10119dc2(DAT_1000b1d8);
      iVar4 = *DAT_1000b1b4;
      uVar3 = DAT_1000b1dc;
      goto joined_r0x1000b1ac;
    }
    FUN_10119dc2(DAT_1000b1c4);
    if (*DAT_1000b1b4 == iVar5) {
      FUN_10119dc2(DAT_1000b1d4,iVar4);
      return;
    }
  }
  FUN_1013cdc0();
  uVar3 = DAT_1000b1c8;
LAB_1000b158:
  FUN_10119dc2(uVar3);
  return;
}

