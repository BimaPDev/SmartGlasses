/* FUN_2c5132e8 @ 0x2c5132e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5132e8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [10];
  undefined1 uStack_1e;
  int iStack_1c;
  
  piVar1 = _LAB_2c513408;
  iStack_1c = *_LAB_2c5133d0;
  *_LAB_2c513408 = *_LAB_2c513408 + 1;
  uVar2 = FUN_2c48e738();
  uVar3 = FUN_2c48e738();
  if (*(char *)(param_1[4] + 4) == '\0') {
    FUN_2c48e5b4(uVar3,_LAB_2c5133d8,_LAB_2c5133d4);
  }
  else {
    FUN_2c48e5b4(uVar3,_LAB_2c5133d8,_LAB_2c513404);
  }
  FUN_2c48e518((int)uRam2c5133c8,uVar3,_LAB_2c5133dc);
  FUN_2c48e5b4(uVar3,_LAB_2c5133e4,_LAB_2c5133e0);
  uStack_1e = 0;
  FUN_2c66b4b8(auStack_28,_LAB_2c5133e8,*piVar1);
  FUN_2c48e5b4(uVar3,_LAB_2c5133ec,auStack_28);
  FUN_2c48e4c8(uVar3,_LAB_2c5133f0,0);
  FUN_2c48e474(uVar2,_LAB_2c5133f4,uVar3);
  FUN_2c48e518(0,uVar2,_LAB_2c5133f8);
  uVar3 = FUN_2c48e3e8(uVar2);
  uVar4 = FUN_2c66c4ec();
  FUN_2c5fd5fc(*param_1,(int)*_LAB_2c5133fc,_LAB_2c513400,0x1c,uVar3,uVar4,0,0);
  FUN_2c48e87c(uVar3);
  FUN_2c48dea0(uVar2);
  if (*_LAB_2c5133d0 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

