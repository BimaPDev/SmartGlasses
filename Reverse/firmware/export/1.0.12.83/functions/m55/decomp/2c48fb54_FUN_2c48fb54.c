/* FUN_2c48fb54 @ 0x2c48fb54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48fb54(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  
  uVar7 = _LAB_2c48fc18;
  uVar6 = _LAB_2c48fc14;
  uVar5 = _LAB_2c48fc10;
  uVar4 = _LAB_2c48fc0c;
  iVar3 = _LAB_2c48fc04;
  uVar8 = 0;
  uStack_2c = *_LAB_2c48fc00;
  uVar9 = 0xffffffff;
  do {
    FUN_2c644134(&iStack_38,0,uVar9);
    iVar1 = iStack_34;
    if (iStack_38 == 8) {
      if (iStack_34 << 0x1e < 0) {
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xed,uVar7,uVar6,_LAB_2c48fc08,uVar4);
        }
        if (uVar8 < 0x15) {
          func_0x2c490afc(*(undefined4 *)(iVar3 + uVar8 * 8));
          iVar2 = uVar8 * 8;
          uVar8 = uVar8 + 1;
          uVar9 = *(undefined4 *)(iVar3 + iVar2 + 4);
        }
      }
      if (iVar1 << 0x1d < 0) {
        FUN_2c493560(2,0,0);
      }
    }
    else if (uVar8 < 0x15) {
      func_0x2c490afc(*(undefined4 *)(iVar3 + uVar8 * 8));
      iVar1 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      uVar9 = *(undefined4 *)(iVar3 + iVar1 + 4);
    }
  } while (uVar8 != 0x15);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x100,uVar7,uVar6,uVar5,uVar4);
}

