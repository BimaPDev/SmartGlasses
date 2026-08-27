/* FUN_2c52f5f4 @ 0x2c52f5f4 */

void FUN_2c52f5f4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = DAT_2c52f6a4;
  if (param_1 == param_2) {
    return;
  }
  uVar5 = param_2[1];
  puVar4 = (undefined4 *)*param_1;
  if (param_1 + 2 == puVar4) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < uVar5) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c52f6a8);
    }
    uVar6 = uVar3 * 2;
    if (uVar5 < uVar3 << 1) {
      if ((int)uVar6 < 0) {
        iVar2 = -0x80000000;
        uVar6 = 0x7fffffff;
      }
      else {
        iVar2 = uVar6 + 1;
      }
    }
    else {
      iVar2 = uVar5 + 1;
      uVar6 = uVar5;
    }
    if (*DAT_2c52f6a4 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,iVar2);
    if (param_1 + 2 != (undefined4 *)*param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    *param_1 = puVar4;
    param_1[2] = uVar6;
  }
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)*param_2;
      puVar4 = (undefined4 *)*param_1;
    }
    else {
      FUN_2c674668(puVar4,(undefined1 *)*param_2,uVar5);
      puVar4 = (undefined4 *)*param_1;
    }
  }
  param_1[1] = uVar5;
  *(undefined1 *)((int)puVar4 + uVar5) = 0;
  return;
}

