/* FUN_2c4fc750 @ 0x2c4fc750 */

void FUN_2c4fc750(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = uVar1 & 0x3f;
  uVar9 = 0x40 - uVar2;
  *(uint *)(param_1 + 0x50) = param_3 + uVar1;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)CARRY4(param_3,uVar1);
  if (param_3 < uVar9) {
    puVar8 = (undefined4 *)(uVar2 + param_1 + 0x10);
  }
  else {
    puVar8 = (undefined4 *)(param_1 + 0x10);
    param_3 = (param_3 - 0x40) + uVar2;
    FUN_2c674668(uVar2 + (int)puVar8,param_2,uVar9);
    param_2 = (undefined4 *)((int)param_2 + uVar9);
    FUN_2c4fc034(param_1,puVar8);
    if (0x3f < param_3) {
      puVar10 = (undefined4 *)((param_3 - 0x40 & 0xffffffc0) + 0x40 + (int)param_2);
      do {
        puVar11 = param_2 + 0x10;
        puVar6 = puVar8;
        puVar7 = param_2;
        do {
          param_2 = puVar7 + 4;
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          *puVar6 = *puVar7;
          puVar6[1] = uVar3;
          puVar6[2] = uVar4;
          puVar6[3] = uVar5;
          puVar6 = puVar6 + 4;
          puVar7 = param_2;
        } while (param_2 != puVar11);
        FUN_2c4fc034(param_1,puVar8);
      } while (param_2 != puVar10);
      param_3 = param_3 & 0x3f;
      param_2 = puVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x2c674670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c674674)(puVar8,param_2,param_3);
  return;
}

