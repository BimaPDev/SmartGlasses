/* FUN_140d7936 @ 0x140d7936 */

undefined4 *
FUN_140d7936(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r3;
  undefined4 unaff_r6;
  bool bVar5;
  
  puVar4 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)*param_1;
  iVar2 = param_2[1];
  if (param_2 + 2 == puVar4) {
    uVar3 = 0;
    if (iVar2 != 0) {
      FUN_140d7822();
      uVar3 = extraout_r2;
      puVar4 = extraout_r3;
    }
    FUN_140d7770(param_1,param_2[1],uVar3,puVar4,param_4);
  }
  else {
    bVar5 = puVar1 == param_1 + 2;
    *param_1 = puVar4;
    param_1[1] = iVar2;
    if (bVar5) {
      puVar1 = (undefined4 *)0x0;
    }
    if (!bVar5) {
      unaff_r6 = param_1[2];
    }
    param_1[2] = param_2[2];
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = param_2 + 2;
    }
    else {
      *param_2 = puVar1;
      param_2[2] = unaff_r6;
    }
  }
  param_2[1] = 0;
  *(undefined4 *)*param_2 = 0;
  return param_1;
}

