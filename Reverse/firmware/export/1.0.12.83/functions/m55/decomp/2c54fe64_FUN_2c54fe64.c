/* FUN_2c54fe64 @ 0x2c54fe64 */

undefined4 * FUN_2c54fe64(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = DAT_2c54ffa4 * ((int)param_2 - (int)param_1 >> 3);
  if (0 < iVar2 >> 2) {
    uVar5 = *param_3;
    uVar3 = param_3[1];
    puVar6 = param_1 + (iVar2 >> 2) * 0x18;
    do {
      uVar4 = param_1[1];
      uVar1 = uVar4;
      if (uVar3 <= uVar4) {
        uVar1 = uVar3;
      }
      if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(*param_1,uVar5), iVar2 == 0)) && (uVar4 == uVar3))
      {
        return param_1;
      }
      uVar4 = param_1[7];
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(param_1[6],uVar5), iVar2 == 0)) && (uVar3 == uVar4)
         ) {
        return param_1 + 6;
      }
      uVar4 = param_1[0xd];
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(param_1[0xc],uVar5), iVar2 == 0)) &&
         (uVar3 == uVar4)) {
        return param_1 + 0xc;
      }
      uVar4 = param_1[0x13];
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(param_1[0x12],uVar5), iVar2 == 0)) &&
         (uVar3 == uVar4)) {
        return param_1 + 0x12;
      }
      param_1 = param_1 + 0x18;
    } while (param_1 != puVar6);
    iVar2 = DAT_2c54ffa4 * ((int)param_2 - (int)param_1 >> 3);
  }
  if (iVar2 == 2) {
    uVar5 = *param_3;
    uVar3 = param_3[1];
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 1) {
        return param_2;
      }
      uVar5 = *param_3;
      uVar3 = param_3[1];
      goto LAB_2c54ff44;
    }
    uVar4 = param_1[1];
    uVar5 = *param_3;
    uVar3 = param_3[1];
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      uVar1 = uVar3;
    }
    if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(*param_1,uVar5), iVar2 == 0)) && (uVar4 == uVar3)) {
      return param_1;
    }
    param_1 = param_1 + 6;
  }
  uVar4 = param_1[1];
  uVar1 = uVar4;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  if (((uVar1 == 0) || (iVar2 = FUN_2c66960c(*param_1,uVar5), iVar2 == 0)) && (uVar4 == uVar3)) {
    return param_1;
  }
  param_1 = param_1 + 6;
LAB_2c54ff44:
  uVar4 = param_1[1];
  uVar1 = uVar4;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  if ((uVar1 != 0) && (iVar2 = FUN_2c66960c(*param_1,uVar5), iVar2 != 0)) {
    return param_2;
  }
  if (uVar4 == uVar3) {
    return param_1;
  }
  return param_2;
}

