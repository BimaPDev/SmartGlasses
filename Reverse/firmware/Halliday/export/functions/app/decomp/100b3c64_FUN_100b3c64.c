/* FUN_100b3c64 @ 0x100b3c64 */

undefined4 * FUN_100b3c64(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_34 [3];
  int local_28;
  undefined4 *local_1c;
  
  iVar3 = FUN_100a9c00(param_1[2],0);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_100a92d4(0xc4,0);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_1011ea48(puVar4,0,0xc4);
  puVar4[0x2a] = iVar3;
  puVar4[0x14] = (uint)(byte)param_1[5];
  uVar5 = FUN_100af4e0(param_1[4]);
  uVar2 = *(ushort *)(param_1 + 6);
  *puVar4 = uVar5;
  puVar4[3] = (uint)uVar2 * 1000;
  uVar8 = (uint)(byte)param_1[3];
  puVar4[1] = uVar8;
  puVar4[2] = uVar8;
  bVar1 = param_1[2];
  switch(bVar1) {
  case 3:
    if ((uint)uVar2 < (byte)param_1[4] * uVar8 * 0x10) {
      uVar5 = 1;
      goto LAB_100b3d64;
    }
    break;
  case 10:
    uVar5 = 0;
LAB_100b3d64:
    puVar4[4] = uVar5;
    break;
  case 0xb:
    puVar4[3] = 0x1a;
    puVar4[4] = 1;
    break;
  case 0xc:
    puVar4[0x15] = puVar4 + 0x16;
    puVar4[0x16] = 0x800;
    puVar4[0x17] = 3;
    puVar4[0x18] = 0;
  }
  iVar3 = FUN_100a9bcc(bVar1,0);
  if ((0 < iVar3) && ((bVar1 & 0xfb) != 0xb)) {
    FUN_101162c8();
  }
  FUN_1011ea48(local_34,0,0x18);
  local_1c = puVar4;
  (*(code *)puVar4[0x2a])(0,3,local_34);
  iVar6 = FUN_1012e0a2(0x16,*param_1);
  iVar7 = FUN_1012e0a2(0x17,*param_1);
  iVar9 = DAT_100b3e84;
  iVar3 = DAT_100b3e80;
  if ((iVar6 < local_34[0]) || (iVar7 < local_28)) {
    uVar8 = (DAT_100b3e80 - DAT_100b3e84) * 0x20 & 0xff00U | 0x720000;
    uVar5 = DAT_100b3e88;
  }
  else {
    puVar4[0xb] = local_34[0];
    if (0 < local_34[0]) {
      uVar5 = FUN_1012e06e(0x16,*param_1);
      puVar4[8] = uVar5;
      FUN_1011ea48(uVar5,0,puVar4[0xb]);
    }
    puVar4[0x11] = local_28;
    if (0 < local_28) {
      uVar5 = FUN_1012e06e(0x17,*param_1);
      puVar4[0xe] = uVar5;
    }
    iVar6 = (*(code *)puVar4[0x2a])(puVar4 + 0x2b,0,puVar4);
    uVar8 = (iVar3 - iVar9) * 0x20 & 0xff00;
    if ((iVar6 != 0) || (puVar4[0x2b] == 0)) {
      FUN_100a5b78(uVar8 | 0x880011,DAT_100b3e8c,iVar6);
      goto LAB_100b3d50;
    }
    FUN_100a5b78(uVar8 | 0x8d0032,DAT_100b3e90,puVar4[6],puVar4[7]);
    iVar9 = puVar4[0x14];
    iVar3 = iVar9;
    if (iVar9 < 0) {
      iVar3 = iVar9 + 7;
    }
    puVar4[0x2c] = (int)puVar4[6] / (iVar3 >> 3);
    puVar4[0x25] = puVar4 + 0x19;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = iVar9;
    puVar4[0x20] = 0;
    puVar4[0x1d] = puVar4[1];
    if (-1 < (int)((uint)(byte)param_1[1] << 0x1f)) {
      return puVar4;
    }
    uVar5 = FUN_1012e06e(6,*param_1);
    puVar4[0x2d] = uVar5;
    uVar5 = FUN_1012e0a2(6,*param_1);
    puVar4[0x2e] = uVar5;
    uVar5 = FUN_1012e06e(3,*param_1);
    puVar4[0x2f] = uVar5;
    iVar7 = FUN_1012e0a2(3,*param_1);
    iVar3 = puVar4[1];
    iVar6 = puVar4[0x2e];
    local_34[0] = iVar3 * puVar4[6];
    local_28 = puVar4[7];
    puVar4[0x30] = iVar7;
    if ((local_34[0] <= iVar6) && (local_28 <= iVar7)) {
      if (1 < iVar3) {
        iVar6 = puVar4[0x2d] + iVar6 / 2;
      }
      puVar4[0x19] = puVar4[0x2d];
      if (1 < iVar3) {
        puVar4[0x1a] = iVar6;
        return puVar4;
      }
      return puVar4;
    }
    uVar8 = uVar8 | 0xa10000;
    uVar5 = DAT_100b3e94;
  }
  FUN_100a5b78(uVar8 | 0x14,uVar5,iVar6,local_34[0],iVar7,local_28);
LAB_100b3d50:
  FUN_100a92e4(puVar4);
  return (undefined4 *)0x0;
}

