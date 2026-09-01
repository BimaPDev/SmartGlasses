/* FUN_10032e34 @ 0x10032e34 */

uint FUN_10032e34(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  ushort local_34;
  byte local_32;
  int local_2c;
  
  local_2c = *DAT_10033014;
  iVar8 = *DAT_10033018;
  uVar9 = (DAT_1003301c - DAT_10033020) * 0x20 & 0xff00;
  if (iVar8 != 0) goto LAB_10032e78;
  FUN_100a5b78(DAT_10033024 | uVar9,DAT_1003302c,DAT_10033028);
  param_2 = 0;
  do {
    while( true ) {
      if (*DAT_10033014 == local_2c) {
        return param_2;
      }
      FUN_1013cdc0();
LAB_10032e78:
      FUN_100347c4();
      FUN_1011ea48(auStack_40,0,0x14);
      iVar1 = FUN_1003494c(*(undefined1 *)(iVar8 + 0x16c),auStack_40);
      if (iVar1 == 0) break;
      FUN_100a5b78(DAT_10033030 | uVar9,DAT_1003302c,DAT_10033034,*(undefined1 *)(iVar8 + 0x16c));
      uVar7 = *(uint *)(iVar8 + 0x164);
      if (uVar7 <= param_2) {
        param_2 = 0;
      }
      if (uVar7 < param_2 + 0x7ff) {
        sVar5 = (short)uVar7 - (short)param_2;
      }
      else {
        sVar5 = 0x7ff;
      }
      uVar7 = FUN_10034fa4(iVar8 + 0x170,param_1,param_2,sVar5);
      if (uVar7 == 0) {
        uVar2 = uVar9 | 0x1e20012;
        param_2 = uVar7;
LAB_10032f10:
        FUN_100a5b78(uVar2,DAT_1003302c,DAT_10033038,DAT_1003302c,param_2);
      }
      else {
        bVar10 = 0;
        uVar3 = FUN_1012579a(*(undefined4 *)(iVar8 + 0x14));
        uVar9 = 0;
        do {
          param_2 = uVar9;
          if (*(byte *)(iVar8 + 0x15f) <= bVar10) break;
          local_44 = 0;
          iVar1 = FUN_1002e8b0(*(undefined4 *)(iVar8 + 0x14),param_1 + uVar9,uVar3,&local_44);
          uVar9 = uVar9 + iVar1;
          bVar10 = bVar10 + 1;
          param_2 = uVar7;
        } while (uVar9 < uVar7);
        puVar4 = (undefined1 *)FUN_1013d44e(param_1,DAT_10033040);
        uVar9 = DAT_10033040;
        iVar8 = 0x20;
        for (; puVar4 != (undefined1 *)0x0; puVar4 = (undefined1 *)FUN_1013d44e(puVar4,uVar9)) {
          *puVar4 = 0x20;
        }
        param_1 = param_1 + param_2;
        if (param_2 < uVar7) {
          FUN_1011ea48(param_1,0,uVar7 - param_2);
        }
        *param_1 = 0;
      }
    }
    uVar7 = *(uint *)(iVar8 + 0x164);
    if (uVar7 <= param_2) {
      param_2 = 0;
    }
    uVar6 = local_34;
    if (uVar7 < param_2 + local_34) {
      uVar6 = (short)uVar7 - (short)param_2;
    }
    uVar7 = FUN_10034fa4(iVar8 + 0x170,param_1,param_2,uVar6);
    if (uVar7 == 0) {
      uVar2 = DAT_1003303c | uVar9;
      param_2 = uVar7;
      goto LAB_10032f10;
    }
    bVar10 = 0;
    uVar3 = FUN_1012579a(*(undefined4 *)(iVar8 + 0x14));
    uVar2 = 0;
    do {
      param_2 = uVar2;
      if (local_32 <= bVar10) break;
      local_44 = 0;
      iVar1 = FUN_1002e8b0(*(undefined4 *)(iVar8 + 0x14),param_1 + uVar2,uVar3,&local_44);
      uVar2 = uVar2 + iVar1;
      bVar10 = bVar10 + 1;
      param_2 = uVar7;
    } while (uVar2 < uVar7);
    puVar4 = (undefined1 *)FUN_1013d44e(param_1,DAT_10033040);
    uVar2 = DAT_10033040;
    for (; puVar4 != (undefined1 *)0x0; puVar4 = (undefined1 *)FUN_1013d44e(puVar4,uVar2)) {
      *puVar4 = 0x20;
    }
    param_1 = param_1 + param_2;
    if (param_2 < uVar7) {
      FUN_1011ea48(param_1,0,uVar7 - param_2);
    }
    uVar2 = DAT_10033044;
    *param_1 = 0;
    FUN_100a5b78(uVar2 | uVar9,DAT_1003302c,DAT_10033048,*(undefined1 *)(iVar8 + 0x16c),local_3c,
                 uVar7,param_2);
  } while( true );
}

