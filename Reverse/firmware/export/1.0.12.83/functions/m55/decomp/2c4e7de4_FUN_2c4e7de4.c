/* FUN_2c4e7de4 @ 0x2c4e7de4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e7de4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iStack_34;
  ushort uStack_30;
  int iStack_2c;
  ushort uStack_28;
  uint uStack_24;
  
  uStack_24 = *_LAB_2c4e7f18;
  func_0x2c4ed9d4(&iStack_34,param_2,param_3,0);
  uVar7 = (uint)uStack_30;
  if (param_1 != 0) {
    uVar5 = *param_2;
    uVar2 = FUN_2c66c4ec(uVar5);
    iVar4 = func_0x2c4f009c(uVar5,uVar2);
    if (iVar4 == 0) {
      uVar5 = *param_2;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xe7,_LAB_2c4e7f24,_LAB_2c4e7f20,_LAB_2c4e7f1c,0xffff);
      }
      uVar9 = 0xffff;
      uVar6 = 0;
      uVar8 = 0;
      do {
        iVar4 = uVar6 * 8;
        uVar6 = uVar6 + 1;
        iVar4 = FUN_2c66b624(uVar5,*(undefined4 *)(iStack_34 + iVar4));
        if (iVar4 == 0) {
          uVar9 = uVar8;
        }
        uVar8 = uVar6 & 0xffff;
      } while (uVar8 < uVar7);
    }
    else {
      uVar3 = func_0x2c4efeec(*param_2);
      uVar9 = (uint)uVar3;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe7,_LAB_2c4e7f24,_LAB_2c4e7f20,_LAB_2c4e7f1c,uVar9);
  }
  func_0x2c4ed9d4(&iStack_2c);
  if (uStack_28 == 0) {
    uVar9 = 0;
    uVar5 = extraout_r1;
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
    do {
      iVar4 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      uVar10 = FUN_2c66c4ec(*(undefined4 *)(iStack_2c + iVar4));
      uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (uVar9 < (uint)uVar10) {
        uVar9 = (uint)uVar10;
      }
    } while ((uVar6 & 0xffff) < (uint)uStack_28);
  }
  uVar1 = _LAB_2c4e7f38;
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      func_0x2c4efe98(*(undefined4 *)(iStack_34 + uVar6 * 8),uVar9);
      iVar4 = FUN_2c4e9354();
      uVar8 = uVar6 + 1;
      (**(code **)(iVar4 + 0x58))(uVar1,uVar6);
      uVar5 = extraout_r1_00;
      uVar6 = uVar8;
    } while ((uVar8 & 0xffff) < uVar7);
  }
  if ((*_LAB_2c4e7f18 ^ uStack_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(_LAB_2c4e7f2c,uVar5,*_LAB_2c4e7f18 ^ uStack_24,0);
}

