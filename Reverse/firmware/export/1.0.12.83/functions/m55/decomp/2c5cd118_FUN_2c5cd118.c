/* FUN_2c5cd118 @ 0x2c5cd118 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cd118(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined4 *puStack_9c;
  int iStack_98;
  undefined4 auStack_94 [4];
  undefined4 *puStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 *puStack_6c;
  int iStack_68;
  undefined4 auStack_64 [4];
  undefined4 uStack_54;
  undefined1 auStack_50 [36];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5cd36c;
  auStack_ac[0] = 0;
  uStack_78 = 0;
  uStack_b0 = 0;
  iStack_98 = 1;
  auStack_94[0] = CONCAT22(auStack_94[0]._2_2_,0x30);
  uStack_80 = 4;
  uStack_7c = _LAB_2c5cd370;
  puStack_b4 = auStack_ac;
  puStack_9c = auStack_94;
  puStack_84 = &uStack_7c;
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (iVar3 = FUN_2c66b624(param_2,_LAB_2c5cd374), iVar3 != 0)) {
    FUN_2c5ccb68(&puStack_84,0,4,_LAB_2c5cd374,3);
    iVar3 = FUN_2c4969a8();
  }
  else {
    iVar3 = FUN_2c4969a8();
  }
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cd384,0x404,_LAB_2c5cd388,_LAB_2c5cd380);
  }
  FUN_2c5c55d8();
  uVar4 = FUN_2c5c5b3c();
  iVar3 = FUN_2c66b624(_LAB_2c5cd378,uVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cd384,0x40e,_LAB_2c5cd388,_LAB_2c5cd390);
  }
  uStack_54 = 0;
  FUN_2c674268(auStack_50,0,0x21);
  iVar3 = func_0x2c5d7060(&uStack_54,0x25);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cd384,0x416,_LAB_2c5cd388,_LAB_2c5cd38c);
  }
  uVar4 = FUN_2c66c4ec(&uStack_54);
  FUN_2c5ccb68(&puStack_b4,0,uStack_b0,&uStack_54,uVar4);
  uStack_b8 = 0;
  iVar3 = FUN_2c487c80(&uStack_b8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cd384,0x41f,_LAB_2c5cd388,_LAB_2c5cd394);
  }
  FUN_2c5dcca4(&puStack_6c,uStack_b8);
  uVar4 = auStack_94[0];
  puVar2 = puStack_9c;
  if (puStack_6c == auStack_64) {
    iVar5 = iStack_68;
    if (iStack_68 != 0) {
      if (iStack_68 == 1) {
        *(undefined1 *)puStack_9c = (undefined1)auStack_64[0];
        iVar5 = iStack_68;
      }
      else {
        FUN_2c674668(puStack_9c,auStack_64);
        iVar5 = iStack_68;
      }
    }
    *(undefined1 *)((int)puStack_9c + iVar5) = 0;
    iStack_98 = iVar5;
  }
  else {
    bVar6 = puStack_9c != auStack_94;
    puStack_9c = puStack_6c;
    if (bVar6) {
      iStack_98 = iStack_68;
      auStack_94[0] = auStack_64[0];
      if (puVar2 != (undefined4 *)0x0) {
        auStack_64[0] = uVar4;
        puStack_6c = puVar2;
        goto LAB_2c5cd20c;
      }
    }
    auStack_94[0] = auStack_64[0];
    iStack_98 = iStack_68;
    puStack_6c = auStack_64;
  }
LAB_2c5cd20c:
  iStack_68 = 0;
  *(undefined1 *)puStack_6c = 0;
  if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c5cbb5c(param_1,200,&puStack_b4,&puStack_9c,&puStack_84);
  puVar1 = puStack_b4;
  uVar4 = FUN_2c66c4ec(puStack_b4);
  func_0x2c5d70c8(puVar1,uVar4,_LAB_2c5cd37c,iVar3,uStack_b8,param_3);
  func_0x2c487e98(iVar3);
  if (puStack_84 != &uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_9c != auStack_94) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_b4 != auStack_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5cd36c == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

