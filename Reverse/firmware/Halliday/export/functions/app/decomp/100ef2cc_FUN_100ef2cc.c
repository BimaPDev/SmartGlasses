/* FUN_100ef2cc @ 0x100ef2cc */

void FUN_100ef2cc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  
  puVar1 = DAT_100ef4c4;
  FUN_1011dbf4(DAT_100ef4c8,0xffffffff,param_3,param_4,param_1,param_2,param_3);
  piVar2 = DAT_100ef4d0;
  if ((((code *)*puVar1 != (code *)0x0) && (*DAT_100ef4cc == param_1)) && (param_2 == 8)) {
    (*(code *)*puVar1)((uint)*DAT_100ef4cc,0);
    *puVar1 = 0;
    goto LAB_100ef2fa;
  }
  iVar11 = *DAT_100ef4d0;
  if ((iVar11 == 0) || (uVar5 = FUN_100eec40(param_1), (int)uVar5 < 0)) goto LAB_100ef2fa;
  if (param_2 - 7 < 2) {
    if (param_2 == 7) {
      *puVar1 = 0;
      *(char *)((int)piVar2 + 10) = (char)uVar5;
      *(short *)((int)piVar2 + 0xe) = (short)param_1;
      if ((int)((uint)*(byte *)(piVar2 + 2) << 0x1e) < 0) {
        uVar6 = FUN_100eebe8(uVar5 & 0xff);
        bVar8 = *(byte *)(iVar11 + 2);
        FUN_100a5b78(DAT_100ef4dc | (DAT_100ef4d4 - DAT_100ef4d8) * 0x20 & 0xff00U,DAT_100ef4e4,
                     DAT_100ef4e0,uVar6);
        if ((int)uVar5 < (int)(uint)bVar8) {
          uVar5 = (uint)*(ushort *)(*piVar2 + 0x10);
          if ((uVar5 == 0) || (uVar6 == uVar5)) {
            uVar4 = FUN_100eee10((int)*(char *)(*piVar2 + 2));
            FUN_100eee10((int)(char)(*(char *)(*piVar2 + 2) + '\x01'));
            uVar5 = 0;
            cVar10 = *(char *)(*piVar2 + 2);
            goto LAB_100ef3a6;
          }
        }
        else {
          uVar5 = (uint)*(ushort *)(*piVar2 + 0x10);
          if (uVar5 == 0) {
            uVar3 = FUN_100eee10((int)*(char *)(*piVar2 + 2));
            uVar4 = FUN_100eee10((int)(char)(*(char *)(*piVar2 + 2) + '\x01'));
            FUN_100eef38(*(undefined1 *)(*piVar2 + 2),uVar3,1,uVar5);
            cVar10 = *(char *)(*piVar2 + 2) + '\x01';
LAB_100ef3a6:
            FUN_100eef38(cVar10,uVar4,1,uVar5);
          }
        }
        FUN_100ef10c((int)*(char *)((int)piVar2 + 9),1);
        *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) & 0xfd;
      }
    }
    else if (*(ushort *)((int)piVar2 + 0xe) == param_1) {
      *(undefined2 *)((int)piVar2 + 0xe) = 0;
    }
    pcVar9 = *(code **)(iVar11 + 0x20);
    if (pcVar9 == (code *)0x0) goto LAB_100ef2fa;
    param_2 = (uint)(param_2 == 7);
  }
  else {
    if (1 < param_2 - 0x13) {
      if (param_2 == 3) {
        if (*(char *)((int)piVar2 + 0xb) < '\0') {
          iVar11 = FUN_100eec10(param_1);
          if (-1 < iVar11) {
            uVar7 = FUN_100eed80();
            FUN_100eef90(iVar11,uVar7,0);
          }
          goto LAB_100ef2fa;
        }
        if (-1 < (int)((uint)*(byte *)(piVar2 + 2) << 0x1d)) goto LAB_100ef4bc;
        FUN_100a5b78((DAT_100ef4d4 - DAT_100ef4d8) * 0x20 & 0xff00U | 0x1c80031,DAT_100ef4ec,
                     DAT_100ef4e8,param_1);
        bVar8 = *(byte *)(piVar2 + 2) | 8;
      }
      else {
        if (param_2 != 0x24) {
          if (param_2 != 0x25) goto LAB_100ef2fa;
          FUN_100a5b78((DAT_100ef4d4 - DAT_100ef4d8) * 0x20 & 0xff00U | 0x1d60031,DAT_100ef4ec,
                       DAT_100ef4f0,param_1);
          bVar8 = *(byte *)(piVar2 + 2);
          uVar5 = bVar8 & 0xfffffffb;
          *(char *)(piVar2 + 2) = (char)uVar5;
          if (-1 < (int)(uVar5 << 0x1c)) goto LAB_100ef2fa;
          *(byte *)(piVar2 + 2) = bVar8 & 0xf3;
LAB_100ef4bc:
          FUN_100eefd0();
          goto LAB_100ef2fa;
        }
        bVar8 = *(byte *)(piVar2 + 2) | 4;
      }
      *(byte *)(piVar2 + 2) = bVar8;
      goto LAB_100ef2fa;
    }
    pcVar9 = *(code **)(iVar11 + 0x24);
    if (pcVar9 == (code *)0x0) goto LAB_100ef2fa;
  }
  (*pcVar9)(param_1,param_2);
LAB_100ef2fa:
  FUN_100ef27c();
  return;
}

