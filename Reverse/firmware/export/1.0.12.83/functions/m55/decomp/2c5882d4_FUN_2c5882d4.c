/* FUN_2c5882d4 @ 0x2c5882d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5882d4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uStack_20;
  int iStack_1c;
  
  iStack_1c = *DAT_2c5883f0;
  puVar2 = param_1 + 3;
  *param_1 = _LAB_2c5883f4;
  param_1[1] = puVar2;
  puVar4 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c5883e4;
  uStack_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c5883ba;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c588000(&uStack_20,0);
    param_1[1] = puVar2;
    param_1[3] = uStack_20;
LAB_2c5883ba:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = uStack_20;
  *(undefined1 *)((int)puVar2 + uStack_20) = 0;
  puVar2 = param_1 + 9;
  param_1[7] = puVar2;
  puVar4 = (undefined1 *)*param_3;
  uVar3 = param_3[1];
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
LAB_2c5883e4:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c588400);
  }
  uStack_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 9) = *puVar4;
      goto LAB_2c588342;
    }
    if (uVar3 == 0) goto LAB_2c588342;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c588000(&uStack_20,0);
    param_1[7] = puVar2;
    param_1[9] = uStack_20;
  }
  FUN_2c674668(puVar2,puVar4,uVar3);
  puVar2 = (undefined4 *)param_1[7];
LAB_2c588342:
  param_1[8] = uStack_20;
  *(undefined1 *)((int)puVar2 + uStack_20) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0xd] = param_1 + 0xf;
  param_1[0xe] = 0;
  param_1[0x13] = param_1 + 0x15;
  param_1[0x14] = 0;
  iVar1 = FUN_2c588070(*param_4,param_4[1],DAT_2c5883f8);
  if (iVar1 == 0) {
    FUN_2c588140(param_1 + 0x13,0,0,DAT_2c5883fc,2);
  }
  else {
    FUN_2c52f5f4(param_1 + 0x13,param_4);
  }
  if (*DAT_2c5883f0 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

