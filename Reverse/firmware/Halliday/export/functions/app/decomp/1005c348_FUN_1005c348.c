/* FUN_1005c348 @ 0x1005c348 */

undefined4 * FUN_1005c348(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar5 = param_2;
  puVar6 = param_3;
  do {
    uVar1 = *puVar6;
    uVar4 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar5 = uVar1;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
  } while (puVar6 != param_3 + 8);
  iVar2 = FUN_1011ea30(param_2,DAT_1005c3b8,8);
  if (iVar2 == 0) {
    iVar7 = param_2[3];
    for (iVar2 = 0; iVar2 < iVar7; iVar2 = iVar2 + 1) {
      puVar8 = puVar6 + 8;
      puVar5 = param_2;
      do {
        uVar1 = *puVar6;
        uVar4 = puVar6[1];
        puVar6 = puVar6 + 2;
        *puVar5 = uVar1;
        puVar5[1] = uVar4;
        puVar5 = puVar5 + 2;
      } while (puVar6 != puVar8);
      iVar3 = FUN_10118ac4(param_1,param_2,0xc);
      if (iVar3 == 0) {
        return param_2;
      }
    }
  }
  else {
    FUN_10119dc2(DAT_1005c3bc,param_3);
  }
  return (undefined4 *)0x0;
}

