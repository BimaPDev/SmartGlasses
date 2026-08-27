/* FUN_2c01a01c @ 0x2c01a01c */

void FUN_2c01a01c(int param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined1 auVar14 [16];
  undefined1 in_q2 [16];
  undefined1 auVar15 [16];
  int local_2c;
  
  iVar2 = DAT_2c01a19c;
  uVar6 = (uint)*(byte *)(param_1 + 6);
  if ((uVar6 != 0) && (uVar8 = (uint)*(byte *)(param_1 + 5), uVar8 != 0)) {
    pbVar7 = (byte *)(param_1 + 0x14);
    uVar13 = 0;
    do {
      uVar5 = *(ushort *)(param_1 + 8);
      uVar4 = 0;
      pbVar3 = param_2;
      pbVar9 = pbVar7;
      do {
        if ((uVar5 & 7) == 0) {
          if ((uVar6 - 1 == uVar13) && (uVar8 - 1 == uVar4)) {
            uVar10 = (uint)*pbVar3;
            bVar11 = *(byte *)(param_1 + 0xb) << 1;
            if (*(byte *)(param_1 + 0xb) >> 7 != *pbVar3 >> 7) {
              bVar11 = bVar11 ^ 0x1d;
            }
            bVar12 = bVar11 << 1;
            if ((uVar10 & 0x7f) >> 6 != (uint)(bVar11 >> 7)) {
              bVar12 = bVar12 ^ 0x1d;
            }
            bVar11 = bVar12 << 1;
            if ((uVar10 & 0x3f) >> 5 != (uint)(bVar12 >> 7)) {
              bVar11 = bVar11 ^ 0x1d;
            }
            bVar12 = bVar11 << 1;
            if ((uVar10 & 0x1f) >> 4 != (uint)(bVar11 >> 7)) {
              bVar12 = bVar12 ^ 0x1d;
            }
            *(byte *)(param_1 + 0xb) = bVar12;
          }
          *pbVar9 = *pbVar3 >> 4;
          param_2 = pbVar3;
        }
        else {
          *(undefined1 *)(param_1 + 0xb) =
               *(undefined1 *)(iVar2 + (uint)(*(byte *)(param_1 + 0xb) ^ *pbVar3));
          param_2 = pbVar3 + 1;
          *pbVar9 = *pbVar3 & 0xf;
        }
        uVar5 = uVar5 + 4;
        uVar4 = uVar4 + 1;
        pbVar9 = pbVar9 + 1;
        *(ushort *)(param_1 + 8) = uVar5;
        pbVar3 = param_2;
      } while (uVar4 != uVar8);
      uVar13 = uVar13 + 1;
      pbVar7 = pbVar7 + 8;
    } while (uVar13 != uVar6);
  }
  local_2c = param_1 + 0x14;
  auVar14._8_8_ = DAT_2c01a194;
  auVar14._0_8_ = DAT_2c01a18c;
  auVar1._8_8_ = 0x100000001;
  auVar1._0_8_ = 0x100000001;
  coprocessor_load(0xf,in_cr4,local_2c);
  auVar15 = VectorAdd(in_q2,auVar14,4);
  auVar15 = VectorShiftLeft(auVar1,auVar15,4,1);
  coprocessor_store(0xf,in_cr5,param_1 + 0x24);
  coprocessor_load(0xf,in_cr4,param_1 + 0x18);
  auVar15 = VectorAdd(auVar15,auVar14,4);
  auVar15 = VectorShiftLeft(auVar1,auVar15,4,1);
  coprocessor_store(0xf,in_cr5,param_1 + 0x34);
  coprocessor_load(0xf,in_cr4,param_1 + 0x1c);
  auVar15 = VectorAdd(auVar15,auVar14,4);
  auVar15 = VectorShiftLeft(auVar1,auVar15,4,1);
  coprocessor_store(0xf,in_cr5,param_1 + 0x44);
  coprocessor_load(0xf,in_cr4,param_1 + 0x20);
  auVar14 = VectorAdd(auVar15,auVar14,4);
  VectorShiftLeft(auVar1,auVar14,4,1);
  coprocessor_store(0xf,in_cr7,param_1 + 0x54);
  return;
}

