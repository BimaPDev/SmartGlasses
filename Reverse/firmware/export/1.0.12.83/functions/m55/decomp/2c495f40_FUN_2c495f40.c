/* FUN_2c495f40 @ 0x2c495f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c495f40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  uint *puStack_50;
  uint uStack_4c;
  uint auStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  int iStack_24;
  
  iStack_24 = *_LAB_2c496120;
  uStack_38 = *_LAB_2c496124;
  uStack_34 = _LAB_2c496124[1];
  uStack_30 = _LAB_2c496124[2];
  uStack_2c = _LAB_2c496124[3];
  uStack_28 = (undefined2)_LAB_2c496124[4];
  uStack_26 = (undefined1)((uint)_LAB_2c496124[4] >> 0x10);
  puVar4 = (undefined1 *)func_0x2c66d258(&uStack_38,_LAB_2c496128);
  puStack_54 = (undefined4 *)0x0;
  puStack_5c = (undefined4 *)0x0;
  puStack_58 = (undefined4 *)0x0;
  if (puVar4 == (undefined1 *)0x0) {
LAB_2c496088:
    if (*_LAB_2c496120 != iStack_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  puStack_50 = auStack_48;
  uVar5 = FUN_2c66c4ec();
  uStack_60 = uVar5;
  if (uVar5 < 0x10) {
    puVar6 = auStack_48;
    if (uVar5 == 1) {
      auStack_48[0] = CONCAT31(auStack_48[0]._1_3_,*puVar4);
      goto LAB_2c495f9e;
    }
    if (uVar5 == 0) goto LAB_2c495f9e;
  }
  else {
    puStack_50 = (uint *)FUN_2c65e908(&puStack_50,&uStack_60,0);
    auStack_48[0] = uStack_60;
    puVar6 = puStack_50;
  }
  FUN_2c674668(puVar6,puVar4,uVar5);
  puVar6 = puStack_50;
LAB_2c495f9e:
  *(undefined1 *)((int)puVar6 + uStack_60) = 0;
  uStack_4c = uStack_60;
  uStack_64 = FUN_2c495de4(_LAB_2c496130,_LAB_2c49612c,puStack_50,0,10);
  if (puStack_50 != auStack_48) {
    thunk_FUN_2c669588(puStack_50,auStack_48[0] + 1);
  }
  if (puStack_58 == puStack_54) {
    FUN_2c495e6c(&puStack_5c,puStack_58,&uStack_64);
    uVar1 = _LAB_2c496130;
    uVar2 = _LAB_2c49612c;
    uVar3 = _LAB_2c496128;
  }
  else {
    *puStack_58 = uStack_64;
    puStack_58 = puStack_58 + 1;
    uVar1 = _LAB_2c496130;
    uVar2 = _LAB_2c49612c;
    uVar3 = _LAB_2c496128;
  }
LAB_2c495fe2:
  puVar4 = (undefined1 *)func_0x2c66d258(0,uVar3);
  if (puVar4 != (undefined1 *)0x0) {
    do {
      puStack_50 = auStack_48;
      uVar5 = FUN_2c66c4ec();
      uStack_60 = uVar5;
      if (uVar5 < 0x10) {
        puVar6 = auStack_48;
        if (uVar5 == 1) {
          auStack_48[0] = CONCAT31(auStack_48[0]._1_3_,*puVar4);
        }
        else if (uVar5 != 0) goto LAB_2c4960d8;
      }
      else {
        puStack_50 = (uint *)FUN_2c65e908(&puStack_50,&uStack_60,0);
        auStack_48[0] = uStack_60;
        puVar6 = puStack_50;
LAB_2c4960d8:
        FUN_2c674668(puVar6,puVar4,uVar5);
        puVar6 = puStack_50;
      }
      *(undefined1 *)((int)puVar6 + uStack_60) = 0;
      uStack_4c = uStack_60;
      uStack_64 = FUN_2c495de4(uVar1,uVar2,puStack_50,0,10);
      if (puStack_50 != auStack_48) {
        thunk_FUN_2c669588(puStack_50,auStack_48[0] + 1);
      }
      if (puStack_58 == puStack_54) goto LAB_2c4960e6;
      *puStack_58 = uStack_64;
      puStack_58 = puStack_58 + 1;
      puVar4 = (undefined1 *)func_0x2c66d258(0,uVar3);
      if (puVar4 == (undefined1 *)0x0) break;
    } while( true );
  }
  uVar5 = (int)puStack_58 - (int)puStack_5c;
  if (puStack_5c == puStack_58) {
    iVar7 = (int)puStack_54 - (int)puStack_5c;
    if (4 < uVar5) goto LAB_2c496068;
    if (puStack_5c == (undefined4 *)0x0) goto LAB_2c496088;
  }
  else {
    *param_1 = *puStack_5c;
    if (uVar5 < 5) {
      iVar7 = (int)puStack_54 - (int)puStack_5c;
    }
    else {
LAB_2c496068:
      param_1[1] = puStack_5c[1];
      if ((uVar5 < 9) || (param_1[2] = puStack_5c[2], uVar5 < 0xd)) {
        iVar7 = (int)puStack_54 - (int)puStack_5c;
      }
      else {
        iVar7 = (int)puStack_54 - (int)puStack_5c;
        param_1[3] = puStack_5c[3];
      }
    }
  }
  thunk_FUN_2c669588(puStack_5c,iVar7);
  goto LAB_2c496088;
LAB_2c4960e6:
  FUN_2c495e6c(&puStack_5c,puStack_58,&uStack_64);
  goto LAB_2c495fe2;
}

