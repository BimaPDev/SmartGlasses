/* FUN_2c59eb90 @ 0x2c59eb90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59eb90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puStack_30;
  uint uStack_2c;
  
  uStack_2c = *_LAB_2c59ec38;
  iVar4 = 0;
  iVar8 = param_1 + 4;
  if (*(int *)(param_1 + 8) != 0) {
    uVar10 = *param_2;
    uVar9 = param_2[1];
    puVar2 = param_2;
    iVar1 = *(int *)(param_1 + 8);
    iVar7 = iVar8;
LAB_2c59ebb2:
    do {
      iVar5 = iVar1;
      uVar6 = *(uint *)(iVar5 + 0x14);
      uVar3 = uVar6;
      if (uVar9 <= uVar6) {
        uVar3 = uVar9;
      }
      if (uVar3 == 0) {
LAB_2c59ebc8:
        uVar12 = CONCAT44(puVar2,uVar6 - uVar9);
      }
      else {
        uVar12 = FUN_2c66960c(*(undefined4 *)(iVar5 + 0x10),uVar10,uVar3,iVar4);
        puVar2 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 == 0) goto LAB_2c59ebc8;
      }
      puVar2 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
      iVar4 = *(int *)(iVar5 + 8);
      if (-1 < (int)uVar12) {
        iVar1 = iVar4;
        iVar7 = iVar5;
        if (iVar4 == 0) break;
        goto LAB_2c59ebb2;
      }
      iVar1 = *(int *)(iVar5 + 0xc);
    } while (*(int *)(iVar5 + 0xc) != 0);
    bVar11 = iVar8 != iVar7;
    iVar8 = iVar7;
    if (bVar11) {
      uVar6 = *(uint *)(iVar7 + 0x14);
      uVar3 = uVar6;
      if (uVar9 <= uVar6) {
        uVar3 = uVar9;
      }
      if (uVar3 == 0) {
LAB_2c59ebf6:
        uVar12 = CONCAT44(puVar2,uVar9 - uVar6);
      }
      else {
        uVar12 = FUN_2c66960c(uVar10,*(undefined4 *)(iVar7 + 0x10));
        puVar2 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 == 0) goto LAB_2c59ebf6;
      }
      uVar13 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),iVar7);
      if (-1 < (int)uVar12) goto LAB_2c59ebfe;
    }
  }
  puStack_30 = param_2;
  uVar13 = FUN_2c59ea60(param_1,iVar8,&puStack_30);
LAB_2c59ebfe:
  if ((*_LAB_2c59ec38 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)uVar13 + 0x28,(int)((ulonglong)uVar13 >> 0x20),*_LAB_2c59ec38 ^ uStack_2c,0)
    ;
  }
  return;
}

