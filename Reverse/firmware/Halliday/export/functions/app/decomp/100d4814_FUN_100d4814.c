/* FUN_100d4814 @ 0x100d4814 */

void FUN_100d4814(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = 0;
  piVar4 = *(int **)*DAT_100d48bc;
  do {
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (((int)((uint)*(byte *)(piVar4 + 0xe) << 0x1f) < 0) &&
       (uVar5 = (uint)*(byte *)((int)piVar4 + 0x39),
       (int)(((uVar5 << 0x1f | uVar5 << 0x1d | uVar5 << 0x1c) >> 0x1f |
             (uint)*(byte *)((int)piVar4 + 0x3a)) << 0x1f) < 0)) {
      iVar6 = param_1 + iVar3 * 8;
      *(int *)(param_1 + iVar3 * 8) = piVar4[1];
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(piVar4 + 2);
      bVar1 = *(byte *)(piVar4 + 0xe);
      uVar5 = (uint)*(byte *)((int)piVar4 + 0x39);
      bVar2 = *(byte *)((int)piVar4 + 0x3a);
      *(byte *)(iVar6 + 6) =
           (byte)(((bVar1 & 0x7f) >> 4) << 1) | 1 | (byte)((uVar5 & 1) << 4) |
           (byte)(((uVar5 & 7) >> 2) << 5) | (byte)(((uVar5 & 0xf) >> 3) << 6) |
           ((uVar5 & 9) != 1) << 7;
      *(byte *)(iVar6 + 7) = bVar2 & 1 | (bVar1 >> 7) << 1 | *(byte *)(iVar6 + 7) & 0xfc;
      if (iVar3 == param_2) {
        return;
      }
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}

