/* FUN_2c655cb8 @ 0x2c655cb8 */

undefined4 * FUN_2c655cb8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_14;
  
  puVar5 = param_1;
  local_14 = param_2;
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])();
  }
  *param_1 = param_1 + 2;
  iVar4 = *param_2;
  uVar2 = param_2[1] * 4;
  iVar3 = iVar4 + param_2[1] * 4;
  if ((iVar4 == 0) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c655d14);
  }
  local_14 = (int *)((int)uVar2 >> 2);
  if (0xc < uVar2) {
    uVar1 = FUN_2c66485c(param_1,&local_14,0,uVar2,puVar5);
    *param_1 = uVar1;
    param_1[2] = local_14;
  }
  FUN_2c664986(*param_1,iVar4,iVar3);
  FUN_2c664850(param_1,local_14);
  param_1[6] = DAT_2c655d18;
  return param_1;
}

