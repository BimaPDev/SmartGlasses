/* FUN_2c54f638 @ 0x2c54f638 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54f638(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uStack_38;
  uint *puStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c54f760;
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) == 0) goto LAB_2c54f712;
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c54f764,*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_2c48e714();
  pcVar1 = _LAB_2c54f770;
  puVar10 = *(undefined4 **)(param_1 + 0x24);
  for (puVar8 = *(undefined4 **)(param_1 + 0x20); puVar8 != puVar10; puVar8 = puVar8 + 0x2f) {
    if (*(code **)*puVar8 == pcVar1) {
      if ((((puVar8[0x20] != 0) && (puVar8[0x1a] != 0)) && (puVar8[0x26] != 0)) &&
         (puVar8[0x2b] != -1)) {
        iVar4 = FUN_2c54f490(puVar8);
        goto LAB_2c54f69e;
      }
LAB_2c54f704:
      uVar9 = 0;
      FUN_2c48dea0(uVar2);
      FUN_2c48dea0(uVar3);
      goto LAB_2c54f712;
    }
    iVar4 = (**(code **)*puVar8)(puVar8);
LAB_2c54f69e:
    if (iVar4 == 0) goto LAB_2c54f704;
    FUN_2c48e444(uVar3);
  }
  puVar5 = (undefined1 *)FUN_2c48e3e8(uVar3);
  puStack_34 = auStack_2c;
  if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c54f76c);
  }
  uVar6 = FUN_2c66c4ec();
  uStack_38 = uVar6;
  if (uVar6 < 0x10) {
    puVar7 = auStack_2c;
    if (uVar6 == 1) {
      auStack_2c[0] = CONCAT31(auStack_2c[0]._1_3_,*puVar5);
    }
    else if (uVar6 != 0) goto LAB_2c54f744;
  }
  else {
    puStack_34 = (uint *)FUN_2c54f538(&uStack_38,0);
    auStack_2c[0] = uStack_38;
    puVar7 = puStack_34;
LAB_2c54f744:
    FUN_2c674668(puVar7,puVar5,uVar6);
    puVar7 = puStack_34;
  }
  *(undefined1 *)((int)puVar7 + uStack_38) = 0;
  uStack_30 = uStack_38;
  FUN_2c48e87c(puVar5);
  FUN_2c48dea0(uVar3);
  FUN_2c48e5b4(uVar2,_LAB_2c54f768,puStack_34);
  uVar9 = uVar2;
  if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c54f712:
  if (*_LAB_2c54f760 == iStack_1c) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

