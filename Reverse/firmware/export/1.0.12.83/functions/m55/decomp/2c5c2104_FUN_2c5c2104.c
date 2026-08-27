/* FUN_2c5c2104 @ 0x2c5c2104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c2104(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined2 auStack_70 [2];
  uint *puStack_6c;
  uint *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *DAT_2c5c23fc;
  FUN_2c524860(1,param_2,param_3,0);
  uVar11 = _LAB_2c5c242c;
  uVar10 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x20);
  auStack_70[0] = 1;
  uStack_58 = 0;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  puStack_5c = auStack_54;
  if (uVar10 < 10) {
    puStack_44 = auStack_3c;
    FUN_2c65e9fa(&puStack_44);
LAB_2c5c21da:
    *(char *)puStack_44 = (char)uVar10 + '0';
  }
  else {
    if (uVar10 < 100) {
      puStack_44 = auStack_3c;
      FUN_2c65e9fa(&puStack_44,2);
    }
    else {
      if (uVar10 < 1000) {
        iVar7 = 3;
      }
      else {
        iVar7 = 1;
        uVar8 = uVar10;
        if (uVar10 < 10000) {
          iVar7 = 4;
        }
        else {
          do {
            iVar6 = iVar7;
            iVar7 = iVar6 + 4;
            if (uVar8 <= _LAB_2c5c2404) goto LAB_2c5c218c;
            if (uVar8 <= _LAB_2c5c2420) {
              iVar7 = iVar6 + 5;
              goto LAB_2c5c218c;
            }
            if (uVar8 < _LAB_2c5c2424) {
              iVar7 = iVar6 + 6;
              goto LAB_2c5c218c;
            }
            bVar1 = _LAB_2c5c2428 < uVar8;
            uVar8 = (uint)((ulonglong)_LAB_2c5c2400 * (ulonglong)uVar8 >> 0x2d);
          } while (bVar1);
          iVar7 = iVar6 + 7;
        }
      }
LAB_2c5c218c:
      puStack_44 = auStack_3c;
      FUN_2c65e9fa(&puStack_44,iVar7,0);
      pcVar9 = (char *)((int)puStack_44 + (uStack_40 - 1));
      do {
        uVar8 = uVar10;
        uVar10 = (uint)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x25);
        iVar7 = uVar8 + uVar10 * -100;
        cVar2 = *(char *)(DAT_2c5c2408 + iVar7 * 2 + 1);
        pcVar9[-1] = *(char *)(DAT_2c5c2408 + iVar7 * 2);
        *pcVar9 = cVar2;
        pcVar9 = pcVar9 + -2;
      } while (9999 < uVar8);
      if (uVar8 < 1000) goto LAB_2c5c21da;
    }
    cVar2 = *(char *)(DAT_2c5c2408 + uVar10 * 2 + 1);
    *(char *)puStack_44 = *(char *)(DAT_2c5c2408 + uVar10 * 2);
    *(char *)((int)puStack_44 + 1) = cVar2;
  }
  puVar3 = puStack_44;
  if ((int)uStack_40 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5c2494);
  }
  uVar11 = auStack_54[0];
  if (puStack_5c == auStack_54) {
    uVar11 = 0xf;
  }
  if (uVar11 < uStack_40) {
    FUN_2c52263c(&puStack_5c,0,uStack_58,puStack_44,uStack_40);
    goto LAB_2c5c2208;
  }
  if ((puStack_44 < puStack_5c) ||
     (puVar5 = (uint *)((int)puStack_5c + uStack_58), puVar5 < puStack_44)) {
    if (uStack_40 == 0) goto LAB_2c5c2208;
    if (uStack_40 != 1) {
      FUN_2c674668(puStack_5c,puStack_44,uStack_40);
      goto LAB_2c5c2208;
    }
  }
  else {
    if (uStack_40 == 0) {
LAB_2c5c239e:
      if (uStack_40 <= uStack_58) goto LAB_2c5c2208;
    }
    else if (uStack_40 <= uStack_58) {
      if (uStack_40 != 1) {
        FUN_2c673eb8(puStack_5c,puStack_44,uStack_40);
        goto LAB_2c5c2208;
      }
      *(char *)puStack_5c = (char)*puStack_44;
      goto LAB_2c5c239e;
    }
    if (puVar5 < (uint *)((int)puVar3 + uStack_40)) {
      if (puVar3 < puVar5) {
        uVar11 = (int)puVar5 - (int)puVar3;
        puVar5 = puStack_5c;
        if (uVar11 == 1) {
          *(char *)puStack_5c = (char)*puVar3;
        }
        else if (uVar11 != 0) {
          puVar5 = (uint *)FUN_2c673eb8(puStack_5c,puVar3,uVar11);
        }
        if (uStack_40 - uVar11 == 1) {
          *(char *)((int)puVar5 + uVar11) = *(char *)((int)puVar5 + uStack_40);
        }
        else if (uStack_40 != uVar11) {
          FUN_2c674668((char *)((int)puVar5 + uVar11),(char *)((int)puVar5 + uStack_40));
        }
      }
      else if (uStack_40 == 1) {
        *(char *)puStack_5c = *(char *)((int)puVar3 + (uStack_40 - uStack_58));
      }
      else if (uStack_40 != 0) {
        FUN_2c674668(puStack_5c,(char *)((int)puVar3 + (uStack_40 - uStack_58)),uStack_40);
      }
      goto LAB_2c5c2208;
    }
    if (uStack_40 != 1) {
      if (uStack_40 != 0) {
        FUN_2c673eb8(puStack_5c,puVar3,uStack_40);
      }
      goto LAB_2c5c2208;
    }
  }
  *(char *)puStack_5c = (char)*puVar3;
LAB_2c5c2208:
  uStack_58 = uStack_40;
  *(char *)((int)puStack_5c + uStack_40) = '\0';
  if (puStack_44 != auStack_3c) {
    thunk_FUN_2c669588(puStack_44,auStack_3c[0] + 1);
  }
  puStack_6c = puStack_5c;
  uStack_40 = 0;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  puStack_44 = auStack_3c;
  uVar4 = FUN_2c5392f4(&puStack_44,DAT_2c5c240c,6);
  iVar7 = FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x3c),
                       *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x40));
  if (5 < 0x7fffffffU - *(int *)(iVar7 + 4)) {
    uVar4 = FUN_2c5392f4(iVar7,DAT_2c5c2410,6);
    iVar7 = FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54),
                         *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x58));
    if (2 < 0x7fffffffU - *(int *)(iVar7 + 4)) {
      uVar4 = FUN_2c5392f4(iVar7,DAT_2c5c2414,3);
      iVar7 = FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x6c),
                           *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x70));
      if (0xe < 0x7fffffffU - *(int *)(iVar7 + 4)) {
        uVar4 = FUN_2c5392f4(iVar7,DAT_2c5c2418,0xf);
        iVar7 = FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x9c),
                             *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xa0));
        if (5 < 0x7fffffffU - *(int *)(iVar7 + 4)) {
          uVar4 = FUN_2c5392f4(iVar7,DAT_2c5c241c,6);
          iVar7 = FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x84),
                               *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x88));
          if (2 < 0x7fffffffU - *(int *)(iVar7 + 4)) {
            uVar4 = FUN_2c5392f4(iVar7,DAT_2c5c2414,3);
            FUN_2c5392f4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xb4),
                         *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xb8));
            uStack_60 = 0;
            puStack_68 = puStack_44;
            uStack_64 = 0;
            FUN_2c5245b0(auStack_70);
            if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            if (*DAT_2c5c23fc == iStack_2c) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c5c2490);
}

