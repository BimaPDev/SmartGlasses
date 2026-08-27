/* FUN_2c58d758 @ 0x2c58d758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c58d758(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  char cStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  int iStack_14;
  
  uVar1 = _LAB_2c58d7ec;
  iStack_14 = *_LAB_2c58d7f0;
  uStack_38 = _LAB_2c58d7ec;
  auStack_28[0] = 0;
  uStack_2c = 0;
  puStack_30 = auStack_28;
  iVar2 = FUN_2c549b64(*(undefined4 *)(param_1 + 0x20),&uStack_38,param_3,0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c58d7fc,0x196,_LAB_2c58d7f8,_LAB_2c58d7f4,_LAB_2c58d7f8);
  }
  if (cStack_34 == '\x02') {
    FUN_2c57b514(puStack_30);
  }
  else {
    if (cStack_34 != '\x05') {
      uStack_38 = uVar1;
      if (puStack_30 != auStack_28) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      uVar3 = 0;
      goto LAB_2c58d79a;
    }
    func_0x2c57b19c(puStack_30);
  }
  uVar3 = 1;
  uStack_38 = uVar1;
  if (puStack_30 != auStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c58d79a:
  uStack_38 = uVar1;
  if (*_LAB_2c58d7f0 == iStack_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

