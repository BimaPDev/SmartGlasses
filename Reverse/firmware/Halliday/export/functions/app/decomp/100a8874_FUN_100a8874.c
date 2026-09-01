/* FUN_100a8874 @ 0x100a8874 */

char * FUN_100a8874(undefined4 param_1,int param_2,char param_3,uint param_4,int param_5,
                   undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  byte local_3c;
  undefined1 local_3b;
  char local_3a;
  char local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  char *pcStack_24;
  
  FUN_100a7a0c();
  pcVar8 = (char *)thunk_FUN_1009f30c(0x70,DAT_100a8b08);
  uVar14 = (DAT_100a8b0c - DAT_100a8b10) * 0x20 & 0xff00;
  if (pcVar8 == (char *)0x0) {
    FUN_100a5b78(DAT_100a8b14 | uVar14,DAT_100a8b1c,DAT_100a8b18);
    goto LAB_100a88ae;
  }
  FUN_1011ea48(pcVar8,0,0x70);
  pcVar8[0x30] = '\0';
  pcVar8[0x31] = '\0';
  pcVar8[0x32] = '\0';
  pcVar8[0x33] = '\0';
  *pcVar8 = (char)param_1;
  pcVar8[1] = param_3;
  pcVar8[6] = (char)param_2;
  cVar3 = FUN_100a717c(param_1);
  pcVar8[3] = cVar3;
  cVar3 = FUN_1012de7a(param_1);
  pcVar8[4] = cVar3;
  cVar3 = FUN_1012de7e(param_1);
  pcVar8[5] = cVar3;
  uVar4 = FUN_100a7d8c(param_1);
  *(undefined2 *)(pcVar8 + 10) = uVar4;
  iVar9 = FUN_100a793c();
  *(int *)(pcVar8 + 0xc) = iVar9;
  if (iVar9 == 0) {
    *(uint *)(pcVar8 + 0xc) = (uint)(byte)pcVar8[6];
  }
  uVar10 = FUN_1012f99a(pcVar8[0xc]);
  *(undefined4 *)(pcVar8 + 0xc) = uVar10;
  if (param_4 == 0) {
    param_4 = FUN_100a71c4(param_1);
    param_4 = param_4 & 0xff;
  }
  if (param_4 == 1) {
    cVar3 = '\x02';
LAB_100a8910:
    pcVar8[7] = cVar3;
    pcVar8[2] = (char)param_4;
  }
  else if (param_4 == 2) {
    cVar3 = '\x04';
    goto LAB_100a8910;
  }
  iVar9 = FUN_1011dbc4();
  if (iVar9 == 0) {
    if (param_2 < 0x11) {
      sVar6 = (ushort)(byte)pcVar8[7] * (short)param_2 * 8;
    }
    else {
      sVar6 = 0x400;
    }
  }
  else if ((byte)pcVar8[6] < 0x11) {
    sVar6 = 0x100;
  }
  else {
    sVar6 = 0x200;
  }
  *(short *)(pcVar8 + 0x10) = sVar6;
  *(undefined4 *)(pcVar8 + 0x14) = DAT_100a8b20;
  FUN_1011ea48(&local_3c,0,0x1c);
  local_3b = (undefined1)(*(uint *)(pcVar8 + 0xc) / 1000);
  local_3a = pcVar8[3];
  local_39 = pcVar8[4];
  local_37 = 0x10;
  local_38 = 1;
  if (pcVar8[2] != '\x01') {
    local_38 = 2;
  }
  local_30 = FUN_100a7e24(*pcVar8);
  local_28 = DAT_100a8b24;
  bVar2 = local_3c | 0x40;
  if ((int)((uint)(byte)pcVar8[5] << 0x1c) < 0) {
    local_36 = *(undefined2 *)(pcVar8 + 0x10);
    local_34 = *(undefined4 *)(pcVar8 + 0x14);
    bVar2 = local_3c | 0x44;
  }
  local_3c = bVar2;
  uStack_2c = local_30;
  pcStack_24 = pcVar8;
  iVar9 = FUN_100642b4(&local_3c);
  *(int *)(pcVar8 + 0x24) = iVar9;
  if (iVar9 == 0) {
    uVar14 = uVar14 | 0x1e20000;
    uVar10 = DAT_100a8b1c;
    uVar12 = DAT_100a8b28;
LAB_100a89b0:
    uVar14 = uVar14 | 0x11;
  }
  else {
    if (*pcVar8 == '\x04') {
      uVar5 = FUN_100a735c();
      uVar11 = (*(code *)**(undefined4 **)(DAT_100a8b2c + 0x38))();
      uVar1 = uVar11;
      if (uVar5 != 0) {
        uVar1 = (uVar11 * uVar5) / 100;
      }
      FUN_100a87e4(pcVar8,uVar1 & 0xffff);
      FUN_100a5b78(uVar14 | 0x1ee0033,DAT_100a8b1c,DAT_100a8b30,*pcVar8,uVar11,uVar1 & 0xffff);
    }
    FUN_100645d8(*(undefined4 *)(pcVar8 + 0x24),1);
    iVar9 = FUN_100a7dfc(*pcVar8);
    FUN_10064518(*(undefined4 *)(pcVar8 + 0x24),iVar9 == 0);
    if (param_5 == 0) {
      uVar10 = FUN_1012e06e(9,param_1);
      uVar12 = FUN_1012e0a2(9,param_1);
      uVar10 = FUN_100a166c(uVar10,uVar12);
    }
    else {
      uVar10 = FUN_100a1660(param_5);
    }
    *(undefined4 *)(pcVar8 + 0x18) = uVar10;
    if (*(int *)(pcVar8 + 0x18) != 0) {
      iVar9 = FUN_100a03c0(*(int *)(pcVar8 + 0x18),0xb);
      if (iVar9 == 0) {
        iVar9 = FUN_1012d654(*(undefined4 *)(pcVar8 + 0x18));
        iVar13 = FUN_1012d608(*(undefined4 *)(pcVar8 + 0x18));
        if (iVar13 + iVar9 < (int)(uint)*(ushort *)(pcVar8 + 0x10)) {
          sVar6 = FUN_1012d654(*(undefined4 *)(pcVar8 + 0x18));
          sVar7 = FUN_1012d608(*(undefined4 *)(pcVar8 + 0x18));
          *(short *)(pcVar8 + 0x10) = sVar7 + sVar6;
          if ((ushort)(sVar7 + sVar6) < 0x1e0) {
            FUN_10064698(*(undefined4 *)(pcVar8 + 0x24),0x70,0x78);
            FUN_100a5b78(uVar14 | 0x2100032,DAT_100a8b1c,DAT_100a8b40,0x70,0x78);
          }
        }
        FUN_1012d6c0(*(undefined4 *)(pcVar8 + 0x18),pcVar8,DAT_100a8b44,0x12);
        iVar9 = FUN_100a79b4(pcVar8);
        if (iVar9 == 0) {
          if (pcVar8[1] == '\x01') {
            uVar10 = 0x10;
          }
          else {
            uVar10 = 0x20;
          }
          uVar10 = FUN_100aed84(pcVar8[6],pcVar8[2],uVar10,1);
          *(undefined4 *)(pcVar8 + 0x28) = param_6;
          *(undefined4 *)(pcVar8 + 0x58) = uVar10;
          *(undefined4 *)(pcVar8 + 0x2c) = param_7;
          if ((byte)pcVar8[6] < 0x11) {
            iVar9 = (uint)(byte)pcVar8[2] * (uint)(byte)pcVar8[6] * 4;
            FUN_10064698(*(undefined4 *)(pcVar8 + 0x24),iVar9,iVar9 + 4);
          }
          FUN_100a5b78(uVar14 | 0x22c0031,DAT_100a8c2c,DAT_100a8c28,*pcVar8);
          FUN_100a5b78(DAT_100a8c30 | uVar14,DAT_100a8c2c,DAT_100a8c34,pcVar8[1]);
          FUN_100a5b78(DAT_100a8c38 | uVar14,DAT_100a8c2c,DAT_100a8c3c,pcVar8[2]);
          FUN_100a5b78(DAT_100a8c40 | uVar14,DAT_100a8c2c,DAT_100a8c44,pcVar8[3]);
          FUN_100a5b78(uVar14 | 0x2300031,DAT_100a8c2c,DAT_100a8c48,pcVar8[4]);
          FUN_100a5b78(DAT_100a8c4c | uVar14,DAT_100a8c2c,DAT_100a8c50,pcVar8[5]);
          FUN_100a5b78(DAT_100a8c54 | uVar14,DAT_100a8c2c,DAT_100a8c58,pcVar8[6]);
          FUN_100a5b78(DAT_100a8c5c | uVar14,DAT_100a8c2c,DAT_100a8c60,*(undefined4 *)(pcVar8 + 0xc)
                      );
          FUN_100a5b78(uVar14 | 0x2340031,DAT_100a8c2c,DAT_100a8c64,*(undefined2 *)(pcVar8 + 10));
          FUN_100a5b78(DAT_100a8c68 | uVar14,DAT_100a8c2c,DAT_100a8c6c,
                       *(undefined4 *)(pcVar8 + 0x18));
          FUN_100a7a24();
          return pcVar8;
        }
        uVar14 = uVar14 | 0x2180000;
        uVar10 = DAT_100a8b1c;
        uVar12 = DAT_100a8b48;
      }
      else {
        FUN_100a0b00(*(undefined4 *)(pcVar8 + 0x18));
        uVar12 = DAT_100a8b3c;
        uVar10 = DAT_100a8b1c;
        pcVar8[0x18] = '\0';
        pcVar8[0x19] = '\0';
        pcVar8[0x1a] = '\0';
        pcVar8[0x1b] = '\0';
        uVar14 = uVar14 | 0x2080000;
      }
      goto LAB_100a89b0;
    }
    uVar14 = DAT_100a8b34 | uVar14;
    uVar10 = DAT_100a8b1c;
    uVar12 = DAT_100a8b38;
  }
  FUN_100a5b78(uVar14,uVar10,uVar12);
  FUN_1012d1f4(pcVar8);
LAB_100a88ae:
  FUN_100a7a24();
  return (char *)0x0;
}

