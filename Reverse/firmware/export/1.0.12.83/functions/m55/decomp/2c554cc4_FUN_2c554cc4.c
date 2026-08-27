/* FUN_2c554cc4 @ 0x2c554cc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c554cc4(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uStack_60;
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c554fa8;
  puVar13 = *(undefined1 **)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 8);
  puStack_5c = auStack_54;
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c555128;
  uStack_60 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      auStack_54[0] = CONCAT31(auStack_54[0]._1_3_,*puVar13);
    }
    else if (uVar10 != 0) goto LAB_2c554fe4;
  }
  else {
    puStack_5c = (uint *)FUN_2c54f538(&uStack_60,0,param_3,0);
    auStack_54[0] = uStack_60;
LAB_2c554fe4:
    FUN_2c674668(puStack_5c,puVar13,uVar10);
  }
  *(undefined1 *)((int)puStack_5c + uStack_60) = 0;
  puVar13 = *(undefined1 **)(param_2 + 4);
  uVar10 = *(uint *)(param_2 + 8);
  uStack_58 = uStack_60;
  puStack_44 = auStack_3c;
  if (puVar13 != (undefined1 *)-uVar10 && puVar13 == (undefined1 *)0x0) {
LAB_2c555128:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c555134);
  }
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar13);
      goto LAB_2c554d44;
    }
    uStack_60 = uVar10;
    if (uVar10 == 0) goto LAB_2c554d44;
  }
  else {
    uStack_60 = uVar10;
    puStack_44 = (uint *)FUN_2c54f538(&uStack_60,0);
    auStack_3c[0] = uStack_60;
  }
  FUN_2c674668(puStack_44,puVar13,uVar10);
  uVar10 = uStack_60;
LAB_2c554d44:
  uStack_60 = uVar10;
  puVar4 = puStack_44;
  puVar1 = puStack_5c;
  uVar10 = uStack_60;
  *(undefined1 *)((int)puStack_44 + uStack_60) = 0;
  uVar5 = uStack_58;
  if (uStack_60 <= uStack_58) {
    uVar5 = uStack_60;
  }
  uVar6 = uStack_58;
  uStack_40 = uStack_60;
  if ((uVar5 == 0) || (iVar2 = FUN_2c66960c(puStack_5c,puStack_44), iVar2 == 0)) {
    iVar2 = uVar6 - uVar10;
  }
  if (puVar4 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar4);
  }
  if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  uVar14 = 0;
  if (iVar2 == 0) {
    iVar7 = *(int *)(param_2 + 0x20);
    for (iVar2 = *(int *)(param_2 + 0x1c); iVar7 != iVar2; iVar2 = iVar2 + 0xbc) {
      iVar11 = *(int *)(param_1 + 0x1c);
      iVar8 = *(int *)(param_1 + 0x20);
      iVar9 = _LAB_2c554fac * (iVar8 - iVar11 >> 2);
      if (0 < iVar9 >> 2) {
        iVar9 = (iVar9 >> 2) * 0x2f0 + iVar11;
        do {
          FUN_2c5533c8(&puStack_44,iVar11);
          FUN_2c5533c8(&puStack_5c,iVar2);
          uVar5 = uStack_40;
          puVar1 = puStack_44;
          uVar10 = uStack_58;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          puVar4 = puStack_5c;
          if ((uVar6 == 0) || (iVar3 = FUN_2c66960c(puStack_44), iVar3 == 0)) {
            iVar3 = uVar5 - uVar10;
          }
          if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          iVar12 = iVar11;
          if (iVar3 == 0) goto LAB_2c554f8a;
          FUN_2c5533c8(&puStack_44,iVar11 + 0xbc);
          FUN_2c5533c8(&puStack_5c,iVar2);
          uVar5 = uStack_40;
          puVar1 = puStack_44;
          uVar10 = uStack_58;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          puVar4 = puStack_5c;
          if ((uVar6 == 0) || (iVar3 = FUN_2c66960c(puStack_44), iVar3 == 0)) {
            iVar3 = uVar5 - uVar10;
          }
          if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1,iVar3,uVar5,iVar3);
          }
          iVar12 = iVar11 + 0xbc;
          if (iVar3 == 0) goto LAB_2c554f8a;
          FUN_2c5533c8(&puStack_44,iVar11 + 0x178);
          FUN_2c5533c8(&puStack_5c,iVar2);
          uVar5 = uStack_40;
          puVar1 = puStack_44;
          uVar10 = uStack_58;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          puVar4 = puStack_5c;
          if ((uVar6 == 0) || (iVar3 = FUN_2c66960c(puStack_44), iVar3 == 0)) {
            iVar3 = uVar5 - uVar10;
          }
          if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1,iVar3,uVar5,iVar3);
          }
          iVar12 = iVar11 + 0x178;
          if (iVar3 == 0) goto LAB_2c554f8a;
          FUN_2c5533c8(&puStack_44,iVar11 + 0x234);
          FUN_2c5533c8(&puStack_5c,iVar2);
          uVar5 = uStack_40;
          puVar1 = puStack_44;
          uVar10 = uStack_58;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          puVar4 = puStack_5c;
          if ((uVar6 == 0) || (iVar3 = FUN_2c66960c(puStack_44), iVar3 == 0)) {
            iVar3 = uVar5 - uVar10;
          }
          if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1,iVar3,uVar5,iVar3);
          }
          iVar12 = iVar11 + 0x234;
          if (iVar3 == 0) goto LAB_2c554f8a;
          iVar11 = iVar11 + 0x2f0;
        } while (iVar9 != iVar11);
        iVar9 = _LAB_2c554fac * (iVar8 - iVar11 >> 2);
      }
      iVar12 = iVar11;
      if (iVar9 == 2) {
LAB_2c5550b4:
        FUN_2c5533c8(&puStack_44,iVar12);
        FUN_2c5533c8(&puStack_5c,iVar2);
        uVar5 = uStack_40;
        puVar1 = puStack_44;
        uVar10 = uStack_58;
        uVar6 = uStack_40;
        if (uStack_58 <= uStack_40) {
          uVar6 = uStack_58;
        }
        puVar4 = puStack_5c;
        if ((uVar6 == 0) || (iVar9 = FUN_2c66960c(puStack_44), iVar9 == 0)) {
          iVar9 = uVar5 - uVar10;
        }
        if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar1);
        }
        if (iVar9 != 0) {
          iVar11 = iVar12 + 0xbc;
LAB_2c554ff4:
          FUN_2c5533c8(&puStack_44,iVar11);
          FUN_2c5533c8(&puStack_5c,iVar2);
          uVar5 = uStack_40;
          puVar4 = puStack_44;
          uVar10 = uStack_58;
          puVar1 = puStack_5c;
          uVar6 = uStack_40;
          if (uStack_58 <= uStack_40) {
            uVar6 = uStack_58;
          }
          if ((uVar6 == 0) || (iVar9 = FUN_2c66960c(puStack_44,puStack_5c), iVar9 == 0)) {
            iVar9 = uVar5 - uVar10;
          }
          if (puVar1 != auStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
          if (puVar4 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar4);
          }
          iVar12 = iVar11;
          if (iVar9 != 0) goto LAB_2c554f88;
        }
      }
      else if (iVar9 == 3) {
        FUN_2c5533c8(&puStack_44,iVar11);
        FUN_2c5533c8(&puStack_5c,iVar2);
        uVar5 = uStack_40;
        puVar1 = puStack_44;
        uVar10 = uStack_58;
        uVar6 = uStack_40;
        if (uStack_58 <= uStack_40) {
          uVar6 = uStack_58;
        }
        puVar4 = puStack_5c;
        if ((uVar6 == 0) || (iVar9 = FUN_2c66960c(puStack_44), iVar9 == 0)) {
          iVar9 = uVar5 - uVar10;
        }
        if (puVar4 != auStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (puVar1 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar1);
        }
        if (iVar9 != 0) {
          iVar12 = iVar11 + 0xbc;
          goto LAB_2c5550b4;
        }
      }
      else {
        if (iVar9 == 1) goto LAB_2c554ff4;
LAB_2c554f88:
        iVar12 = iVar8;
      }
LAB_2c554f8a:
      if (*(int *)(param_1 + 0x20) != iVar12) {
        FUN_2c553554(iVar12,iVar2);
      }
    }
    uVar14 = 1;
  }
  if (*_LAB_2c554fa8 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar14;
}

