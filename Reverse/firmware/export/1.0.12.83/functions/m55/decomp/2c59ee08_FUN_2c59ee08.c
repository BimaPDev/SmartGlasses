/* FUN_2c59ee08 @ 0x2c59ee08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_2c59ee08(uint *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c59ef38;
  uVar1 = FUN_2c64ca5c(0x2c,param_2,param_3,0);
  puVar6 = (undefined1 *)*param_3;
  iVar4 = uVar1 + 0x18;
  *(int *)(uVar1 + 0x10) = iVar4;
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c59ef3c);
  }
  uVar2 = FUN_2c66c4ec(puVar6);
  uStack_34 = uVar2;
  if (uVar2 < 0x10) {
    iVar3 = iVar4;
    if (uVar2 == 1) {
      *(undefined1 *)(uVar1 + 0x18) = *puVar6;
      goto LAB_2c59ee5a;
    }
    if (uVar2 == 0) goto LAB_2c59ee5a;
  }
  else {
    iVar3 = FUN_2c65e908(uVar1 + 0x10,&uStack_34,0);
    *(int *)(uVar1 + 0x10) = iVar3;
    *(uint *)(uVar1 + 0x18) = uStack_34;
  }
  FUN_2c674668(iVar3,puVar6,uVar2);
  iVar3 = *(int *)(uVar1 + 0x10);
LAB_2c59ee5a:
  *(uint *)(uVar1 + 0x14) = uStack_34;
  *(undefined1 *)(iVar3 + uStack_34) = 0;
  *(undefined4 *)(uVar1 + 0x28) = param_3[1];
  FUN_2c59e860(&uStack_34,param_2,uVar1 + 0x10);
  uVar2 = uStack_34;
  if (iStack_30 == 0) {
    if (iVar4 != *(int *)(uVar1 + 0x10)) {
      thunk_FUN_2c669588(*(int *)(uVar1 + 0x10),*(int *)(uVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(uVar1,0x2c);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if ((uStack_34 == 0) && (iStack_30 != param_2 + 4)) {
      uVar7 = *(uint *)(uVar1 + 0x14);
      uVar5 = *(uint *)(iStack_30 + 0x14);
      uVar2 = uVar7;
      if (uVar5 <= uVar7) {
        uVar2 = uVar5;
      }
      if ((uVar2 == 0) ||
         (uVar2 = FUN_2c66960c(*(undefined4 *)(uVar1 + 0x10),*(undefined4 *)(iStack_30 + 0x10)),
         uVar2 == 0)) {
        uVar2 = uVar7 - uVar5;
      }
      uVar2 = uVar2 >> 0x1f;
    }
    else {
      uVar2 = 1;
    }
    FUN_2c64e496(uVar2,uVar1,iStack_30,param_2 + 4);
    iVar4 = *(int *)(param_2 + 0x14);
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    *(int *)(param_2 + 0x14) = iVar4 + 1;
  }
  if (*_LAB_2c59ef38 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

