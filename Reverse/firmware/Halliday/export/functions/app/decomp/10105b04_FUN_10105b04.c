/* FUN_10105b04 @ 0x10105b04 */

undefined4
FUN_10105b04(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined2 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  if ((int)((uint)*(byte *)(param_1 + 0x174) << 0x1f) < 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    iVar7 = *(int *)(param_1 + 0x34);
    local_4c = *(undefined4 *)(param_1 + 0x24);
    uStack_48 = *(undefined4 *)(param_1 + 0x28);
    local_44._2_2_ = (undefined2)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x10);
    uStack_38 = *(undefined4 *)(param_1 + 0x38);
    uStack_34 = *(undefined4 *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x40);
    local_2c = *(undefined4 *)(param_1 + 0x44);
    uVar5 = *(ushort *)(param_1 + 0x2c);
    uVar8 = (uint)*(ushort *)(param_1 + 0x122);
    if (uVar5 <= uVar8) {
LAB_10105bde:
      if (*(char *)(param_1 + 0x235) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 0x86;
      }
      *param_5 = 0;
      return 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x58);
    local_4c = *(undefined4 *)(param_1 + 0x48);
    uStack_48 = *(undefined4 *)(param_1 + 0x4c);
    local_44._2_2_ = (undefined2)((uint)*(undefined4 *)(param_1 + 0x50) >> 0x10);
    uStack_38 = *(undefined4 *)(param_1 + 0x5c);
    uStack_34 = *(undefined4 *)(param_1 + 0x60);
    uStack_30 = *(undefined4 *)(param_1 + 100);
    local_2c = *(undefined4 *)(param_1 + 0x68);
    uVar5 = *(ushort *)(param_1 + 0x50);
    uVar8 = (uint)*(ushort *)(param_1 + 0x124);
    if (uVar5 <= uVar8) goto LAB_10105bde;
  }
  local_44 = CONCAT22(local_44._2_2_,uVar5);
  *param_4 = local_4c;
  param_4[1] = uStack_48;
  param_4[2] = local_44;
  param_4[3] = iVar6;
  param_4[4] = iVar7;
  param_4[5] = uStack_38;
  param_4[6] = uStack_34;
  param_4[7] = uStack_30;
  iVar1 = *(int *)(iVar7 + uVar8 * 8 + 4);
  iVar4 = *(int *)(iVar6 + uVar8 * 8 + 4);
  iVar7 = *(int *)(iVar7 + uVar8 * 8);
  iVar6 = *(int *)(iVar6 + uVar8 * 8);
  param_4[8] = local_2c;
  *param_5 = (short)uVar8;
  uVar2 = (**(code **)(param_1 + 0x240))(param_1,iVar7 - iVar6,iVar1 - iVar4);
  uVar3 = FUN_100f85ec(uVar2,(int)*(short *)(param_1 + 0x12e),*(undefined4 *)(param_1 + 0x238));
  *param_2 = uVar3;
  uVar2 = FUN_100f85ec(uVar2,(int)*(short *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x238));
  *param_3 = uVar2;
  return 0;
}

