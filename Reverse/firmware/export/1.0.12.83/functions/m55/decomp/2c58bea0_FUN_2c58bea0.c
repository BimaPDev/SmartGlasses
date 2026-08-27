/* FUN_2c58bea0 @ 0x2c58bea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c58bea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  short asStack_44 [2];
  uint uStack_40;
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  iStack_24 = *DAT_2c58c048;
  if ((param_1 != 0) && (iVar1 = FUN_2c54ee98(param_1,_LAB_2c58c04c,asStack_44,1), -1 < iVar1)) {
    *(short *)(param_2 + 0x26) = asStack_44[0];
    if (asStack_44[0] != 0x6a) {
      if (asStack_44[0] == 0x70) {
LAB_2c58bf00:
        iVar1 = FUN_2c54ee24(param_1,_LAB_2c58c050,param_2 + 0x1c,1);
        iVar1 = iVar1 >> 0x1f;
        goto LAB_2c58bf10;
      }
      if (asStack_44[0] == 0x72) {
        iVar1 = FUN_2c54ee98(param_1,_LAB_2c58c050,param_2 + 0x20,1);
        iVar1 = iVar1 >> 0x1f;
        goto LAB_2c58bf10;
      }
      if (asStack_44[0] == 7) {
        iVar1 = FUN_2c54f0ec(param_1,_LAB_2c58c050,param_2 + 4,1);
        iVar1 = iVar1 >> 0x1f;
        goto LAB_2c58bf10;
      }
      if (asStack_44[0] == 0x71) goto LAB_2c58bf00;
      iVar1 = FUN_2c48e42c(param_1,_LAB_2c58c050);
      if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
        iVar1 = 0;
        goto LAB_2c58bf10;
      }
      iVar2 = FUN_2c48e86c(iVar1);
      if (iVar2 == 0) goto LAB_2c58befa;
      puVar3 = (undefined1 *)FUN_2c48e3e8(iVar1);
      puStack_3c = auStack_34;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(_DAT_2c58c054);
      }
      uVar4 = FUN_2c66c4ec();
      uStack_40 = uVar4;
      if (uVar4 < 0x10) {
        puVar5 = auStack_34;
        if (uVar4 == 1) {
          auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*puVar3);
        }
        else if (uVar4 != 0) goto LAB_2c58c020;
      }
      else {
        puStack_3c = (uint *)FUN_2c58bd90(&uStack_40,0);
        auStack_34[0] = uStack_40;
        puVar5 = puStack_3c;
LAB_2c58c020:
        FUN_2c674668(puVar5,puVar3,uVar4);
        puVar5 = puStack_3c;
      }
      uVar4 = uStack_40;
      *(undefined1 *)((int)puVar5 + uStack_40) = 0;
      puVar7 = *(undefined1 **)(param_2 + 4);
      if (puVar7 == (undefined1 *)(param_2 + 0xc)) {
        uVar6 = 0xf;
      }
      else {
        uVar6 = *(uint *)(param_2 + 0xc);
      }
      uStack_38 = uStack_40;
      if (uVar6 < uStack_40) {
        puVar7 = (undefined1 *)FUN_2c58bd90(&uStack_40);
        if ((undefined1 *)(param_2 + 0xc) != *(undefined1 **)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        *(undefined1 **)(param_2 + 4) = puVar7;
        *(uint *)(param_2 + 0xc) = uStack_40;
      }
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          *puVar7 = (char)*puStack_3c;
          puVar7 = *(undefined1 **)(param_2 + 4);
        }
        else {
          FUN_2c674668(puVar7,puStack_3c,uVar4);
          puVar7 = *(undefined1 **)(param_2 + 4);
        }
      }
      *(uint *)(param_2 + 8) = uVar4;
      puVar7[uVar4] = 0;
      FUN_2c48e87c(puVar3);
      iVar1 = 0;
      if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      goto LAB_2c58bf10;
    }
    iVar1 = FUN_2c54ee98(param_1,_LAB_2c58c050,&uStack_40,1);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(char *)(param_2 + 0x24) = (char)uStack_40;
      goto LAB_2c58bf10;
    }
  }
LAB_2c58befa:
  iVar1 = -1;
LAB_2c58bf10:
  if (*DAT_2c58c048 == iStack_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

