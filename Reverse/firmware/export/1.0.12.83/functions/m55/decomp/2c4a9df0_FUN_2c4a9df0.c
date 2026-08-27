/* FUN_2c4a9df0 @ 0x2c4a9df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a9df0(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uStack_28;
  uint uStack_24;
  
  uStack_24 = *_LAB_2c4a9f0c;
  puVar3 = (uint *)FUN_2c4aa8e0(param_1,param_1 + 0x36,2,0);
  uVar2 = _LAB_2c4a9f2c;
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x143,_LAB_2c4a9f1c,_LAB_2c4a9f18,_LAB_2c4a9f28,*(undefined1 *)(param_1 + 0xa0),
          _LAB_2c4a9f10);
  }
  iVar7 = 10;
  uVar6 = 0x8c00;
  do {
    iVar4 = FUN_2c4a8a8c(*(undefined4 *)(param_1 + 0xa8),uVar6,&uStack_28,0);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x14b,_LAB_2c4a9f1c,_LAB_2c4a9f18,_LAB_2c4a9f14,*(undefined1 *)(param_1 + 0xa0),
            _LAB_2c4a9f10);
    }
    iVar4 = puVar3[1] + (uVar6 - 0x8c00) * 2;
    uVar5 = (uint)CONCAT11(*(undefined1 *)(puVar3[1] + (uVar6 - 0x8c00) * 2),
                           *(undefined1 *)(iVar4 + 1));
    if (uVar5 != uStack_28) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x153,_LAB_2c4a9f1c,_LAB_2c4a9f18,_LAB_2c4a9f20,*(undefined1 *)(param_1 + 0xa0),
            _LAB_2c4a9f10,uVar6,uStack_28,uVar5);
    }
    lVar1 = (ulonglong)uVar2 * (ulonglong)*puVar3;
    uVar6 = uVar6 + (uint)((ulonglong)lVar1 >> 0x24) & 0xffff;
    if (*puVar3 < uVar6 - 0x8c00) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x15a,_LAB_2c4a9f1c,_LAB_2c4a9f18,_LAB_2c4a9f24,*(undefined1 *)(param_1 + 0xa0),
            _LAB_2c4a9f10,uVar6);
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((*_LAB_2c4a9f0c ^ uStack_24) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar4,(int)lVar1,*_LAB_2c4a9f0c ^ uStack_24,0);
}

