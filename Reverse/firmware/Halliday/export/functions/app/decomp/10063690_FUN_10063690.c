/* FUN_10063690 @ 0x10063690 */

undefined4 FUN_10063690(int param_1,byte *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint local_44 [4];
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_44[0] = *DAT_10063730;
  local_44[1] = DAT_10063730[1];
  local_44[2] = DAT_10063730[2];
  local_44[3] = DAT_10063730[3];
  local_34 = DAT_10063730[4];
  uStack_30 = DAT_10063730[5];
  uStack_2c = DAT_10063730[6];
  uStack_28 = DAT_10063730[7];
  local_24 = DAT_10063730[8];
  uStack_20 = DAT_10063730[9];
  uStack_1c = DAT_10063730[10];
  uVar3 = 0;
  if (param_1 != 0) {
    if (param_2 == (byte *)0x0) {
      uVar3 = 0;
    }
    else {
      pbVar4 = param_2;
      puVar2 = (uint *)(param_1 + -4);
      do {
        pbVar5 = pbVar4 + 4;
        puVar2 = puVar2 + 1;
        *puVar2 = (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[3] |
                  (uint)pbVar4[2] << 8;
        iVar1 = DAT_10063734;
        pbVar4 = pbVar5;
      } while (param_2 + 0x10 != pbVar5);
      uVar6 = 4;
      puVar2 = (uint *)(param_1 + -4);
      do {
        uVar7 = puVar2[4];
        if ((uVar6 & 3) == 0) {
          uVar7 = *(uint *)((int)local_44 + (uVar6 & 0xfffffffc)) ^
                  ((uint)*(byte *)(iVar1 + (uVar7 >> 0x18)) |
                   (uint)*(byte *)(iVar1 + ((uVar7 & 0xffffff) >> 0x10)) << 0x18 |
                   (uint)*(byte *)(iVar1 + ((uVar7 & 0xffff) >> 8)) << 0x10 |
                  (uint)*(byte *)(iVar1 + (uVar7 & 0xff)) << 8);
        }
        uVar6 = uVar6 + 1;
        puVar2[5] = uVar7 ^ puVar2[1];
        puVar2 = puVar2 + 1;
      } while (uVar6 != 0x2c);
      uVar3 = 1;
    }
  }
  return uVar3;
}

