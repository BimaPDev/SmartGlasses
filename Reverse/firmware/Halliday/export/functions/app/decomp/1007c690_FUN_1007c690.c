/* FUN_1007c690 @ 0x1007c690 */

undefined1 FUN_1007c690(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_1007c6dc;
  iVar5 = 0xf;
  do {
    if ((int)(uint)*(ushort *)(DAT_1007c6dc + iVar5 * 4 + 2) <= param_1) {
      if (iVar5 == 0xf) goto LAB_1007c6d4;
      break;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar1 = *(ushort *)(DAT_1007c6dc + (iVar5 + 1) * 4 + 2);
  iVar3 = FUN_1013d02e(param_1 - (uint)*(ushort *)(DAT_1007c6dc + iVar5 * 4 + 2));
  iVar4 = FUN_1013d02e(param_1 - (uint)uVar1);
  if (iVar4 < iVar3) {
    iVar5 = iVar5 + 1;
  }
LAB_1007c6d4:
  return *(undefined1 *)(iVar2 + iVar5 * 4);
}

