/* FUN_10034af0 @ 0x10034af0 */

bool FUN_10034af0(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined1 auStack_12c [256];
  int local_2c;
  
  local_2c = *DAT_10034ca8;
  uVar9 = (DAT_10034cac - DAT_10034cb0) * 0x20 & 0xff00;
  if (param_1 != (undefined4 *)0x0) goto LAB_10034b2e;
  FUN_100a5b78(DAT_10034cb4 | uVar9,DAT_10034cbc,DAT_10034cb8);
  do {
    bVar7 = false;
LAB_10034b1e:
    if (*DAT_10034ca8 == local_2c) {
      return bVar7;
    }
    FUN_1013cdc0();
LAB_10034b2e:
    uVar8 = 0;
    FUN_1011ea48(DAT_10034cc0,0,0x2afc);
    FUN_10033ef8();
    puVar1 = DAT_10034cf8;
    uVar4 = DAT_10034cbc;
    local_13c = 0;
    uStack_138 = 0;
    local_134 = 0;
    iVar3 = DAT_10034cc0;
    while( true ) {
      if (*puVar1 <= uVar8) goto LAB_10034b98;
      FUN_100a5b78(uVar9 | 0x4400032,uVar4,DAT_10034cc4,iVar3,iVar3 + 10);
      iVar2 = FUN_1011ea18(iVar3 + 10,param_1);
      if (iVar2 == 0) break;
      uVar8 = uVar8 + 1;
      iVar3 = iVar3 + 0x6e;
    }
    uVar8 = (uint)(char)uVar8;
    FUN_1013d3f0(&local_13c,iVar3,10);
    puVar1 = DAT_10034cf8;
    if ((int)uVar8 < 0) {
LAB_10034b98:
      uVar8 = DAT_10034cc8 | uVar9;
      uVar4 = DAT_10034ccc;
      puVar5 = param_1;
      goto LAB_10034ba2;
    }
    iVar3 = uVar8 * 0x6e + DAT_10034cc0;
    while( true ) {
      uVar6 = *puVar1 - 1;
      if (uVar6 <= uVar8) break;
      FUN_1011ea40(iVar3,iVar3 + 0x6e,0x6e);
      uVar8 = uVar8 + 1;
      iVar3 = iVar3 + 0x6e;
    }
    *puVar1 = uVar6;
    FUN_10034424();
    local_130 = 0;
    FUN_1011ea48(auStack_12c,0,0xfd);
    FUN_10034ab4(&local_130,&local_13c);
    puVar5 = &local_13c;
    FUN_100a5b78(DAT_10034cd0 | uVar9,DAT_10034cbc,DAT_10034cd4,&local_130,puVar5);
    iVar3 = FUN_1006c2a0(&local_130);
    if (iVar3 < 0) {
      FUN_100a5b78(DAT_10034ce8 | uVar9,DAT_10034cbc,DAT_10034cec,&local_130,puVar5);
    }
    bVar7 = iVar3 >= 0;
    FUN_1011ea48(&local_130,0,0x101);
    iVar3 = FUN_1011ea08(&local_13c,0x2e);
    if (iVar3 + 1 != 0) {
      uVar4 = FUN_1011ea10(DAT_10034cd8);
      FUN_1011e9f8(iVar3 + 1,DAT_10034cd8,uVar4);
    }
    FUN_10034ab4(&local_130,&local_13c);
    puVar5 = &local_13c;
    FUN_100a5b78(DAT_10034cdc | uVar9,DAT_10034cbc,DAT_10034ce0,&local_130,puVar5);
    iVar3 = FUN_1004108c(&local_130);
    if ((iVar3 == 0) || (iVar3 = FUN_1006c2a0(&local_130), -1 < iVar3)) {
      if (bVar7) {
        FUN_100a5b78(DAT_10034cf0 | uVar9,DAT_10034cbc,DAT_10034cf4,param_1,puVar5);
        FUN_10034178();
      }
      goto LAB_10034b1e;
    }
    puVar5 = &local_130;
    uVar8 = uVar9 | 0x4700011;
    uVar4 = DAT_10034ce4;
LAB_10034ba2:
    FUN_100a5b78(uVar8,DAT_10034cbc,uVar4,puVar5);
  } while( true );
}

