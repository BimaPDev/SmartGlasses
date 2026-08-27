/* FUN_2c4f959c @ 0x2c4f959c */

void FUN_2c4f959c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = DAT_2c4f9680;
  uVar7 = param_1[4];
  uVar4 = uVar7 & 7;
  uVar2 = param_1[6] - 1;
  param_1[3] = param_1[3] + param_3;
  uVar3 = uVar7 >> 3;
  *param_1 = *param_1 + param_3;
  uVar8 = uVar2 & uVar7 >> 3;
  uVar5 = *(uint *)(iVar1 + (0x20 - param_3) * 4);
  param_1[4] = param_1[7] - 1U & uVar7 + param_3;
  uVar6 = uVar5 >> uVar4 | ~*(uint *)(iVar1 + (0x20 - uVar4) * 4);
  uVar5 = (uint)(param_2 << (0x20 - param_3 & 0xff)) >> uVar4;
  uVar7 = uVar3 + 1 & uVar2;
  *(byte *)(param_1[5] + uVar8) =
       *(byte *)(param_1[5] + uVar8) & (byte)(uVar6 >> 0x18) | (byte)(uVar5 >> 0x18);
  uVar8 = uVar3 + 2 & uVar2;
  *(byte *)(param_1[5] + uVar7) =
       *(byte *)(param_1[5] + uVar7) & (byte)(uVar6 >> 0x10) | (byte)(uVar5 >> 0x10);
  uVar7 = uVar3 + 3 & uVar2;
  *(byte *)(param_1[5] + uVar8) =
       *(byte *)(param_1[5] + uVar8) & (byte)(uVar6 >> 8) | (byte)(uVar5 >> 8);
  *(byte *)(param_1[5] + uVar7) = *(byte *)(param_1[5] + uVar7) & (byte)uVar6 | (byte)uVar5;
  if ((uVar4 != 0) && (0x18 < param_3)) {
    uVar2 = uVar2 & uVar3 + 4;
    *(byte *)(param_1[5] + uVar2) =
         (byte)((uint)(param_2 << (0x28 - param_3 & 0xff)) >> uVar4) |
         *(byte *)(param_1[5] + uVar2) &
         (byte)*(undefined4 *)(iVar1 + ((0x28 - param_3) - uVar4) * 4);
  }
  return;
}

