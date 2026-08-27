/* FUN_2c5fd0c0 @ 0x2c5fd0c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5fd0c0(int param_1,undefined4 param_2,code *param_3,code *param_4,undefined4 param_5,
                undefined4 param_6,byte param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  
  puVar4 = _LAB_2c5fd2f0;
  uVar13 = (uint)param_7;
  FUN_2c644044(*_LAB_2c5fd2f0,0xffffffff);
  if ((*_LAB_2c5fd2c0 == 0) || (*_LAB_2c5fd2c0 != param_1)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1c2,_LAB_2c5fd2e0,_LAB_2c5fd2dc,_LAB_2c5fd2e4,_LAB_2c5fd2d4);
  }
  iVar8 = -1;
  iVar9 = 0;
  piVar11 = _LAB_2c5fd2c4;
  do {
    while( true ) {
      piVar11 = piVar11 + 1;
      cVar3 = (char)iVar9;
      if (*piVar11 != 0) break;
      iVar9 = iVar9 + 1;
      if (iVar8 == -1) {
        iVar8 = (int)cVar3;
      }
      if (iVar9 == 0x10) goto LAB_2c5fd12e;
    }
    iVar5 = FUN_2c66b624(param_6,*(undefined4 *)(*piVar11 + 0x1c));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1d1,_LAB_2c5fd2e0,_LAB_2c5fd2dc,_LAB_2c5fd2d8,_LAB_2c5fd2d4,param_6);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
LAB_2c5fd12e:
  iVar9 = _LAB_2c5fd2f4;
  if (iVar8 == -1) {
    FUN_2c644080(*puVar4);
    return -1;
  }
  iVar12 = (int)(short)iVar8;
  iVar10 = _LAB_2c5fd2f4 + 8;
  iVar5 = FUN_2c5fee3c(*(undefined4 *)(_LAB_2c5fd2f4 + 4),0x24);
  *(int *)(iVar10 + iVar12 * 4) = iVar5;
  if (iVar5 != 0) {
    iVar6 = FUN_2c5fee3c(*(undefined4 *)(iVar9 + 4),uVar13 + 1);
    *(int *)(iVar5 + 0x1c) = iVar6;
    if (iVar6 != 0) {
      iVar7 = FUN_2c66b624(param_6,_LAB_2c5fd2c8);
      if (iVar7 == 0) {
        *_LAB_2c5fd2cc = 1;
      }
      else {
        iVar7 = FUN_2c66b624(param_6,_LAB_2c5fd2d0);
        if (iVar7 == 0) {
          *_LAB_2c5fd2cc = 0;
        }
      }
      *(uint *)(iVar5 + 0x20) = uVar13;
      FUN_2c674668(iVar6,param_6,uVar13);
      *(undefined1 *)(*(int *)(iVar5 + 0x1c) + uVar13) = 0;
      *(undefined1 *)(*(int *)(iVar10 + iVar12 * 4) + 0x14) = 1;
      *(undefined1 *)(*(int *)(iVar10 + iVar12 * 4) + 0x13) = 0;
      *(undefined1 *)(*(int *)(iVar10 + iVar12 * 4) + 0x12) = 0;
      **(undefined4 **)(iVar10 + iVar12 * 4) = param_2;
      *(code **)(*(int *)(iVar10 + iVar12 * 4) + 4) = param_3;
      *(code **)(*(int *)(iVar10 + iVar12 * 4) + 8) = param_4;
      *(undefined4 *)(*(int *)(iVar10 + iVar12 * 4) + 0xc) = param_5;
      *(char *)(*(int *)(iVar10 + iVar12 * 4) + 0x11) = (char)iVar8;
      *(undefined1 *)(*(int *)(iVar10 + iVar12 * 4) + 0x10) = 0;
      *(undefined4 *)(*(int *)(iVar10 + iVar12 * 4) + 0x18) = 0;
      uVar1 = *(undefined1 *)(iVar9 + 0x4e);
      uVar2 = *(undefined1 *)(iVar9 + 0x50);
      FUN_2c5fc87c(*(undefined4 *)(iVar10 + iVar12 * 4));
      FUN_2c5fc87c(*(undefined4 *)(iVar10 + iVar12 * 4));
      FUN_2c644080(*puVar4);
      if (param_3 != (code *)0x0) {
        (*param_3)(param_5,uVar1);
      }
      if (param_4 != (code *)0x0) {
        (*param_4)(param_5,uVar2);
      }
      FUN_2c644044(*puVar4,0xffffffff);
      FUN_2c5fc7c4(*(undefined4 *)(iVar10 + iVar12 * 4));
      FUN_2c644080(*puVar4);
      return (int)*(char *)(*(int *)(iVar10 + iVar12 * 4) + 0x11);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e4,_LAB_2c5fd2e0,_LAB_2c5fd2dc,_LAB_2c5fd2ec,_LAB_2c5fd2d4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1de,_LAB_2c5fd2e0,_LAB_2c5fd2dc,_LAB_2c5fd2e8,_LAB_2c5fd2d4);
}

