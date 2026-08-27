/* FUN_2c48aad8 @ 0x2c48aad8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48aad8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  piVar1 = _LAB_2c48abec;
  iStack_24 = *_LAB_2c48abf0;
  iStack_34 = 0;
  uStack_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  if (*_LAB_2c48abec != 0) {
    FUN_2c644044(*_LAB_2c48abec,0xffffffff);
  }
  uVar4 = FUN_2c673da8(_LAB_2c48abf4,param_2,&iStack_34,&iStack_2c,&uStack_30,&iStack_28);
  iVar3 = iStack_28;
  iVar2 = iStack_2c;
  if (param_2 != iStack_2c + iStack_28) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x128,_LAB_2c48ac00,_LAB_2c48ac04,_LAB_2c48abfc,iStack_2c,iStack_28,param_2);
  }
  if (*_LAB_2c48abf8 == 1) {
    if (param_2 >> 2 != 0) {
      uVar5 = 0;
      do {
        *(undefined2 *)(param_1 + uVar5 * 4) = *(undefined2 *)(iStack_34 + 2 + uVar5 * 4);
        *(undefined2 *)(param_1 + 2 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_2 >> 2);
    }
  }
  else if (*_LAB_2c48abf8 == 2) {
    if (param_2 >> 2 != 0) {
      uVar5 = 0;
      do {
        *(undefined2 *)(param_1 + uVar5 * 4) = 0;
        *(undefined2 *)(param_1 + 2 + uVar5 * 4) = *(undefined2 *)(iStack_34 + 2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_2 >> 2);
    }
  }
  else {
    FUN_2c674668(param_1,iStack_34,iStack_2c);
    FUN_2c674668(param_1 + iVar2,uStack_30,iVar3);
  }
  FUN_2c674208(_LAB_2c48abf4,0,iVar2);
  FUN_2c674208(_LAB_2c48abf4,0,iStack_28);
  if (*piVar1 != 0) {
    FUN_2c644080();
  }
  if (*_LAB_2c48abf0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar4;
}

