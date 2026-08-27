/* FUN_2c48dd84 @ 0x2c48dd84 */

undefined4 FUN_2c48dd84(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_1 == param_3)) {
LAB_2c48ddca:
    uVar3 = 0;
  }
  else {
    if (param_4 == 0) {
      iVar1 = FUN_2c66c4ec(param_2);
      iVar2 = (*(code *)*DAT_2c48de0c)(iVar1 + 1);
      if (iVar2 == 0) goto LAB_2c48ddca;
      FUN_2c674668(iVar2,param_2,iVar1 + 1);
      uVar4 = param_3[3];
      uVar6 = uVar4 & 0xfffffdff;
    }
    else {
      uVar4 = param_3[3];
      uVar6 = uVar4 | 0x200;
      iVar2 = param_2;
    }
    if ((-1 < (int)(uVar4 << 0x16)) && (param_3[8] != 0)) {
      (*(code *)DAT_2c48de0c[1])();
    }
    param_3[8] = iVar2;
    param_3[3] = uVar6;
    if (param_1[2] == 0) {
      param_1[2] = param_3;
      uVar3 = 1;
      *param_3 = 0;
      param_3[1] = param_3;
    }
    else {
      puVar5 = *(undefined4 **)(param_1[2] + 4);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = param_3;
        param_3[1] = puVar5;
        *(undefined4 **)(param_1[2] + 4) = param_3;
        return 1;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

