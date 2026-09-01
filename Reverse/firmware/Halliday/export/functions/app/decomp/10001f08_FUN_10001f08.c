/* FUN_10001f08 @ 0x10001f08 */

void FUN_10001f08(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort local_20;
  ushort local_1e;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  _local_20 = CONCAT22((ushort)*(byte *)(param_2 + 0x2e) | (*(byte *)(param_2 + 0x2f) & 1) << 8,
                       (ushort)*(byte *)(param_2 + 0x2d) << 1 |
                       (ushort)(*(byte *)(param_2 + 0x2c) >> 7));
  local_1c = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(uint *)(param_2 + 0x14);
  uStack_18 = param_3;
  if (uVar8 == 0) {
    if (*DAT_100020a4 != '\0') {
      *DAT_100020a4 = '\0';
      FUN_100031c8(param_1 + 9);
    }
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
      (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x10),&local_20);
    }
  }
  else {
    *DAT_100020a4 = '\x01';
    puVar2 = DAT_100020a8;
    DAT_100020a8[199] = uVar8;
    puVar2[200] = *(uint *)(param_2 + 0x18);
  }
  puVar2 = DAT_100020a8;
  uVar8 = *(uint *)(param_2 + 4);
  if ((uVar8 & 0x20) != 0) {
    DAT_100020a8[0xcb] = *(uint *)(param_2 + 0x24);
    puVar2[0xc9] = *(uint *)(param_2 + 0x1c);
    puVar2[0xca] = *(uint *)(param_2 + 0x20);
  }
  *puVar2 = uVar8;
  puVar2[9] = *(uint *)(param_2 + 0xc);
  puVar2[1] = 0xb;
  puVar2[5] = *(uint *)(param_2 + 8);
  uVar6 = *(ushort *)(param_2 + 0x30) - 1 | (*(ushort *)(param_2 + 0x32) - 1) * 0x10000;
  puVar2[4] = uVar6;
  puVar2[0xc0] = *(uint *)(param_2 + 0x10);
  uVar8 = (uint)*(byte *)(param_2 + 0x2c);
  if ((*(byte *)(param_2 + 0x2c) & 0x18) != 0) {
    iVar5 = 2;
    puVar2[0xc2] = uVar6;
    iVar3 = DAT_100020ac;
    puVar2[0xd0] = *(uint *)(param_2 + 0x28);
    while( true ) {
      iVar7 = DAT_100020b0;
      bVar1 = *(byte *)(param_2 + 0x2c);
      uVar6 = (uint)bVar1;
      if ((bVar1 & 0x18) == 0) break;
      iVar7 = iVar5 * 0x18 + param_2;
      puVar4 = *(undefined4 **)(iVar3 + iVar5 * 4);
      *puVar4 = *(undefined4 *)(iVar7 + 0x54);
      iVar5 = (int)(char)((char)iVar5 + -1);
      puVar4[1] = *(undefined4 *)(iVar7 + 0x58);
      puVar4[2] = *(undefined4 *)(iVar7 + 0x5c);
      puVar4[3] = *(undefined4 *)(iVar7 + 0x60);
      puVar4[4] = *(undefined4 *)(iVar7 + 100);
      puVar4[7] = *(undefined4 *)(iVar7 + 0x68);
      *(byte *)(param_2 + 0x2c) = bVar1 & 0xe7 | (byte)((((uVar6 & 0x1f) >> 3) + 3 & 3) << 3);
    }
    uVar8 = uVar6 << 0x1e;
    if ((int)uVar8 < 0) {
      *(undefined4 *)(DAT_100020b0 + 0x20) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
      uVar8 = *(uint *)(param_2 + 0x44);
      *(uint *)(iVar7 + 0x30) = uVar8;
    }
    puVar2 = DAT_100020a8;
    if ((int)(uVar6 << 0x1d) < 0) {
      DAT_100020a8[0x180] = *(uint *)(param_2 + 0x48);
      puVar2[0x181] = *(uint *)(param_2 + 0x4c);
      uVar8 = *(uint *)(param_2 + 0x50);
      puVar2[0x182] = uVar8;
    }
    if ((int)(uVar6 << 0x1f) < 0) {
      FUN_10001ca4(1);
      uVar8 = extraout_r1;
    }
  }
  puVar2 = DAT_100020a8;
  DAT_100020a8[2] = 1;
  if (puVar2[7] == 0) {
    if (*(char *)(param_1 + 9) == '\0') {
      FUN_10003098(param_1 + 0x60,uVar8,500,0);
    }
    puVar2[7] = 1;
    do {
    } while (DAT_100020a8[7] == 0);
    DAT_100020a8[8] = 1;
    if ((*(int *)(param_2 + 0x14) == 0) && (*(code **)(param_1 + 0x14) != (code *)0x0)) {
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}

