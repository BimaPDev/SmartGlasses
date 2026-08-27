/* FUN_2c601b74 @ 0x2c601b74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c601b74(int param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  ushort uVar11;
  char cVar12;
  char *pcVar13;
  uint uVar14;
  code *pcVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uStack_60;
  int *piStack_4c;
  uint uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  short sStack_32;
  undefined2 uStack_30;
  short sStack_2e;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c601e0c;
  FUN_2c673c88();
  uVar5 = FUN_2c6741d8();
  piVar16 = _LAB_2c6020d4;
  piVar10 = _LAB_2c601e14;
  if (param_1 == 0) {
    iVar6 = FUN_2c62a470();
    *piVar16 = iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    cVar12 = *_LAB_2c601e10;
    *_LAB_2c601e14 = iVar6;
    piVar16 = piVar10;
    if (cVar12 == '\0') {
      FUN_2c62be40(param_1);
      iVar6 = *piVar10;
    }
  }
  FUN_2c608c7c(*(undefined4 *)(iVar6 + 0x10));
  iVar6 = *piVar16;
  if (*(int *)(iVar6 + 0x14) != 0) {
    FUN_2c608c7c();
    iVar6 = *piVar16;
  }
  FUN_2c608c7c(*(undefined4 *)(iVar6 + 0x1c));
  FUN_2c608c7c(*(undefined4 *)(*piVar16 + 0x20));
  FUN_2c608c7c(*(undefined4 *)(*piVar16 + 0x24));
  piVar10 = (int *)*piVar16;
  if (piVar10[4] == 0) {
    *(undefined2 *)(piVar10 + 0x56) = 0;
  }
  else {
    uStack_48 = (uint)*(ushort *)(piVar10 + 0x56);
    if (uStack_48 == 0) {
      *_LAB_2c6020d8 = 0;
    }
    else {
      uVar20 = 0;
      do {
        if (*(char *)((int)piVar10 + uVar20 + 0x138) == '\0') {
          if (uStack_48 == 0) {
            piStack_4c = _LAB_2c6020d8;
            *_LAB_2c6020d8 = 0;
            goto LAB_2c601f2a;
          }
          iVar6 = uVar20 * 8;
          uVar18 = 0;
          do {
            if ((*(char *)((int)piVar10 + uVar18 + 0x138) == '\0') && (uVar18 != uVar20)) {
              iVar17 = func_0x2c62a95c(piVar10 + uVar20 * 2 + 0xe,piVar10 + uVar18 * 2 + 0xe);
              piVar10 = (int *)*piVar16;
              if (iVar17 != 0) {
                func_0x2c62a70c(&uStack_34,piVar10 + uVar20 * 2 + 0xe,piVar10 + uVar18 * 2 + 0xe);
                uVar14 = FUN_2c62a64c(&uStack_34);
                iVar17 = FUN_2c62a64c(*piVar16 + iVar6 + 0x38);
                iVar7 = FUN_2c62a64c(*piVar16 + uVar18 * 8 + 0x38);
                piVar10 = (int *)*piVar16;
                if (uVar14 < (uint)(iVar17 + iVar7)) {
                  *(undefined2 *)(piVar10 + uVar20 * 2 + 0xe) = uStack_34;
                  *(short *)((int)piVar10 + iVar6 + 0x3a) = sStack_32;
                  *(undefined2 *)(piVar10 + uVar20 * 2 + 0xf) = uStack_30;
                  *(short *)((int)piVar10 + iVar6 + 0x3e) = sStack_2e;
                  *(undefined1 *)((int)piVar10 + uVar18 + 0x138) = 1;
                }
              }
            }
            else {
              piVar10 = (int *)*piVar16;
            }
            uVar18 = uVar18 + 1;
            uStack_48 = (uint)*(ushort *)(piVar10 + 0x56);
          } while (uVar18 < uStack_48);
        }
        piVar2 = _LAB_2c601e18;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uStack_48);
      piStack_4c = _LAB_2c601e18;
      *_LAB_2c601e18 = 0;
      if (uStack_48 != 0) {
        pcVar13 = (char *)((int)piVar10 + uStack_48 + 0x138);
        do {
          uStack_48 = uStack_48 - 1;
          pcVar13 = pcVar13 + -1;
          if (*pcVar13 == '\0') goto LAB_2c601cba;
        } while (uStack_48 != 0);
        uStack_48 = 0;
LAB_2c601cba:
        if (*(code **)(*piVar10 + 0x34) != (code *)0x0) {
          (**(code **)(*piVar10 + 0x34))();
        }
        piVar10 = (int *)*piVar16;
        *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) =
             *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) & 0xfe;
        *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) =
             *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) & 0xfd;
        *(byte *)(piVar10 + 0xb) = *(byte *)(piVar10 + 0xb) | 4;
        uStack_3c = 0;
        uStack_38 = 0;
        if ((short)piVar10[0x56] != 0) {
          cVar12 = '\0';
          uStack_60 = 0;
          do {
            if (*(char *)((int)piVar10 + uStack_60 + 0x138) == '\0') {
              if (uStack_48 == uStack_60) {
                *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) =
                     *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) | 1;
              }
              iVar6 = uStack_60 * 8;
              *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) =
                   *(byte *)(*(int *)(*piVar10 + 0xc) + 0x18) & 0xfd;
              puVar19 = *(undefined4 **)(*piVar10 + 0x3c);
              *puVar19 = *(undefined4 *)(*(int *)(*piVar10 + 0xc) + 8);
              if ((*(byte *)(*piVar10 + 0x10) & 3) == 0) {
                iVar17 = piVar10[uStack_60 * 2 + 0xf];
                sVar4 = *(short *)((int)piVar10 + iVar6 + 0x3e);
                iVar7 = piVar10[uStack_60 * 2 + 0xe];
                sVar3 = *(short *)((int)piVar10 + iVar6 + 0x3a);
                iVar8 = FUN_2c62a4a0(piVar10);
                uVar20 = (uint)(short)((sVar4 + 1) - sVar3);
                if (sVar4 < iVar8) {
                  sVar3 = *(short *)((int)piVar10 + iVar6 + 0x3e);
                }
                else {
                  sVar3 = FUN_2c62a4a0(*piVar16);
                  sVar3 = sVar3 + -1;
                }
                iVar8 = (int)sVar3;
                piVar9 = (int *)*piVar16;
                uVar18 = *(uint *)(*(int *)(*piVar9 + 0xc) + 0xc) /
                         (uint)(int)(short)(((short)iVar17 + 1) - (short)iVar7);
                if ((int)uVar18 <= (int)uVar20) {
                  uVar20 = uVar18;
                }
                uVar18 = uVar20;
                if (*(int *)(*piVar9 + 0x18) == 0) {
LAB_2c601dea:
                  sVar4 = *(short *)((int)piVar10 + iVar6 + 0x3a);
                  uVar20 = (uint)sVar4;
                  uVar11 = (ushort)uVar18;
                  uVar14 = uVar20 + uVar18;
                }
                else {
                  uStack_34 = 0;
                  uStack_30 = 0;
                  sStack_32 = 0;
                  sVar4 = (short)uVar20;
                  while( true ) {
                    sVar1 = sVar4 + -1;
                    sStack_2e = sVar1;
                    (**(code **)(*piVar9 + 0x18))(*piVar9,&uStack_34);
                    uVar18 = (int)sStack_2e + 1;
                    if ((int)(short)((short)uVar18 - sStack_32) <= (int)uVar20) break;
                    if (sVar1 < 1) goto LAB_2c602058;
                    piVar9 = (int *)*piVar16;
                    sVar4 = sVar1;
                  }
                  if (0 < sVar4) {
                    piVar9 = (int *)*piVar16;
                    goto LAB_2c601dea;
                  }
LAB_2c602058:
                  uVar18 = 0;
                  sVar4 = *(short *)((int)piVar10 + iVar6 + 0x3a);
                  uVar20 = (uint)sVar4;
                  piVar9 = (int *)*piVar16;
                  uVar11 = 0;
                  uVar14 = uVar20;
                }
                if (iVar8 < (int)(uVar14 - 1)) {
                  iVar17 = 0;
                }
                else {
                  while( true ) {
                    uVar14 = uVar11 + uVar20;
                    uVar20 = uVar14 & 0xffff;
                    uStack_34 = (undefined2)piVar10[uStack_60 * 2 + 0xe];
                    sVar4 = (short)uVar14;
                    sStack_32 = sVar4 - uVar11;
                    uStack_30 = (undefined2)piVar10[uStack_60 * 2 + 0xf];
                    sVar1 = sVar4 + -1;
                    puVar19[1] = &uStack_34;
                    puVar19[2] = &uStack_34;
                    *puVar19 = *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 8);
                    iVar17 = (int)sVar1;
                    sStack_2e = sVar3;
                    if ((iVar8 < iVar17) || (sStack_2e = sVar1, iVar17 == iVar8)) {
                      *(byte *)(*(int *)(*piVar9 + 0xc) + 0x18) =
                           *(byte *)(*(int *)(*piVar9 + 0xc) + 0x18) | 2;
                      iVar17 = iVar8;
                    }
                    FUN_2c601798(puVar19);
                    if (iVar8 < (int)((int)sVar4 + uVar18 + -1)) break;
                    piVar9 = (int *)*piVar16;
                  }
                  piVar9 = (int *)*piVar16;
                }
                if (iVar8 != iVar17) {
                  uStack_34 = (undefined2)piVar10[uStack_60 * 2 + 0xe];
                  uStack_30 = (undefined2)piVar10[uStack_60 * 2 + 0xf];
                  puVar19[1] = &uStack_34;
                  puVar19[2] = &uStack_34;
                  *puVar19 = *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 8);
                  *(byte *)(*(int *)(*piVar9 + 0xc) + 0x18) =
                       *(byte *)(*(int *)(*piVar9 + 0xc) + 0x18) | 2;
                  sStack_32 = sVar4;
                  sStack_2e = sVar3;
                  FUN_2c601798(puVar19);
                  goto LAB_2c601ec0;
                }
              }
              else {
                sVar3 = FUN_2c62a47c(piVar10);
                sVar4 = FUN_2c62a4a0(*piVar16);
                FUN_2c62a624(&uStack_34,0,0,(int)(short)(sVar3 + -1),(int)(short)(sVar4 + -1));
                piVar9 = (int *)*piVar16;
                puVar19[1] = &uStack_34;
                iVar17 = *(int *)(*piVar9 + 0xc);
                if ((*(byte *)(*piVar9 + 0x10) & 2) == 0) {
                  *(byte *)(iVar17 + 0x18) =
                       *(byte *)(iVar17 + 0x18) & 0xfd | (byte)((*(uint *)(iVar17 + 0x18) & 1) << 1)
                  ;
                  puVar19[2] = piVar10 + uStack_60 * 2 + 0xe;
                  FUN_2c601798(puVar19);
                }
                else {
                  *(byte *)(iVar17 + 0x18) = *(byte *)(iVar17 + 0x18) | 2;
                  puVar19[2] = &uStack_34;
                  FUN_2c601798(puVar19);
                }
LAB_2c601ec0:
                piVar9 = (int *)*piVar16;
              }
              iVar17 = FUN_2c62a64c(piVar9 + uStack_60 * 2 + 0xe);
              *piVar2 = iVar17 + *piVar2;
              if (cVar12 == '\0') {
                uStack_3c = *(undefined4 *)(*piVar16 + iVar6 + 0x38);
                uStack_38 = *(undefined4 *)(*piVar16 + iVar6 + 0x3c);
              }
              else {
                func_0x2c62a70c(&uStack_3c,&uStack_3c,*piVar16 + iVar6 + 0x38);
              }
              cVar12 = cVar12 + '\x01';
            }
            piVar10 = (int *)*piVar16;
            uStack_60 = uStack_60 + 1;
          } while ((int)uStack_60 < (int)(uint)*(ushort *)(piVar10 + 0x56));
        }
        *(byte *)(piVar10 + 0xb) = *(byte *)(piVar10 + 0xb) & 0xfb;
        (**(code **)(*piVar10 + 0x14))(*piVar10,&uStack_3c,0);
      }
LAB_2c601f2a:
      piVar10 = (int *)*piVar16;
      if ((short)piVar10[0x56] != 0) {
        if ((int)((uint)*(byte *)(*piVar10 + 0x10) << 0x1e) < 0) {
          sVar3 = FUN_2c62a47c();
          sVar4 = FUN_2c62a4a0(*piVar16);
          FUN_2c62a624(&uStack_34,0,0,(int)(short)(sVar3 + -1),(int)(short)(sVar4 + -1));
          *(undefined2 **)(*(int *)(*(int *)*piVar16 + 0x3c) + 4) = &uStack_34;
          func_0x2c600cd0();
          piVar10 = (int *)*piVar16;
        }
        FUN_2c62c3b0(piVar10 + 0xe,0x100);
        FUN_2c62c3b0(*piVar16 + 0x138,0x20);
        *(undefined2 *)(*piVar16 + 0x158) = 0;
        uVar5 = FUN_2c629e10(uVar5);
        pcVar15 = *(code **)(*(int *)*piVar16 + 0x24);
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(*(int *)*piVar16,uVar5,*piStack_4c);
        }
      }
    }
    func_0x2c62c090();
    func_0x2c629c20();
    func_0x2c613f84();
    FUN_2c673c88();
    FUN_2c6741d8();
    piVar10 = _LAB_2c6020d0;
    if (*_LAB_2c6020c8 != '\0') {
      FUN_2c673c88();
      iVar6 = FUN_2c6741d8();
      piVar10[1] = (piVar10[1] - *piVar10) + iVar6;
      piVar10[2] = piVar10[2] + 1;
      FUN_2c673c88();
      iVar6 = FUN_2c6741d8();
      *piVar10 = iVar6;
    }
  }
  if (*_LAB_2c6020cc == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

