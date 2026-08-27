/* FUN_2c5da070 @ 0x2c5da070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5da070(undefined4 param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 *puStack_64;
  uint uStack_60;
  undefined1 auStack_5c [16];
  uint *puStack_4c;
  uint uStack_48;
  uint auStack_44 [4];
  uint *puStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c5da1ec;
  iVar3 = FUN_2c602400();
  iVar4 = FUN_2c621084(param_1);
  if ((iVar3 == 0) || (iVar4 == 0)) goto LAB_2c5da16a;
  iVar4 = FUN_2c62107c();
  puStack_64 = auStack_5c;
  if (iVar4 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = FUN_2c66c4ec();
    iVar5 = iVar4 + iVar5;
  }
  FUN_2c5d83b4(&puStack_64,iVar4,iVar5);
  puStack_4c = auStack_44;
  FUN_2c5d83b4(&puStack_4c,_LAB_2c5da1f0);
  puVar1 = puStack_64;
  if (((uStack_60 != 0) && (iVar4 = FUN_2c643680(puStack_64,0x2e,uStack_60), iVar4 != 0)) &&
     (uVar6 = iVar4 - (int)puVar1, uVar6 != 0xffffffff)) {
    if (uVar6 < uStack_60) {
      uStack_60 = uVar6;
    }
    puStack_34 = auStack_2c;
    FUN_2c5d83b4(&puStack_34,puVar1,puVar1 + uStack_60);
    uVar6 = auStack_44[0];
    puVar2 = puStack_4c;
    if (puStack_34 == auStack_2c) {
      uStack_48 = uStack_30;
      if (uStack_30 != 0) {
        if (uStack_30 == 1) {
          *(undefined1 *)puStack_4c = (undefined1)auStack_2c[0];
          uStack_48 = uStack_30;
        }
        else {
          FUN_2c674668(puStack_4c,auStack_2c);
          uStack_48 = uStack_30;
        }
      }
      *(undefined1 *)((int)puStack_4c + uStack_48) = 0;
    }
    else {
      bVar7 = puStack_4c != auStack_44;
      puStack_4c = puStack_34;
      if (bVar7) {
        uStack_48 = uStack_30;
        auStack_44[0] = auStack_2c[0];
        if (puVar2 != (uint *)0x0) {
          auStack_2c[0] = uVar6;
          puStack_34 = puVar2;
          goto LAB_2c5da116;
        }
      }
      auStack_44[0] = auStack_2c[0];
      uStack_48 = uStack_30;
      puStack_34 = auStack_2c;
    }
LAB_2c5da116:
    uStack_30 = 0;
    *(undefined1 *)puStack_34 = 0;
    if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
  }
  if (uStack_48 != 0) {
    if (uStack_48 < 5) {
      uVar6 = uStack_48 + 4;
      if ((puStack_4c == auStack_44) || (uVar6 <= auStack_44[0])) {
        *(undefined4 *)((int)puStack_4c + uStack_48) = *_LAB_2c5da1f4;
      }
      else {
        FUN_2c52263c(&puStack_4c,uStack_48,0,_LAB_2c5da1f4,4);
      }
      *(undefined1 *)((int)puStack_4c + uVar6) = 0;
      uStack_48 = uVar6;
      FUN_2c638730(iVar3,puStack_4c);
    }
    else {
      FUN_2c5d9e50(&puStack_4c,0,uStack_48,_LAB_2c5da1f8,8);
      FUN_2c638730(iVar3,puStack_4c);
    }
  }
  if (puStack_4c != auStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5da16a:
  if (*_LAB_2c5da1ec == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

