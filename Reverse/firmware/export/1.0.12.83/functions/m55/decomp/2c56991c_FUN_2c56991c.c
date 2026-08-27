/* FUN_2c56991c @ 0x2c56991c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56991c(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_58;
  uint *puStack_54;
  uint uStack_50;
  uint auStack_4c [4];
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c569a44;
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c569a48,param_2);
  FUN_2c48e518(0,uVar2,_LAB_2c569a4c);
  puVar3 = (undefined1 *)FUN_2c48e3e8(uVar2);
  puStack_54 = auStack_4c;
  if (puVar3 == (undefined1 *)0x0) goto LAB_2c569a34;
  uVar4 = FUN_2c66c4ec();
  uStack_58 = uVar4;
  if (uVar4 < 0x10) {
    puVar5 = auStack_4c;
    if (uVar4 == 1) {
      auStack_4c[0] = CONCAT31(auStack_4c[0]._1_3_,*puVar3);
    }
    else if (uVar4 != 0) goto LAB_2c569a04;
  }
  else {
    puStack_54 = (uint *)FUN_2c5694c8(&uStack_58,0);
    auStack_4c[0] = uStack_58;
    puVar5 = puStack_54;
LAB_2c569a04:
    FUN_2c674668(puVar5,puVar3,uVar4);
    puVar5 = puStack_54;
  }
  puVar1 = puStack_54;
  uVar4 = uStack_58;
  *(undefined1 *)((int)puVar5 + uStack_58) = 0;
  puStack_3c = auStack_34;
  uStack_50 = uStack_58;
  if (((undefined1 *)((int)puStack_54 + uStack_58) != (undefined1 *)0x0) &&
     (puStack_54 == (uint *)0x0)) {
LAB_2c569a34:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c569a50);
  }
  if (uStack_58 < 0x10) {
    if (uStack_58 == 1) {
      auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,(char)*puStack_54);
      goto LAB_2c5699a2;
    }
    if (uStack_58 == 0) goto LAB_2c5699a2;
  }
  else {
    puStack_3c = (uint *)FUN_2c5694c8(&uStack_58,0);
    auStack_34[0] = uStack_58;
  }
  FUN_2c674668(puStack_3c,puVar1,uVar4);
LAB_2c5699a2:
  *(undefined1 *)((int)puStack_3c + uStack_58) = 0;
  uStack_38 = uStack_58;
  FUN_2c592760(param_1,2,&puStack_3c);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c48e87c(puVar3);
  FUN_2c48dea0(uVar2);
  if (puStack_54 == auStack_4c) {
    if (*_LAB_2c569a44 != iStack_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

