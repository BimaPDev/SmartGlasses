/* FUN_1007172c @ 0x1007172c */

undefined4 FUN_1007172c(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_r2;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint local_1c;
  
  uVar8 = param_1;
  local_1c = param_2;
  uVar9 = FUN_1011f622(DAT_10071844);
  puVar3 = DAT_10071868;
  puVar2 = DAT_10071848;
  iVar6 = (int)((ulonglong)uVar9 >> 0x20);
  if ((((int)uVar9 << 0x1e < 0) && (iVar6 != 0)) && (extraout_r2 != 0)) {
    uVar1 = (ushort)(extraout_r2 + 3U) & 0xfffc;
    uVar7 = extraout_r2 + 3U & 0xfffc;
    *(int *)(DAT_10071848 + 2) = iVar6;
    puVar2[5] = uVar1 + 4;
    *puVar2 = uVar1;
    *(char *)(puVar2 + 1) = (char)param_1;
    puVar2[4] = (ushort)extraout_r2;
    do {
      local_1c = 0;
      puVar4 = (undefined4 *)FUN_1011ea96(puVar3[0x1c] + 0x2ff18000,puVar2[5],&local_1c,uVar7,uVar8)
      ;
      if (puVar4 == (undefined4 *)0x0) {
        FUN_100a5b78(DAT_10071854 | (DAT_10071850 - DAT_1007184c) * 0x20 & 0xff00U,DAT_1007185c,
                     DAT_10071858);
LAB_10071792:
        if (puVar2[5] != 0) {
          FUN_100a5b78((DAT_10071850 - DAT_1007184c) * 0x20 & 0xff00U | 0x3880011,DAT_10071864,
                       DAT_10071860);
          uVar8 = 0xffffffea;
          goto LAB_10071818;
        }
        break;
      }
      if (*(char *)((int)puVar2 + 0xf) == '\0') {
        puVar5 = puVar4 + 1;
        *puVar4 = *(undefined4 *)puVar2;
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
        uVar7 = (uint)puVar2[4] - (uint)puVar2[6];
        if (local_1c - 4 <= (uint)puVar2[4] - (uint)puVar2[6]) {
          uVar7 = local_1c - 4;
        }
      }
      else {
        puVar5 = puVar4;
        uVar7 = (uint)puVar2[4] - (uint)puVar2[6];
        if (local_1c <= (uint)puVar2[4] - (uint)puVar2[6]) {
          uVar7 = local_1c;
        }
      }
      FUN_1011ea40(puVar5,(uint)puVar2[6] + *(int *)(puVar2 + 2),uVar7 & 0xffff);
      iVar6 = puVar3[0x1c];
      puVar2[6] = (short)uVar7 + puVar2[6];
      FUN_1011eb2a(iVar6 + 0x2ff18000,local_1c);
      uVar7 = puVar2[5] - local_1c & 0xffff;
      puVar2[5] = (ushort)(puVar2[5] - local_1c);
      if (local_1c == 0) goto LAB_10071792;
    } while (uVar7 != 0);
    FUN_1011f5fc(*puVar3);
    uVar8 = 0;
LAB_10071818:
    FUN_1011ea48(DAT_10071848,0,0x10);
  }
  else {
    uVar8 = 0xffffffea;
  }
  return uVar8;
}

