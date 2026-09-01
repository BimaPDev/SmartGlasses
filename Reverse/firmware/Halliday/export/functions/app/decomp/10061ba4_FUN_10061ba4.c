/* FUN_10061ba4 @ 0x10061ba4 */

void FUN_10061ba4(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *extraout_r2;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = DAT_10061c14;
  uVar3 = DAT_10061c14[4];
  uVar4 = DAT_10061c14[5];
  bVar6 = param_2 <= uVar4;
  if (uVar4 == param_2) {
    bVar6 = param_1 <= uVar3;
  }
  if (!bVar6) {
    uVar4 = uVar4 + (uVar3 != 0);
    bVar6 = param_2 <= uVar4;
    if (uVar4 == param_2) {
      bVar6 = param_1 <= uVar3 - 1;
    }
    if (bVar6) {
      uVar3 = FUN_1011c1d0(*DAT_10061c14,DAT_10061c14[3]);
      uVar4 = puVar1[4];
      uVar5 = puVar1[5] + (uint)CARRY4(uVar4,uVar3);
      bVar6 = param_2 <= uVar5;
      if (uVar5 == param_2) {
        bVar6 = param_1 <= uVar4 + uVar3;
      }
      if (bVar6) {
        uVar3 = 1;
      }
      else {
        uVar3 = (param_1 - uVar4) - uVar3;
      }
      puVar1[3] = param_1 - uVar4;
      iVar2 = FUN_10057234();
      if (iVar2 != 0) {
        uVar4 = FUN_10056618();
        uVar3 = uVar3 / uVar4;
      }
      *(undefined4 *)*puVar1 = 1;
      FUN_1011c1ba();
      extraout_r2[1] = uVar3;
      *extraout_r2 = 0x22;
    }
  }
  return;
}

