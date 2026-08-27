/* FUN_2c615874 @ 0x2c615874 */

/* WARNING: Removing unreachable block (ram,0x2c606aa0) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c615874(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar4 = _LAB_2c615950;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined2 *)(param_2 + 0x34) = 0;
  iVar2 = _LAB_2c615960;
  iVar1 = _LAB_2c61595c;
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  FUN_2c62c3b0(param_2 + 0x118,0xa8);
  uVar5 = 0;
  bVar6 = 1;
  uVar8 = 0;
  piVar3 = (int *)(param_2 + 0x38);
  do {
    if (uVar5 == 0) {
LAB_2c6158d0:
      *piVar3 = *(int *)(iVar1 + uVar5 * 4);
    }
    else {
      iVar9 = uVar8 + 0x46;
      if ((bVar6 & 7) == 0) {
        *piVar3 = iVar2;
      }
      else {
        if ((uVar5 & 0xff) < 7) goto LAB_2c6158d0;
        *(undefined1 *)(param_2 + iVar9 * 4) = 0x78;
        uVar8 = uVar8 + 1 & 0xff;
        *piVar3 = param_2 + iVar9 * 4;
      }
      if (bVar6 == 0x38) {
        *(undefined4 *)(param_2 + 0x114) = _LAB_2c615954;
        uVar4 = FUN_2c635d90(param_2);
        *(undefined4 *)(param_2 + 0x24) = uVar4;
        FUN_2c635da8(uVar4,(int *)(param_2 + 0x38));
        FUN_2c635e1c(*(undefined4 *)(param_2 + 0x24),0x110);
        FUN_2c602454(*(undefined4 *)(param_2 + 0x24),_LAB_2c615958,0x1a,0);
        FUN_2c6070bc(*(undefined4 *)(param_2 + 0x24),0x2064);
        FUN_2c627e28(param_2,1);
        FUN_2c627ea0(*(undefined4 *)(param_2 + 0x24),1);
        func_0x2c6156b8(param_2,*(undefined2 *)(param_2 + 0x2c),(int)*(char *)(param_2 + 0x2e));
        FUN_2c6155cc(param_2);
        iVar9 = *(int *)(param_2 + 0x24);
        iVar7 = *DAT_2c606ab8;
        iVar1 = FUN_2c607214();
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x4000;
        iVar2 = FUN_2c607214(iVar9);
        if (iVar2 != iVar1) {
          FUN_2c6041d4(iVar9);
          FUN_2c607248();
          FUN_2c607248(iVar9);
        }
        if (*DAT_2c606ab8 != iVar7) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return;
      }
    }
    bVar6 = bVar6 + 1;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
  } while( true );
}

