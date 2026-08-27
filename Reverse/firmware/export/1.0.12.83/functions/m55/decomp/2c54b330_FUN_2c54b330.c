/* FUN_2c54b330 @ 0x2c54b330 */

void FUN_2c54b330(int param_1,undefined4 *****param_2)

{
  undefined4 **ppuVar1;
  undefined1 *puVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 local_b4 [4];
  undefined4 **local_b0;
  undefined4 ****local_ac;
  undefined4 **local_a8;
  undefined4 ****local_a4;
  undefined4 **local_a0;
  undefined1 local_9c [8];
  undefined1 **local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined4 **local_88;
  undefined1 local_84 [8];
  undefined1 *local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  uint local_34;
  
  local_34 = *DAT_2c54b57c;
  pppppuVar9 = param_2;
  if (param_1 != 0) {
    uVar14 = FUN_2c54ee98(param_1,DAT_2c54b580,local_b4,1);
    pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
    if (-1 < (int)uVar14) {
      *(undefined1 *)(param_2 + 1) = local_b4[0];
      uVar14 = FUN_2c54ee24(param_1,DAT_2c54b584,(undefined1 *)((int)param_2 + 5),1);
      pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
      if (-1 < (int)uVar14) {
        uVar14 = FUN_2c54f0ec(param_1,DAT_2c54b588,param_2 + 8,1);
        pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
        if (-1 < (int)uVar14) {
          uVar14 = FUN_2c54f0ec(param_1,DAT_2c54b58c,param_2 + 0xe,1);
          pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
          if (-1 < (int)uVar14) {
            uVar14 = FUN_2c54f0ec(param_1,DAT_2c54b590,param_2 + 0x14,1);
            pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
            if (-1 < (int)uVar14) {
              iVar4 = FUN_2c48e434(param_1,DAT_2c54b594);
              if (iVar4 != 0) {
                uVar5 = FUN_2c48e42c(param_1,DAT_2c54b594);
                uVar14 = FUN_2c48e85c();
                pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
                if ((int)uVar14 == 0) goto LAB_2c54b52c;
                iVar4 = FUN_2c48e3f0(uVar5);
                if (0 < iVar4) {
                  ppppuVar12 = param_2[2];
                  ppppuVar11 = param_2[3];
                  ppppuVar8 = ppppuVar12;
                  if (ppppuVar12 != ppppuVar11) {
                    do {
                      ppppuVar10 = ppppuVar8 + 0xf;
                      (*(code *)(*ppppuVar8)[1])(ppppuVar8);
                      ppppuVar8 = ppppuVar10;
                    } while (ppppuVar11 != ppppuVar10);
                    param_2[3] = ppppuVar12;
                  }
                  pppuVar13 = DAT_2c54b59c;
                  iVar7 = 0;
                  do {
                    uVar14 = FUN_2c48e408(uVar5,iVar7);
                    pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
                    if ((int)uVar14 == 0) goto LAB_2c54b52c;
                    local_b0 = pppuVar13;
                    local_a0 = (undefined4 ***)0x0;
                    local_9c[0] = 0;
                    local_88 = (undefined4 ***)0x0;
                    local_84[0] = 0;
                    local_a4 = (undefined4 ****)local_9c;
                    local_8c = local_84;
                    iVar6 = FUN_2c54a5cc((int)uVar14,&local_b0);
                    ppuVar1 = local_a0;
                    ppppuVar8 = local_a4;
                    if (iVar6 != 0) {
                      local_b0 = pppuVar13;
                      if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      pppppuVar9 = (undefined4 *****)local_a4;
                      if (local_a4 == (undefined4 ****)local_9c) goto LAB_2c54b52c;
                      goto LAB_2c54b526;
                    }
                    ppppuVar11 = param_2[3];
                    if (ppppuVar11 == param_2[4]) {
                      FUN_2c54a8e8(param_2 + 2,ppppuVar11,&local_b0);
                    }
                    else {
                      *ppppuVar11 = pppuVar13;
                      ppppuVar12 = ppppuVar11 + 5;
                      ppppuVar11[1] = local_ac;
                      ppppuVar11[2] = (undefined4 ***)local_a8;
                      ppppuVar11[3] = ppppuVar12;
                      if (((undefined1 *)((int)local_a4 + (int)local_a0) != (undefined1 *)0x0) &&
                         ((undefined4 *****)local_a4 == (undefined4 *****)0x0)) goto LAB_2c54b730;
                      if (local_a0 < (undefined4 ***)0x10) {
                        if ((undefined4 ***)local_a0 == (undefined4 ***)0x1) {
                          *(undefined1 *)(ppppuVar11 + 5) = *(undefined1 *)local_a4;
                        }
                        else if ((undefined4 ***)local_a0 != (undefined4 ***)0x0) goto LAB_2c54b6b2;
                      }
                      else {
                        if ((int)local_a0 < 0) goto LAB_2c54b72a;
                        iVar6 = (int)local_a0 + 1;
                        if (*DAT_2c54b740 == 0) {
                          FUN_2c4723c4();
                          *DAT_2c54b740 = 1;
                        }
                        ppppuVar12 = (undefined4 ****)FUN_2c47245c(0,iVar6);
                        ppppuVar11[5] = (undefined4 ***)ppuVar1;
                        ppppuVar11[3] = ppppuVar12;
LAB_2c54b6b2:
                        FUN_2c674668(ppppuVar12,ppppuVar8,ppuVar1);
                        ppppuVar12 = (undefined4 ****)ppppuVar11[3];
                      }
                      ppuVar3 = local_88;
                      puVar2 = local_8c;
                      ppppuVar11[4] = (undefined4 ***)ppuVar1;
                      *(undefined1 *)((int)ppppuVar12 + (int)ppuVar1) = 0;
                      ppppuVar8 = ppppuVar11 + 0xb;
                      ppppuVar11[9] = ppppuVar8;
                      if ((local_8c + (int)local_88 != (undefined1 *)0x0) &&
                         (local_8c == (undefined1 *)0x0)) {
LAB_2c54b730:
                    /* WARNING: Subroutine does not return */
                        FUN_2c658674(DAT_2c54b748);
                      }
                      if (local_88 < (undefined4 ***)0x10) {
                        if ((undefined4 ***)local_88 == (undefined4 ***)0x1) {
                          *(undefined1 *)(ppppuVar11 + 0xb) = *local_8c;
                        }
                        else if ((undefined4 ***)local_88 != (undefined4 ***)0x0) goto LAB_2c54b68c;
                      }
                      else {
                        if ((int)local_88 < 0) {
LAB_2c54b72a:
                    /* WARNING: Subroutine does not return */
                          FUN_2c658680(DAT_2c54b744);
                        }
                        iVar6 = (int)local_88 + 1;
                        if (*DAT_2c54b740 == 0) {
                          FUN_2c4723c4();
                          *DAT_2c54b740 = 1;
                        }
                        ppppuVar8 = (undefined4 ****)FUN_2c47245c(0,iVar6);
                        ppppuVar11[0xb] = (undefined4 ***)ppuVar3;
                        ppppuVar11[9] = ppppuVar8;
LAB_2c54b68c:
                        FUN_2c674668(ppppuVar8,puVar2,ppuVar3);
                        ppppuVar8 = (undefined4 ****)ppppuVar11[9];
                      }
                      ppppuVar11[10] = (undefined4 ***)ppuVar3;
                      *(undefined1 *)((int)ppppuVar8 + (int)ppuVar3) = 0;
                      param_2[3] = param_2[3] + 0xf;
                    }
                    local_b0 = pppuVar13;
                    if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    if (local_a4 != (undefined4 ****)local_9c) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar4 != iVar7);
                }
              }
              uVar14 = FUN_2c48e434(param_1,DAT_2c54b598);
              pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
              if ((int)uVar14 != 0) {
                uVar5 = FUN_2c48e42c(param_1,DAT_2c54b598);
                uVar14 = FUN_2c48e85c();
                pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
                if ((int)uVar14 == 0) goto LAB_2c54b52c;
                uVar14 = FUN_2c48e3f0(uVar5);
                pppppuVar9 = (undefined4 *****)((ulonglong)uVar14 >> 0x20);
                if (0 < (int)uVar14) {
                  ppppuVar12 = param_2[5];
                  ppppuVar11 = param_2[6];
                  ppppuVar8 = ppppuVar12;
                  if (ppppuVar12 != ppppuVar11) {
                    do {
                      ppppuVar10 = ppppuVar8 + 0x1f;
                      (*(code *)(*ppppuVar8)[1])(ppppuVar8);
                      ppppuVar8 = ppppuVar10;
                    } while (ppppuVar11 != ppppuVar10);
                    param_2[6] = ppppuVar12;
                  }
                  iVar4 = 0;
                  do {
                    uVar15 = FUN_2c48e408(uVar5,iVar4);
                    pppppuVar9 = (undefined4 *****)((ulonglong)uVar15 >> 0x20);
                    if ((int)uVar15 == 0) goto LAB_2c54b52c;
                    local_b0 = DAT_2c54b73c;
                    local_a8 = (undefined4 ***)0x0;
                    local_a4 = (undefined4 ****)((uint)local_a4 & 0xffffff00);
                    local_90 = 0;
                    local_8c = (undefined1 *)((uint)local_8c & 0xffffff00);
                    local_78 = 0;
                    local_74[0] = 0;
                    local_60 = 0;
                    local_5c[0] = 0;
                    local_48 = 0;
                    local_44[0] = 0;
                    local_ac = &local_a4;
                    local_94 = &local_8c;
                    local_7c = local_74;
                    local_64 = local_5c;
                    local_4c = local_44;
                    iVar7 = FUN_2c54a634((int)uVar15,&local_b0);
                    if (iVar7 != 0) {
                      local_b0 = DAT_2c54b73c;
                      if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      if (local_64 != local_5c) {
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      if (local_7c != local_74) {
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      if (local_94 != &local_8c) {
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      pppppuVar9 = (undefined4 *****)local_ac;
                      if ((undefined4 *****)local_ac != &local_a4) {
LAB_2c54b526:
                    /* WARNING: Subroutine does not return */
                        FUN_2c472680(0);
                      }
                      goto LAB_2c54b52c;
                    }
                    ppppuVar8 = param_2[6];
                    if (ppppuVar8 == param_2[7]) {
                      FUN_2c54ac88(param_2 + 5,ppppuVar8,&local_b0);
                    }
                    else {
                      FUN_2c54a6b4(ppppuVar8,&local_b0);
                      param_2[6] = param_2[6] + 0x1f;
                    }
                    local_b0 = DAT_2c54b73c;
                    if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    if (local_64 != local_5c) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    if (local_7c != local_74) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    if (local_94 != &local_8c) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    if ((undefined4 *****)local_ac != &local_a4) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    iVar4 = iVar4 + 1;
                    pppppuVar9 = (undefined4 *****)local_ac;
                  } while ((int)uVar14 != iVar4);
                }
              }
              uVar5 = 0;
              goto LAB_2c54b3ca;
            }
          }
        }
      }
    }
  }
LAB_2c54b52c:
  uVar5 = 0xffffffff;
LAB_2c54b3ca:
  if ((*DAT_2c54b57c ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar5,pppppuVar9,*DAT_2c54b57c ^ local_34,0);
  }
  return;
}

