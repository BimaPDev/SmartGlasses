/* FUN_2c5559c0 @ 0x2c5559c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5559c0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c555b1c;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_2c555a2e;
  }
  auStack_4c[0] = 0;
  uStack_50 = 0;
  puStack_54 = auStack_4c;
  iVar2 = FUN_2c54f0ec(param_1,_LAB_2c555b20,&puStack_54,0);
  if (iVar2 < 0) {
LAB_2c555a1e:
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = func_0x2c58c2ec(_LAB_2c555b24,puStack_54);
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
    iVar2 = FUN_2c54f0ec(param_1,_LAB_2c555b28,param_2 + 4,1);
    if (iVar2 < 0) goto LAB_2c555a1e;
    uVar3 = FUN_2c48e42c(param_1,_LAB_2c555b2c);
    iVar2 = FUN_2c48e86c();
    if (iVar2 == 0) goto LAB_2c555a1e;
    puVar4 = (undefined1 *)FUN_2c48e3e8(uVar3);
    puStack_3c = auStack_34;
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(_DAT_2c555b30);
    }
    uVar5 = FUN_2c66c4ec();
    uStack_58 = uVar5;
    if (uVar5 < 0x10) {
      puVar6 = auStack_34;
      if (uVar5 == 1) {
        auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*puVar4);
      }
      else if (uVar5 != 0) goto LAB_2c555af0;
    }
    else {
      puStack_3c = (uint *)FUN_2c555870(&uStack_58,0);
      auStack_34[0] = uStack_58;
      puVar6 = puStack_3c;
LAB_2c555af0:
      FUN_2c674668(puVar6,puVar4,uVar5);
      puVar6 = puStack_3c;
    }
    uVar5 = uStack_58;
    *(undefined1 *)((int)puVar6 + uStack_58) = 0;
    puVar8 = *(undefined1 **)(param_2 + 0x20);
    if (puVar8 == (undefined1 *)(param_2 + 0x28)) {
      uVar7 = 0xf;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x28);
    }
    uStack_38 = uStack_58;
    if (uVar7 < uStack_58) {
      puVar8 = (undefined1 *)FUN_2c555870(&uStack_58);
      if ((undefined1 *)(param_2 + 0x28) != *(undefined1 **)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *(undefined1 **)(param_2 + 0x20) = puVar8;
      *(uint *)(param_2 + 0x28) = uStack_58;
    }
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *puVar8 = (char)*puStack_3c;
        puVar8 = *(undefined1 **)(param_2 + 0x20);
      }
      else {
        FUN_2c674668(puVar8,puStack_3c,uVar5);
        puVar8 = *(undefined1 **)(param_2 + 0x20);
      }
    }
    *(uint *)(param_2 + 0x24) = uVar5;
    puVar8[uVar5] = 0;
    FUN_2c48e87c(puVar4);
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar3 = 0;
  }
  if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c555a2e:
  if (*_LAB_2c555b1c == iStack_24) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

