/* FUN_10050564 @ 0x10050564 */

undefined4 FUN_10050564(uint param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar7 = *DAT_100506dc;
  iVar3 = FUN_1004f6cc();
  uVar11 = (uint)*(ushort *)(param_3 + 8) + param_2 & 0xffff;
  if (uVar11 - 1 < 0x7f8) goto LAB_100505c4;
  FUN_100a5b78((DAT_100506e4 - DAT_100506e0) * 0x20 & 0xff00U | 0xe40011,DAT_100506ec,DAT_100506e8,
               uVar11);
  uVar9 = 0xffffff7a;
  do {
    while( true ) {
      if (*DAT_100506dc == iVar7) {
        return uVar9;
      }
      FUN_1013cdc0();
LAB_100505c4:
      puVar4 = (undefined1 *)thunk_FUN_1009f30c(uVar11 + 8,DAT_100506f0);
      if (puVar4 != (undefined1 *)0x0) break;
      FUN_100a5b78((DAT_100506e4 - DAT_100506e0) * 0x20 & 0xff00U | 0xf20031,DAT_100506ec,
                   DAT_100506f4);
      uVar9 = 0xffffffff;
    }
    cVar1 = *(char *)(param_3 + 10);
    if ((cVar1 == '\b') || (cVar1 == '\x04')) {
      uVar10 = (uint)*(ushort *)(iVar3 + 0xfc);
      *(undefined2 *)(iVar3 + 0xfc) = 0;
    }
    else if (cVar1 == '\0') {
      uVar8 = *(short *)(iVar3 + 0xfe) + 1;
      uVar10 = (uint)uVar8;
      *(ushort *)(iVar3 + 0xfe) = uVar8;
    }
    else {
      uVar10 = 0;
    }
    if (param_2 != 0) {
      FUN_1011ea40(puVar4 + 8,param_1,param_2);
    }
    if (*(short *)(param_3 + 8) == 0) {
LAB_10050622:
      param_1 = 0;
    }
    else {
      puVar6 = puVar4;
      if (param_2 != 0) {
        puVar6 = puVar4 + param_2 + 8;
      }
      FUN_1011ea40(puVar6,*(undefined4 *)(param_3 + 4));
      param_1 = uVar11;
      if (*(short *)(param_3 + 8) == 0) goto LAB_10050622;
    }
    if (param_2 != 0) {
      uVar5 = FUN_100501c4(puVar4 + 8,uVar11);
      bVar2 = *(byte *)(param_3 + 10);
      *puVar4 = 0x5f;
      param_1 = (param_1 & 0xff) << 8 | param_1 >> 8;
      uVar11 = uVar11 + 8 & 0xffff;
      puVar4[1] = bVar2 >> 4 | (byte)(((bVar2 & 0xf) >> 3) << 4) | (byte)(((bVar2 & 7) >> 2) << 5) |
                  bVar2 << 6;
      *(short *)(puVar4 + 2) = (short)param_1;
      *(ushort *)(puVar4 + 4) = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
      *(ushort *)(puVar4 + 6) = (ushort)((uVar10 & 0xff) << 8) | (ushort)(uVar10 >> 8);
    }
    uVar10 = FUN_100a07a0(*(undefined4 *)(iVar3 + 0x18),puVar4,uVar11);
    if (uVar11 == uVar10) {
      uVar9 = 0;
    }
    else {
      FUN_100a5b78((DAT_100506e4 - DAT_100506e0) * 0x20 & 0xff00U | 0x1360012,DAT_100506ec,
                   DAT_100506f8,uVar10,uVar11);
      uVar9 = 0xffffffff;
    }
    FUN_1012d1f4(puVar4);
  } while( true );
}

