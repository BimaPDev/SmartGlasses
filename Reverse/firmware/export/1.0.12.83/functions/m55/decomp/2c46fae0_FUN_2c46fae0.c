/* FUN_2c46fae0 @ 0x2c46fae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46fae0(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = 0;
  piVar7 = _LAB_2c46fbec;
  do {
    piVar7 = piVar7 + 1;
    *piVar7 = iVar8;
    uVar4 = _LAB_2c46fc08;
    uVar3 = _LAB_2c46fc04;
    pbVar2 = _LAB_2c46fc00;
    uVar5 = _LAB_2c46fbfc;
    iVar1 = _LAB_2c46fbf4;
    uVar6 = _LAB_2c46fbf0;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x14);
  uVar9 = *_LAB_2c46fc00 & 3;
  if (*(int *)(_LAB_2c46fbf4 + uVar9 * 4) != 0) {
    uVar6 = func_0x2c49b148(uVar9);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x29a,uVar4,uVar3,uVar5,*(undefined4 *)(iVar1 + uVar9 * 4),uVar9,uVar6);
  }
  uVar5 = func_0x2c49b0c4(uVar9,_LAB_2c46fbf0,1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x29f,uVar4,uVar3,_LAB_2c46fbf8,uVar6,uVar9,*pbVar2,uVar5);
}

