/* FUN_2c65b016 @ 0x2c65b016 */

undefined4 *
FUN_2c65b016(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,
            int param_11,uint *param_12)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar2 = param_12;
  iVar1 = param_10;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uStack_28 = param_3;
  uVar4 = FUN_2c659524(param_11 + 0x6c);
  if (iVar1 == 2) {
    uVar7 = 10;
  }
  else if (iVar1 == 4) {
    uVar7 = 1000;
  }
  else {
    uVar7 = 1;
  }
  iVar6 = 0;
  iVar8 = 0;
  while (iVar5 = FUN_2c652d9a(&uStack_30,&param_5), iVar5 != 0) {
    if (iVar8 == iVar1) goto LAB_2c65b0a0;
    uVar3 = FUN_2c652d58(&uStack_30);
    iVar5 = FUN_2c652412(uVar4,uVar3,0x2a);
    if (9 < (iVar5 - 0x30U & 0xff)) goto LAB_2c65b0b6;
    iVar6 = iVar6 * 10 + (iVar5 - 0x30U);
    iVar5 = iVar6 * uVar7;
    if ((iVar5 - param_9 != 0 && param_9 <= iVar5) || ((int)(iVar5 + uVar7) <= param_8))
    goto LAB_2c65b0b6;
    iVar8 = iVar8 + 1;
    FUN_2c659e18(&uStack_30);
    uVar7 = uVar7 / 10;
  }
  if (iVar8 != iVar1) {
LAB_2c65b0b6:
    if ((iVar1 != 4) || (iVar8 != 2)) {
      *puVar2 = *puVar2 | 4;
      goto LAB_2c65b0a4;
    }
    iVar6 = iVar6 + -100;
  }
LAB_2c65b0a0:
  *param_7 = iVar6;
LAB_2c65b0a4:
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return param_1;
}

