/* FUN_2c5cbe60 @ 0x2c5cbe60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cbe60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c5cbf40;
  iStack_50 = 0;
  iStack_4c = 0;
  iVar1 = FUN_2c5e31b4(0x36,&iStack_50,param_3,0);
  if (iVar1 != 0) {
    if (iStack_50 == 1 && iStack_4c == 0) {
      uVar2 = FUN_2c48e738();
      FUN_2c48e5b4(uVar2,_LAB_2c5cbf48,_LAB_2c5cbf44);
      FUN_2c48e4c8(uVar2,_LAB_2c5cbf4c,1);
      uStack_48 = 0;
      uStack_44 = 0;
      iVar1 = FUN_2c5e31b4(0x3d,&uStack_48);
      if (iVar1 != 0) {
        FUN_2c62c3b0(auStack_3c,0x20);
        FUN_2c62dbd4(auStack_3c,0x1f,_LAB_2c5cbf58);
        FUN_2c48e5b4(uVar2,_LAB_2c5cbf5c,auStack_3c);
      }
      goto LAB_2c5cbea2;
    }
  }
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c5cbf48,_LAB_2c5cbf44);
  FUN_2c48e4c8(uVar2,_LAB_2c5cbf4c,0);
LAB_2c5cbea2:
  uVar3 = FUN_2c48e738();
  FUN_2c48e5b4(uVar3,_LAB_2c5cbf48,_LAB_2c5cbf50);
  FUN_2c48e474(uVar3,_LAB_2c5cbf54,uVar2);
  uVar2 = FUN_2c48e3e8(uVar3);
  uVar4 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar4,uVar2,1);
  FUN_2c48e87c(uVar2);
  FUN_2c48dea0(uVar3);
  if (*_LAB_2c5cbf40 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

