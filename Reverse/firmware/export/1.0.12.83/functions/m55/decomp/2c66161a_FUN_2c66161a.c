/* FUN_2c66161a @ 0x2c66161a */

undefined4 *
FUN_2c66161a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,
            int param_11,uint *param_12)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  uVar3 = FUN_2c65faf0(param_11 + 0x6c);
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
  while (iVar4 = FUN_2c656c1a(&uStack_30,&param_5), iVar4 != 0) {
    if (iVar8 == iVar1) goto LAB_2c6616a4;
    uVar5 = FUN_2c656bd8(&uStack_30);
    iVar4 = FUN_2c656bc6(uVar3,uVar5,0x2a);
    if (9 < (iVar4 - 0x30U & 0xff)) goto LAB_2c6616ba;
    iVar6 = iVar6 * 10 + (iVar4 - 0x30U);
    iVar4 = iVar6 * uVar7;
    if ((iVar4 - param_9 != 0 && param_9 <= iVar4) || ((int)(iVar4 + uVar7) <= param_8))
    goto LAB_2c6616ba;
    iVar8 = iVar8 + 1;
    FUN_2c660394(&uStack_30);
    uVar7 = uVar7 / 10;
  }
  if (iVar8 != iVar1) {
LAB_2c6616ba:
    if ((iVar1 != 4) || (iVar8 != 2)) {
      *puVar2 = *puVar2 | 4;
      goto LAB_2c6616a8;
    }
    iVar6 = iVar6 + -100;
  }
LAB_2c6616a4:
  *param_7 = iVar6;
LAB_2c6616a8:
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return param_1;
}

