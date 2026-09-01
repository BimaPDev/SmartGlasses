/* FUN_100cb924 @ 0x100cb924 */

void FUN_100cb924(undefined4 *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  uVar5 = (uint)*(ushort *)((int)param_1 + 0x56);
  if (param_2 <= *(ushort *)((int)param_1 + 0x56)) {
    uVar5 = param_2;
  }
  uVar2 = FUN_100cb508();
  iVar3 = FUN_100cb5a8(0x16,uVar2,4);
  if (iVar3 != 0) {
    FUN_10133e7c(param_1 + 0x16,uVar5);
    puVar4 = (undefined2 *)FUN_100c1fe4(iVar3 + 8,4);
    uVar1 = *(undefined2 *)(param_1 + 0x14);
    puVar4[1] = (short)uVar5;
    *puVar4 = uVar1;
    FUN_1013411a(*param_1,iVar3);
    return;
  }
  FUN_100a5b78(DAT_100cba04 | (DAT_100cba00 - DAT_100cb9fc) * 0x20 & 0xff00U,DAT_100cba0c,
               DAT_100cba08);
  puVar6 = param_1 + 0x10;
  *puVar6 = *puVar6 | 2;
  uVar2 = extraout_r1;
  if (param_1[0x26] != 0) {
    FUN_100c1c90();
    param_1[0x26] = 0;
    *(undefined2 *)(param_1 + 0x27) = 0;
    uVar2 = extraout_r1_00;
  }
  if (param_1[0x21] != 0) {
    FUN_100c1c90();
    param_1[0x21] = 0;
    uVar2 = extraout_r1_01;
  }
  while (uVar7 = FUN_100c1b58(param_1 + 0x1a,uVar2,0,0),
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0) {
    FUN_100c1c90();
    uVar2 = extraout_r1_02;
  }
  while (iVar3 = FUN_100c1b58(param_1 + 0x2c,uVar2,0,0), iVar3 != 0) {
    FUN_100c1c90();
    uVar2 = extraout_r1_03;
  }
  if (*(code **)(param_1[1] + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100cb9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(param_1,puVar6);
  return;
}

