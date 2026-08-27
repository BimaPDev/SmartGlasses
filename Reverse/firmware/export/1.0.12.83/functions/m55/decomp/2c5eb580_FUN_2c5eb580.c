/* FUN_2c5eb580 @ 0x2c5eb580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eb580(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5eb678;
  iVar1 = FUN_2c5eb45c();
  iVar2 = FUN_2c5eb45c(param_2);
  if ((iVar1 == 0) || (uVar6 = (uint)(iVar2 == 0), iVar2 == 0)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar3 = FUN_2c66c4ec();
    uVar4 = FUN_2c66c4ec(iVar2);
    uVar7 = uVar6;
    iVar9 = iVar2;
    uVar10 = uVar6;
    iVar11 = iVar1;
    if (uVar4 != 0) {
      do {
        uStack_3c = uVar6;
        uStack_38 = uVar6;
        iVar5 = func_0x2c5eb4c8(iVar9,&uStack_38,&uStack_3c);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5eb684,0x51,_LAB_2c5eb680,_LAB_2c5eb688,iVar2);
        }
        do {
          if (uVar3 <= uVar7) goto LAB_2c5eb616;
          uStack_34 = uVar6;
          uStack_30 = uVar6;
          iVar5 = func_0x2c5eb4c8(iVar11,&uStack_30,&uStack_34);
          if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c5eb684,0x5a,_LAB_2c5eb680,_LAB_2c5eb67c,iVar1);
          }
          iVar11 = iVar11 + uStack_34;
          uVar7 = uVar7 + uStack_34;
        } while (uStack_30 != uStack_38);
        uVar10 = uVar10 + uStack_3c;
        if (uVar3 <= uVar7) {
LAB_2c5eb616:
          if (uVar10 < uVar4) {
            uVar8 = 0xfffffffe;
            goto LAB_2c5eb636;
          }
          break;
        }
        iVar9 = iVar9 + uStack_3c;
      } while (uVar10 < uVar4);
    }
    uVar8 = 0;
  }
LAB_2c5eb636:
  FUN_2c62bea8(iVar1);
  FUN_2c62bea8(iVar2);
  if (*_LAB_2c5eb678 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar8;
}

