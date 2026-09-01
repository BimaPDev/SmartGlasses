/* FUN_100357f4 @ 0x100357f4 */

void FUN_100357f4(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  
  puVar8 = DAT_100358d4;
  iVar12 = *DAT_100358d0;
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    if (*DAT_100358d0 == iVar12) {
      return;
    }
  }
  else {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = *param_1;
    *(ushort *)(DAT_100358d4 + 4) = CONCAT11(uVar1,uVar2);
    uVar4 = param_1[3];
    uVar7 = CONCAT11(uVar4,param_1[4]);
    *(undefined2 *)(puVar8 + 6) = uVar7;
    if (7 < param_2) {
      uVar4 = param_1[7];
    }
    uVar6 = param_1[6];
    uVar5 = param_1[5];
    if (7 < param_2) {
      puVar8[0x2c] = uVar4;
    }
    if (8 < param_2) {
      uVar4 = param_1[8];
    }
    *puVar8 = uVar3;
    if (8 < param_2) {
      puVar8[0x2d] = uVar4;
    }
    if (9 < param_2) {
      uVar4 = param_1[9];
    }
    puVar8[1] = uVar6;
    if (9 < param_2) {
      puVar8[0x2e] = uVar4;
    }
    uVar9 = DAT_100358d8;
    if (0xb < param_2) {
      *(ushort *)(puVar8 + 0x30) = CONCAT11(param_1[10],param_1[0xb]);
    }
    puVar11 = PTR_s_ring_info_type__d__hardware__d__s_100358e8;
    puVar10 = PTR_s_ring_recv_info_100358e4;
    uVar13 = ((int)PTR_DAT_100358dc - (int)PTR_DAT_100358e0) * 0x20 & 0xff00;
    puVar8[2] = uVar5;
    FUN_100a5b78(uVar9 | uVar13,puVar10,puVar11,uVar3,CONCAT11(uVar1,uVar2),uVar7,uVar5,uVar6);
    FUN_100a5b78(uVar13 | 0x1fc0034,PTR_s_ring_recv_info_100358e4,
                 PTR_s_ring_info_voltage__d__temperatur_100358ec,*(undefined2 *)(puVar8 + 0x30),
                 puVar8[0x2c],puVar8[0x2d],puVar8[0x2e]);
    if (*DAT_100358d0 == iVar12) goto LAB_100358b6;
  }
  FUN_1013cdc0();
LAB_100358b6:
  FUN_10048980();
  return;
}

