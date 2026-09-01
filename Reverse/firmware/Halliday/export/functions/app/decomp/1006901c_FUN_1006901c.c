/* FUN_1006901c @ 0x1006901c */

undefined4 FUN_1006901c(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_10068ff0((*(byte *)(DAT_10069074 + 0x1e) & 0xf) >> 1 != 2);
  if (param_1 == (short *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    iVar3 = 0;
    do {
      iVar2 = *DAT_10069078 + iVar3;
      iVar3 = iVar3 + 6;
      if (*(short *)(*DAT_10069078 + -6 + iVar3) == *param_1) {
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 2);
        *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)(iVar2 + 3);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 4);
        *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(iVar2 + 5);
        return 0;
      }
    } while (iVar3 != 0x30);
    FUN_10119dc2(DAT_1006907c);
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

