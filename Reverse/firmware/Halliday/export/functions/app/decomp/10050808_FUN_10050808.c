/* FUN_10050808 @ 0x10050808 */

int FUN_10050808(uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar7 = *DAT_10050970;
  iVar3 = FUN_1004f6cc();
  uVar11 = *(ushort *)(param_3 + 8) + param_2 & 0xffff;
  if (uVar11 - 1 < 0x7f8) goto LAB_1005086c;
  FUN_100a5b78((DAT_10050978 - DAT_10050974) * 0x20 & 0xff00U | 0x1860011,DAT_10050980,DAT_1005097c,
               uVar11);
  iVar9 = -0x86;
  do {
    if (*DAT_10050970 == iVar7) {
      return iVar9;
    }
    FUN_1013cdc0();
LAB_1005086c:
    puVar4 = (undefined1 *)thunk_FUN_1009f30c(uVar11 + 8,DAT_10050984);
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
      *(ushort *)(param_1 + 3) = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
      FUN_1011ea40(param_5,param_1,param_2);
      FUN_1011ea40(puVar4 + 8,param_1,param_2);
    }
    if (*(short *)(param_3 + 8) == 0) {
LAB_100508b6:
      param_1 = 0;
    }
    else {
      puVar6 = puVar4;
      if (param_2 != 0) {
        puVar6 = puVar4 + param_2 + 8;
      }
      FUN_1011ea40(puVar6,*(undefined4 *)(param_3 + 4));
      if (*(short *)(param_3 + 8) == 0) goto LAB_100508b6;
      param_1 = param_4 + 5 & 0xffff;
    }
    if (param_2 != 0) {
      uVar5 = FUN_100501c4(param_5,param_4 + 5);
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
    iVar9 = FUN_100a07a0(*(undefined4 *)(iVar3 + 0x18),puVar4,uVar11);
    if (iVar9 < 0) {
      param_2 = (DAT_10050978 - DAT_10050974) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_10050988 | param_2,DAT_10050980,DAT_1005098c,iVar9);
    }
    else {
      iVar9 = 0;
    }
    FUN_1012d1f4(puVar4);
  } while( true );
}

