/* FUN_2c48cde8 @ 0x2c48cde8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48cde8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar2 = _LAB_2c48cedc;
  piVar1 = _LAB_2c48ceac;
  if (*_LAB_2c48cedc == 0) {
    if (*_LAB_2c48ceac == 0) {
      iVar5 = FUN_2c64419c(_LAB_2c48ced0);
      *piVar1 = iVar5;
    }
    iVar5 = _LAB_2c48cee0;
    iVar10 = _LAB_2c48cee0 + 0x140;
    iVar7 = _LAB_2c48cee0;
    iVar9 = _LAB_2c48ceb0;
    do {
      *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
      iVar8 = iVar7 + 0x14;
      uVar3 = FUN_2c647174(0xffff,0);
      *(undefined1 *)(iVar9 + 1) = 0;
      iVar9 = iVar9 + 0x400;
      *(undefined1 *)(iVar7 + 1) = 0;
      *(undefined4 *)(iVar7 + 8) = uVar3;
      *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
      iVar7 = iVar8;
    } while (iVar8 != iVar10);
    uVar4 = FUN_2c64419c(_LAB_2c48ceb4);
    uVar3 = _LAB_2c48ceb8;
    *(undefined4 *)(iVar5 + 4) = uVar4;
    uVar4 = FUN_2c64419c(uVar3);
    uVar3 = _LAB_2c48cebc;
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    iVar5 = FUN_2c6440f0(uVar3,0);
    uVar3 = _LAB_2c48cec0;
    *piVar2 = iVar5;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xb5,_LAB_2c48cecc,_LAB_2c48cec8,_LAB_2c48cec4,uVar3);
    }
    uVar6 = 0xb0;
    uVar4 = _LAB_2c48ced8;
  }
  else {
    uVar6 = 0x97;
    uVar4 = _LAB_2c48ced4;
    uVar3 = _LAB_2c48cec0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar6,_LAB_2c48cecc,_LAB_2c48cec8,uVar4,uVar3);
}

