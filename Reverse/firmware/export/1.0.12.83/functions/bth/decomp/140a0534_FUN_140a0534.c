/* FUN_140a0534 @ 0x140a0534 */

undefined4 FUN_140a0534(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 local_2d;
  int local_2c;
  
  local_2c = *DAT_140a0800;
  if (*DAT_140a0804 != 0) {
    FUN_140e5148(*DAT_140a0804,0xffffffff);
  }
  piVar5 = DAT_140a0834;
  piVar4 = DAT_140a0830;
  uVar9 = DAT_140a080c;
  psVar3 = DAT_140a0808;
  uVar11 = 0;
  uVar10 = (uint)*(byte *)((int)DAT_140a0808 + 1);
LAB_140a0568:
  if (uVar10 != 0) {
    if ((*psVar3 == 1) || (uVar10 - 1 < 5)) goto LAB_140a0576;
    if (6 < uVar10 - 6) goto LAB_140a064c;
    iVar7 = FUN_140e5758(1,&local_2d);
    puVar2 = LAB_140a0a5c;
    if (iVar7 != 0) goto LAB_140a0686;
    if (param_1 == 0) goto LAB_140a06da;
    uVar10 = (uint)*(byte *)((int)psVar3 + 1);
    if (1 < uVar10 - 6) {
      if (uVar10 - 8 < 2) {
        *(char *)((int)psVar3 + 1) = '\t';
        iVar7 = FUN_140e55c8(1,*(int *)(psVar3 + 2) + *piVar5,uVar9,*puVar2);
        if (iVar7 != 0) goto LAB_140a0a22;
        *(char *)((int)psVar3 + 1) = '\n';
LAB_140a08f8:
        uVar11 = 0;
        goto LAB_140a064c;
      }
      if (uVar10 == 10) {
        iVar7 = FUN_140e50a8(1,*(int *)(psVar3 + 2) + *piVar4,uVar9,*LAB_140a0a5c,1);
        if (iVar7 != 0) {
          if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_140a0a6c,DAT_140a0a70,iVar7,*piVar4 + *(int *)(psVar3 + 2));
          }
          goto LAB_140a096c;
        }
        *(char *)((int)psVar3 + 1) = '\v';
        goto LAB_140a08f8;
      }
      if (uVar10 != 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a0a78,DAT_140a0a70);
      }
      iVar7 = FUN_140e5708(1,3);
      if (iVar7 != 0) {
        FUN_140e5a38();
        uVar11 = 0;
        goto LAB_140a0972;
      }
      goto LAB_140a0646;
    }
    if (uVar10 == 6) {
      *(char *)((int)psVar3 + 1) = '\a';
    }
    iVar7 = FUN_140e53c8(1,*piVar4,*LAB_140a0a5c);
    if (iVar7 == 0) {
      *(char *)((int)psVar3 + 1) = '\b';
      goto LAB_140a08f8;
    }
    if (iVar7 != 1) {
LAB_140a0a32:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a0a74,DAT_140a0a70,iVar7,*piVar4);
    }
LAB_140a096c:
    FUN_140e5a38();
    uVar11 = 1;
LAB_140a0972:
    if (*(char *)((int)psVar3 + 1) != '\f') goto LAB_140a064c;
    goto LAB_140a0648;
  }
  if ((char)*psVar3 == '\0') goto LAB_140a05d0;
  if (*psVar3 != 1) goto LAB_140a064c;
LAB_140a0576:
  iVar7 = FUN_140e5758(1,&local_2d);
  piVar6 = DAT_140a0838;
  puVar2 = DAT_140a0828;
  uVar11 = DAT_140a0824;
  if (iVar7 != 0) {
    FUN_1402a6e8(4,0x36e,DAT_140a081c,DAT_140a0818,DAT_140a0814,DAT_140a0820,iVar7);
    uVar11 = 1;
LAB_140a06bc:
    if (param_1 == 0) goto code_r0x140a06c2;
    goto LAB_140a05d0;
  }
  if (*DAT_140a0838 == 0) {
    FUN_1402a6e8(4,0x374,DAT_140a081c,DAT_140a0818,DAT_140a082c,DAT_140a0820);
    uVar11 = 0;
    goto LAB_140a06bc;
  }
  if (param_1 == 0) {
    bVar1 = *(byte *)((int)psVar3 + 1);
    if (bVar1 < 2) {
      while (iVar7 = FUN_140e53c8(1,uVar11,*puVar2), iVar7 != 0) {
        if (iVar7 != 1) goto LAB_140a09ee;
        do {
          FUN_140e5a38();
          iVar7 = FUN_140e5538(local_2d,2);
        } while (iVar7 == 0);
      }
      *(char *)((int)psVar3 + 1) = '\x02';
LAB_140a071e:
      uVar11 = FUN_140a047c();
      uVar8 = FUN_140a2edc(0,*piVar6 + 0x10,0xea4);
      iVar7 = *piVar6;
      *(undefined4 *)(iVar7 + 0xc) = uVar8;
      iVar7 = FUN_140a034c(iVar7);
      if (iVar7 == 0) {
LAB_140a0a1a:
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a0a7c,DAT_140a0a4c);
      }
      FUN_140e5278(uVar9,*piVar6,*DAT_140a0828);
      *psVar3 = 0x400;
      FUN_140a04dc(uVar11);
      bVar1 = *(byte *)((int)psVar3 + 1);
      uVar11 = DAT_140a0824;
      puVar2 = DAT_140a0828;
    }
    else if (bVar1 == 2) goto LAB_140a071e;
    DAT_140a0824 = uVar11;
    DAT_140a0828 = puVar2;
    if (bVar1 == 4) {
      while (iVar7 = FUN_140e50a8(1,uVar11,uVar9,*puVar2,1), iVar7 != 0) {
        if (iVar7 != 1) goto LAB_140a09a4;
        do {
          FUN_140e5a38();
          iVar7 = FUN_140e5538(local_2d,1);
        } while (iVar7 == 0);
      }
      *(char *)((int)psVar3 + 1) = '\x05';
    }
    do {
      FUN_140e5a38();
      iVar7 = FUN_140e5708(1,3);
    } while (iVar7 != 0);
    *(char *)((int)psVar3 + 1) = '\x06';
    iVar7 = FUN_140e5758(1,&local_2d);
    if (iVar7 == 0) goto LAB_140a06da;
    goto LAB_140a0686;
  }
  if (*psVar3 == 1) {
    FUN_1402a6e8(4,0x37d,DAT_140a0a58,DAT_140a0a54,DAT_140a0a50,DAT_140a0a4c);
  }
  bVar1 = *(byte *)((int)psVar3 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(char *)((int)psVar3 + 1) = '\x01';
    }
    iVar7 = FUN_140e53c8(1,DAT_140a0824,*DAT_140a0828);
    if (iVar7 == 0) {
      *(char *)((int)psVar3 + 1) = '\x02';
      uVar11 = 0;
      goto LAB_140a05d0;
    }
    if (iVar7 != 1) {
LAB_140a09ee:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a0a74,DAT_140a0a4c,iVar7,*DAT_140a0a68);
    }
  }
  else {
    if (bVar1 == 2) {
      uVar9 = FUN_140a047c();
      uVar11 = FUN_140a2edc(0,*piVar6 + 0x10,0xea4);
      iVar7 = *piVar6;
      *(undefined4 *)(iVar7 + 0xc) = uVar11;
      iVar7 = FUN_140a034c(iVar7);
      if (iVar7 == 0) goto LAB_140a0a1a;
      FUN_140e5278(LAB_140a0a60,*piVar6,*LAB_140a0a5c);
      *psVar3 = 0x400;
      uVar11 = 0;
      FUN_140a04dc(uVar9);
      goto LAB_140a05d0;
    }
    if (bVar1 != 4) {
      if (bVar1 != 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a0a78,DAT_140a0a4c);
      }
      iVar7 = FUN_140e5708(1,3);
      if (iVar7 == 0) {
        *(char *)((int)psVar3 + 1) = '\x06';
        uVar11 = 0;
      }
      else {
        FUN_140e5a38();
        uVar11 = 0;
      }
      goto LAB_140a05d0;
    }
    iVar7 = FUN_140e50a8(1,DAT_140a0a64,LAB_140a0a60,*LAB_140a0a5c,1);
    if (iVar7 == 0) {
      *(char *)((int)psVar3 + 1) = '\x05';
      uVar11 = 0;
      goto LAB_140a05d0;
    }
    if (iVar7 != 1) {
LAB_140a09a4:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a0a6c,DAT_140a0a4c,iVar7,*DAT_140a0a68);
    }
  }
  FUN_140e5a38();
  uVar11 = 1;
LAB_140a05d0:
  if (*DAT_140a0804 != 0) {
    FUN_140e52d8();
  }
  if (*DAT_140a0800 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar11;
code_r0x140a06c2:
  uVar10 = (uint)*(byte *)((int)psVar3 + 1);
  if (6 < uVar10 - 6) goto LAB_140a0568;
  iVar7 = FUN_140e5758(1,&local_2d);
  if (iVar7 != 0) {
LAB_140a0686:
    FUN_1402a6e8(4,0x436,DAT_140a081c,DAT_140a0818,DAT_140a0814,DAT_140a0810,iVar7);
    uVar11 = 1;
    goto LAB_140a064c;
  }
LAB_140a06da:
  puVar2 = LAB_140a0a5c;
  uVar10 = (uint)*(byte *)((int)psVar3 + 1);
  if (uVar10 - 6 < 2) {
    while (iVar7 = FUN_140e53c8(1,*piVar4,*puVar2), iVar7 != 0) {
      if (iVar7 != 1) goto LAB_140a0a32;
      do {
        FUN_140e5a38();
        iVar7 = FUN_140e5538(local_2d,2);
      } while (iVar7 == 0);
    }
LAB_140a0882:
    *(char *)((int)psVar3 + 1) = '\v';
    iVar7 = FUN_140e55c8(1,*(int *)(psVar3 + 2) + *piVar5,uVar9,*puVar2);
    if (iVar7 != 0) {
LAB_140a0a22:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a0a80,iVar7,*(int *)(psVar3 + 2) + *piVar5);
    }
    *(char *)((int)psVar3 + 1) = '\n';
LAB_140a08a6:
    while (iVar7 = FUN_140e50a8(1,*piVar4 + *(int *)(psVar3 + 2),uVar9,*puVar2,1), iVar7 != 0) {
      if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a0a6c,DAT_140a0a70,iVar7,*piVar4 + *(int *)(psVar3 + 2));
      }
      do {
        FUN_140e5a38();
        iVar7 = FUN_140e5538(local_2d,1);
      } while (iVar7 == 0);
    }
    *(char *)((int)psVar3 + 1) = '\v';
  }
  else {
    if ((uVar10 == 8) || (uVar10 == 0xb)) goto LAB_140a0882;
    if (uVar10 == 10) goto LAB_140a08a6;
  }
  do {
    FUN_140e5a38();
    iVar7 = FUN_140e5708(1,3);
  } while (iVar7 != 0);
LAB_140a0646:
  uVar11 = 0;
LAB_140a0648:
  *(char *)((int)psVar3 + 1) = '\0';
LAB_140a064c:
  if (param_1 != 0) goto LAB_140a05d0;
  uVar10 = (uint)*(byte *)((int)psVar3 + 1);
  goto LAB_140a0568;
}

