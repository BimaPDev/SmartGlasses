/* FUN_2c4d7598 @ 0x2c4d7598 */

void FUN_2c4d7598(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 != 0) {
    uVar2 = param_1[3];
    uVar7 = uVar2 >> 3;
    *param_1 = *param_1 + param_3;
    iVar1 = DAT_2c4d7668;
    uVar3 = param_1[5] - 1;
    uVar5 = uVar7 + 3 & uVar3;
    uVar8 = uVar2 & 7;
    iVar4 = param_1[4];
    uVar6 = uVar7 + 1 & uVar3;
    param_1[3] = param_1[6] - 1U & uVar2 + param_3;
    uVar2 = uVar7 + 2 & uVar3;
    uVar9 = (uint)(param_2 << (0x20U - param_3 & 0xff)) >> uVar8 |
            ((uint)*(byte *)(iVar4 + uVar5) | (uint)*(byte *)(iVar4 + uVar7) << 0x18 |
             (uint)*(byte *)(iVar4 + uVar6) << 0x10 | (uint)*(byte *)(iVar4 + uVar2) << 8) &
            ~((uint)(*(int *)(iVar1 + param_3 * 4) << (0x20U - param_3 & 0xff)) >> uVar8);
    *(char *)(iVar4 + uVar7) = (char)(uVar9 >> 0x18);
    *(char *)(param_1[4] + uVar6) = (char)(uVar9 >> 0x10);
    *(char *)(param_1[4] + uVar2) = (char)(uVar9 >> 8);
    *(char *)(param_1[4] + uVar5) = (char)uVar9;
    if (0x20 < param_3 + uVar8) {
      uVar2 = param_3 + uVar8 & 7;
      uVar3 = uVar7 + 4 & uVar3;
      uVar5 = 8 - uVar2;
      *(byte *)(param_1[4] + uVar3) =
           (byte)(param_2 << (uVar5 & 0xff)) |
           *(byte *)(param_1[4] + uVar3) & ~(byte)(*(int *)(iVar1 + uVar2 * 4) << (uVar5 & 0xff));
    }
    return;
  }
  return;
}

