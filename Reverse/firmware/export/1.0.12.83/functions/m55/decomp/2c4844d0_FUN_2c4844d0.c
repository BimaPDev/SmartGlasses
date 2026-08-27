/* FUN_2c4844d0 @ 0x2c4844d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4844d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_54 [16];
  int iStack_14;
  
  iStack_14 = *_LAB_2c484544;
  func_0x2c4807cc(_LAB_2c484548,param_2,param_3,0);
  uVar1 = func_0x2c4807d8();
  FUN_2c4807e0(_LAB_2c484550,_LAB_2c48454c,uVar1);
  puVar4 = auStack_54;
  puVar5 = (undefined4 *)(param_1 + 0x1b);
  do {
    puVar6 = puVar5 + 4;
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4 = puVar4 + 4;
    puVar5 = puVar6;
  } while (puVar6 != (undefined4 *)(param_1 + 0x5b));
  uVar1 = func_0x2c4807d8();
  FUN_2c480970(auStack_54,_LAB_2c48454c,param_3,uVar1);
  if (*_LAB_2c484544 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

