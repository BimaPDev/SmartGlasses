/* FUN_2c5a12dc @ 0x2c5a12dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a12dc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  uStack_24 = *_LAB_2c5a1408;
  uVar1 = FUN_2c64ca5c(0x2c,param_2,param_3,0);
  param_3 = (undefined4 *)*param_3;
  iVar8 = uVar1 + 0x18;
  *(int *)(uVar1 + 0x10) = iVar8;
  puVar6 = (undefined1 *)*param_3;
  uVar4 = param_3[1];
  if ((puVar6 + uVar4 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5a140c);
  }
  uStack_2c = uVar4;
  if (uVar4 < 0x10) {
    iVar2 = iVar8;
    if (uVar4 == 1) {
      *(undefined1 *)(uVar1 + 0x18) = *puVar6;
      goto LAB_2c5a132e;
    }
    if (uVar4 == 0) goto LAB_2c5a132e;
  }
  else {
    iVar2 = FUN_2c65e908(uVar1 + 0x10,&uStack_2c,0);
    *(int *)(uVar1 + 0x10) = iVar2;
    *(uint *)(uVar1 + 0x18) = uStack_2c;
  }
  FUN_2c674668(iVar2,puVar6,uVar4);
  iVar2 = *(int *)(uVar1 + 0x10);
LAB_2c5a132e:
  *(uint *)(uVar1 + 0x14) = uStack_2c;
  *(undefined1 *)(iVar2 + uStack_2c) = 0;
  *(undefined1 *)(uVar1 + 0x28) = 0;
  FUN_2c5a118c(&uStack_2c,param_1,param_2,uVar1 + 0x10);
  uVar4 = uStack_2c;
  if (iStack_28 == 0) {
    if (iVar8 != *(int *)(uVar1 + 0x10)) {
      thunk_FUN_2c669588(*(int *)(uVar1 + 0x10),*(int *)(uVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(uVar1,0x2c);
    uVar3 = extraout_r1_00;
  }
  else {
    if ((uStack_2c == 0) && (iStack_28 != param_1 + 4)) {
      uVar7 = *(uint *)(uVar1 + 0x14);
      uVar5 = *(uint *)(iStack_28 + 0x14);
      uVar4 = uVar7;
      if (uVar5 <= uVar7) {
        uVar4 = uVar5;
      }
      if ((uVar4 == 0) ||
         (uVar4 = FUN_2c66960c(*(undefined4 *)(uVar1 + 0x10),*(undefined4 *)(iStack_28 + 0x10)),
         uVar4 == 0)) {
        uVar4 = uVar7 - uVar5;
      }
      uVar4 = uVar4 >> 0x1f;
    }
    else {
      uVar4 = 1;
    }
    FUN_2c64e496(uVar4,uVar1,iStack_28,param_1 + 4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar4 = uVar1;
    uVar3 = extraout_r1;
  }
  if ((*_LAB_2c5a1408 ^ uStack_24) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar4,uVar3,*_LAB_2c5a1408 ^ uStack_24,0);
  }
  return;
}

