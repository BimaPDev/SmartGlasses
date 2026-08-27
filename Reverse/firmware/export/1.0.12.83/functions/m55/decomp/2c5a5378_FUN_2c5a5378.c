/* FUN_2c5a5378 @ 0x2c5a5378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a5378(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint in_fpscr;
  double dVar17;
  double dVar18;
  uint uStack_60;
  uint *puStack_5c;
  uint uStack_58;
  uint auStack_54 [4];
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5a5628;
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5a562c,param_3,0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) != 0x10)) {
    if (*_LAB_2c5a5628 == iStack_2c) {
      return;
    }
    goto LAB_2c5a5918;
  }
  piVar2 = (int *)FUN_2c48e3b8(*(undefined4 *)(iVar1 + 0x10));
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5a594c,0x1ce,_LAB_2c5a5948,_LAB_2c5a5944);
  }
  FUN_2c48e424(piVar2,_LAB_2c5a5630);
  iVar1 = FUN_2c48e424(piVar2,_LAB_2c5a5634);
  iVar3 = FUN_2c48e424(piVar2,_LAB_2c5a5638);
  iVar4 = FUN_2c48e424(piVar2,_LAB_2c5a563c);
  iVar5 = FUN_2c48e424(piVar2,_LAB_2c5a5640);
  iVar6 = FUN_2c48e424(piVar2,_LAB_2c5a5644);
  iVar7 = FUN_2c48e424(piVar2,_LAB_2c5a5648);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == 0x10)) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar13 = FUN_2c6684cc();
    func_0x2c5a736c(_LAB_2c5a5654,uVar13);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 8)) {
    func_0x2c5a7370(_LAB_2c5a5940,*(undefined4 *)(iVar3 + 0x14));
    FUN_2c5a2398();
    iVar1 = func_0x2c5a25f0();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar13 = func_0x2c5a25f0();
      func_0x2c5a9454(uVar13,*(undefined4 *)(iVar3 + 0x14));
    }
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == 8)) {
    func_0x2c5a7374(_LAB_2c5a5940,*(undefined4 *)(iVar4 + 0x14));
    FUN_2c5a2398();
    iVar1 = func_0x2c5a25f0();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar13 = func_0x2c5a25f0();
      func_0x2c5a9488(uVar13,*(undefined4 *)(iVar4 + 0x14));
    }
    FUN_2c5a2398();
    iVar1 = FUN_2c5a25f4();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      iVar1 = FUN_2c5a27bc();
      if (((iVar1 != 0) && (iVar1 = *(int *)(iVar3 + 0x14), -1 < iVar1)) &&
         (iVar3 = *(int *)(iVar4 + 0x14), 0 < iVar3)) {
        FUN_2c5a2398();
        uVar13 = FUN_2c5a25f4();
        dVar18 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
        uVar9 = VectorFloatToSigned((dVar18 / dVar17) * dRam2c5a5938,3);
        func_0x2c5aaa08(uVar13,uVar9);
      }
    }
  }
  piVar12 = _DAT_2c5a5658;
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0xc) == 8)) && (*(int *)(iVar6 + 0x14) != *_DAT_2c5a5658))
  {
    *_DAT_2c5a5658 = *(int *)(iVar6 + 0x14);
    FUN_2c5a2398();
    iVar1 = func_0x2c5a25f0();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar13 = func_0x2c5a25f0();
      func_0x2c5a9778(uVar13,*piVar12);
    }
    FUN_2c5a2398();
    iVar1 = FUN_2c5a27bc();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      iVar1 = FUN_2c5a25f4();
      if (iVar1 != 0) {
        if (*piVar12 == 3) {
          uVar13 = 1;
        }
        else {
          uVar13 = 2;
        }
        FUN_2c5a2398();
        uVar9 = FUN_2c5a25f4();
        FUN_2c5aaa34(uVar9,uVar13);
      }
    }
  }
  if (iVar7 != 0) {
    iVar1 = FUN_2c48e424(iVar7,_LAB_2c5a564c);
    iVar3 = FUN_2c48e424(iVar7,_LAB_2c5a5650);
    uStack_58 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    uVar13 = 0;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 8) {
        uVar13 = *(undefined4 *)(iVar1 + 0x14);
      }
      else {
        uVar13 = 0;
      }
    }
    puStack_5c = auStack_54;
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 0x10)) && (*(int *)(iVar3 + 0x10) != 0)) {
      func_0x2c5a72d0();
      puVar15 = *(uint **)(iVar3 + 0x10);
      uVar8 = FUN_2c66c4ec(puVar15);
      puVar10 = puStack_5c;
      if (puStack_5c == auStack_54) {
        if (uVar8 < 0x10) goto LAB_2c5a54a6;
        uStack_60 = uVar8;
        puVar10 = (uint *)FUN_2c5a49fc(&uStack_60,0xf);
LAB_2c5a58d0:
        puVar10 = (uint *)FUN_2c674668(puVar10,puVar15,uVar8);
LAB_2c5a58a6:
        if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        auStack_54[0] = uStack_60;
        puStack_5c = puVar10;
      }
      else {
        if (auStack_54[0] < uVar8) {
          uStack_60 = uVar8;
          puVar10 = (uint *)FUN_2c5a49fc(&uStack_60);
          if (uVar8 != 0) {
            if (uVar8 != 1) goto LAB_2c5a58d0;
            *(char *)puVar10 = (char)*puVar15;
          }
          goto LAB_2c5a58a6;
        }
LAB_2c5a54a6:
        if ((puVar15 < puStack_5c) ||
           (puVar11 = (uint *)((int)puStack_5c + uStack_58), puVar11 < puVar15)) {
          if (uVar8 != 0) {
            if (uVar8 == 1) {
LAB_2c5a58fc:
              *(char *)puStack_5c = (char)*puVar15;
            }
            else {
              FUN_2c674668(puStack_5c,puVar15,uVar8);
            }
          }
        }
        else if (uVar8 != 0) {
          if (uStack_58 < uVar8) {
            if ((uint *)((int)puVar15 + uVar8) <= puVar11) {
              if (uVar8 == 1) goto LAB_2c5a58fc;
              goto LAB_2c5a54ca;
            }
            if (puVar15 < puVar11) {
              uVar16 = (int)puVar11 - (int)puVar15;
              if (uVar16 == 1) {
                *(char *)puStack_5c = (char)*puVar15;
              }
              else if (uVar16 != 0) {
                FUN_2c673eb8(puStack_5c,puVar15,uVar16);
              }
              if (uVar8 - uVar16 == 1) {
                *(undefined1 *)((int)puVar10 + uVar16) = *(undefined1 *)((int)puVar10 + uVar8);
              }
              else if (uVar8 != uVar16) {
                FUN_2c674668((undefined1 *)((int)puVar10 + uVar16),
                             (undefined1 *)((int)puVar10 + uVar8));
              }
            }
            else if (uVar8 == 1) {
              *(undefined1 *)puStack_5c = *(undefined1 *)((int)puVar15 + (uVar8 - uStack_58));
            }
            else {
              FUN_2c674668(puStack_5c,(undefined1 *)((int)puVar15 + (uVar8 - uStack_58)),uVar8);
            }
          }
          else if (uVar8 == 1) {
            *(char *)puStack_5c = (char)*puVar15;
          }
          else {
LAB_2c5a54ca:
            FUN_2c673eb8(puStack_5c,puVar15,uVar8);
          }
        }
      }
      puVar10 = puStack_5c;
      *(undefined1 *)((int)puStack_5c + uVar8) = 0;
      uStack_58 = uVar8;
      if (uVar8 != 0) {
        puStack_44 = auStack_3c;
        if (puStack_5c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c658674(_LAB_2c5a59b8);
        }
        if (uVar8 < 0x10) {
          uStack_60 = uVar8;
          if (uVar8 != 1) goto LAB_2c5a5800;
          auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,(char)*puStack_5c);
        }
        else {
          uStack_60 = uVar8;
          puStack_44 = (uint *)FUN_2c5a49fc(&uStack_60);
          auStack_3c[0] = uStack_60;
LAB_2c5a5800:
          FUN_2c674668(puStack_44,puVar10,uVar8);
        }
        *(undefined1 *)((int)puStack_44 + uStack_60) = 0;
        uStack_40 = uStack_60;
        func_0x2c5a7380(_LAB_2c5a5654,uVar13,&puStack_44);
        if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        FUN_2c5a2398();
        iVar1 = func_0x2c5a25f0();
        if (iVar1 != 0) {
          FUN_2c5a2398();
          uVar13 = func_0x2c5a25f0();
          func_0x2c5a93bc(uVar13,puStack_5c);
        }
        uVar13 = FUN_2c5a2398();
        FUN_2c5a2800(uVar13,1);
        uVar13 = FUN_2c5a2398();
        FUN_2c5a2830(uVar13,0);
        FUN_2c5a2398();
        iVar1 = FUN_2c5a27bc();
        if (iVar1 != 0) {
          FUN_2c5a2398();
          iVar1 = FUN_2c5a25f4();
          if (iVar1 == 0) {
            FUN_2c5c55d8();
            uVar13 = FUN_2c5c5b3c();
            iVar1 = FUN_2c66b624(uVar13,_LAB_2c5a5950);
            if ((iVar1 == 0) && (*_DAT_2c5a5954 == 3)) {
              FUN_2c5a2398();
              FUN_2c5a25f8();
            }
          }
        }
        FUN_2c5a2398();
        iVar1 = FUN_2c5a25f4();
        if (iVar1 != 0) {
          FUN_2c5a2398();
          iVar1 = FUN_2c5a27bc();
          if (iVar1 != 0) {
            FUN_2c5a2398();
            uVar13 = FUN_2c5a25f4();
            FUN_2c5aa904(uVar13,puStack_5c);
          }
        }
      }
      if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    }
  }
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0xc) == 0x10)) &&
     (puVar14 = *(undefined1 **)(iVar5 + 0x10), puVar14 != (undefined1 *)0x0)) {
    puStack_44 = auStack_3c;
    uVar8 = FUN_2c66c4ec(puVar14);
    uStack_60 = uVar8;
    if (uVar8 < 0x10) {
      puVar10 = auStack_3c;
      if (uVar8 == 1) {
        auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar14);
      }
      else if (uVar8 != 0) goto LAB_2c5a5864;
    }
    else {
      puStack_44 = (uint *)FUN_2c5a49fc(&uStack_60,0);
      auStack_3c[0] = uStack_60;
      puVar10 = puStack_44;
LAB_2c5a5864:
      FUN_2c674668(puVar10,puVar14,uVar8);
      puVar10 = puStack_44;
    }
    *(undefined1 *)((int)puVar10 + uStack_60) = 0;
    uStack_40 = uStack_60;
    func_0x2c5a73b0(_LAB_2c5a5940,&puStack_44);
    if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    FUN_2c5a2398();
    iVar1 = func_0x2c5a25f0();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar13 = func_0x2c5a25f0();
      func_0x2c5a93cc(uVar13,*(undefined4 *)(iVar5 + 0x10));
    }
    uVar13 = FUN_2c5a2398();
    FUN_2c5a2800(uVar13,1);
    uVar13 = FUN_2c5a2398();
    FUN_2c5a2830(uVar13,0);
    FUN_2c5a2398();
    iVar1 = FUN_2c5a27bc();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      iVar1 = FUN_2c5a25f4();
      if (iVar1 == 0) {
        FUN_2c5c55d8();
        uVar13 = FUN_2c5c5b3c();
        iVar1 = FUN_2c66b624(uVar13,_LAB_2c5a5950);
        if ((iVar1 == 0) && (*_DAT_2c5a5954 == 3)) {
          FUN_2c5a2398();
          FUN_2c5a25f8();
        }
      }
    }
    FUN_2c5a2398();
    iVar1 = FUN_2c5a25f4();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      iVar1 = FUN_2c5a27bc();
      if (iVar1 != 0) {
        FUN_2c5a2398();
        uVar13 = FUN_2c5a25f4();
        FUN_2c5aa9bc(uVar13,*(undefined4 *)(iVar5 + 0x10));
      }
    }
  }
  iVar1 = DAT_2c48deec;
  if (*_LAB_2c5a5628 == iStack_2c) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    do {
      piVar12 = (int *)*piVar2;
      iVar3 = piVar2[3];
      if (-1 < iVar3 << 0x17) {
        if (piVar2[2] != 0) {
          FUN_2c48dea0();
          iVar3 = piVar2[3];
          if (iVar3 << 0x17 < 0) goto LAB_2c48dece;
        }
        if (piVar2[4] != 0) {
          (**(code **)(iVar1 + 4))();
          iVar3 = piVar2[3];
        }
      }
LAB_2c48dece:
      if ((-1 < iVar3 << 0x16) && (piVar2[8] != 0)) {
        (**(code **)(iVar1 + 4))();
      }
      (**(code **)(iVar1 + 4))(piVar2);
      piVar2 = piVar12;
      if (piVar12 == (int *)0x0) {
        return;
      }
    } while( true );
  }
LAB_2c5a5918:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

