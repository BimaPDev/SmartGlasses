/* FUN_2c55ed7c @ 0x2c55ed7c */

void FUN_2c55ed7c(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  int *local_3c;
  int *local_38;
  int *local_34;
  
  iVar11 = param_2 * 2;
  iVar7 = *(int *)(*param_1 + -0x10) + (int)param_1;
  local_38 = *(int **)(iVar7 + 8);
  if (local_38 == (int *)0x0) {
LAB_2c55edb4:
    iVar10 = 0;
    local_3c = *(int **)(iVar7 + 0x10);
    if (local_3c != (int *)0x0) goto LAB_2c55edbe;
LAB_2c55eef2:
    local_34 = local_3c;
    FUN_2c62c3b0(*(undefined4 *)(iVar10 + 0x40),0x5600);
    if (10 < iVar11) goto LAB_2c55ef06;
LAB_2c55ede4:
    iVar7 = 0;
    fVar13 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = fVar13 / 10.0;
  }
  else {
    if (local_38[1] == 0) {
      local_38 = (int *)0x0;
      goto LAB_2c55edb4;
    }
    iVar10 = local_38[1] + 1;
    local_38[1] = iVar10;
    if (iVar10 == 0) {
      iVar7 = *(int *)(*param_1 + -0x10) + (int)param_1;
      goto LAB_2c55edb4;
    }
    iVar10 = *(int *)(iVar7 + 4);
    iVar7 = *(int *)(*param_1 + -0x10) + (int)param_1;
    local_3c = *(int **)(iVar7 + 0x10);
    if (local_3c == (int *)0x0) goto LAB_2c55eef2;
LAB_2c55edbe:
    if (local_3c[1] == 0) {
      local_3c = (int *)0x0;
      local_34 = (int *)0x0;
    }
    else {
      iVar6 = local_3c[1] + 1;
      local_3c[1] = iVar6;
      if (iVar6 == 0) {
        local_34 = (int *)0x0;
      }
      else {
        local_34 = *(int **)(iVar7 + 0xc);
      }
    }
    FUN_2c62c3b0(*(undefined4 *)(iVar10 + 0x40),0x5600);
    if (iVar11 < 0xb) goto LAB_2c55ede4;
LAB_2c55ef06:
    if (iVar11 < 0x28) {
      if (iVar11 < 0xe) {
        fVar13 = 3.0;
        iVar7 = iVar11 + -10;
        fVar14 = -4.0;
      }
      else if (iVar11 < 0x14) {
        fVar13 = 6.0;
        iVar7 = iVar11 + -0xd;
        fVar14 = 3.0;
      }
      else {
        if (0x19 < iVar11) {
          if (iVar11 < 0x20) {
            fVar13 = (float)VectorSignedToFloat(iVar11 + -0x19,(byte)(in_fpscr >> 0x16) & 3);
            iVar7 = (int)(fVar13 / 6.0 + fVar13 / 6.0);
            fVar13 = 1.0;
          }
          else if (iVar11 < 0x26) {
            fVar13 = (float)VectorSignedToFloat(iVar11 + -0x1f,(byte)(in_fpscr >> 0x16) & 3);
            iVar7 = (int)-(fVar13 / 6.0);
            fVar13 = 1.0;
          }
          else {
            iVar7 = 0;
            fVar13 = 1.0;
          }
          goto LAB_2c55edf6;
        }
        fVar13 = 6.0;
        iVar7 = iVar11 + -0x13;
        fVar14 = -2.0;
      }
      fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      iVar7 = (int)((fVar15 / fVar13) * fVar14);
      fVar13 = 1.0;
    }
    else if (iVar11 < 0x32) {
      iVar7 = 0;
      fVar13 = (float)VectorSignedToFloat(param_2 * -2 + 0x32,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = fVar13 / 10.0;
    }
    else {
      if (0x36 < iVar11) {
        if ((local_3c != (int *)0x0) &&
           (iVar7 = local_3c[1], local_3c[1] = iVar7 + -1, iVar7 + -1 == 0)) {
          (**(code **)(*local_3c + 8))(local_3c);
          iVar7 = local_3c[2];
          local_3c[2] = iVar7 + -1;
          if (iVar7 + -1 == 0) {
            (**(code **)(*local_3c + 0xc))(local_3c);
          }
        }
        if (local_38 == (int *)0x0) {
          return;
        }
        iVar7 = local_38[1] + -1;
        local_38[1] = iVar7;
        goto joined_r0x2c55efd6;
      }
      iVar7 = 0;
      fVar13 = DAT_2c55f0a8;
    }
  }
LAB_2c55edf6:
  uVar3 = LAB_2c55f0b4;
  uVar2 = DAT_2c55f0b0;
  iVar6 = DAT_2c55f0ac;
  uVar9 = -iVar7;
  iVar7 = iVar10;
  do {
    uVar12 = (int)uVar9 >> 0x1f;
    if (iVar11 - 0xbU < 0x1d) {
      uVar5 = FUN_2c66b19c();
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar12 = (uVar9 ^ uVar12) - uVar12;
      fVar15 = (float)VectorSignedToFloat(uVar5 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x23
                                                        ) * -10,(byte)(in_fpscr >> 0x16) & 3);
      fVar14 = (float)VectorSignedToFloat(*(undefined4 *)
                                           (iVar6 + (uVar12 + (uint)((ulonglong)uVar2 *
                                                                     (ulonglong)uVar12 >> 0x22) *
                                                              -0xd) * 4),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar14 = (fVar15 / 10.0) * fVar13 * fVar14;
    }
    else {
      uVar12 = (uVar9 ^ uVar12) - uVar12;
      fVar14 = (float)VectorSignedToFloat(*(undefined4 *)
                                           (iVar6 + (uVar12 + (uint)((ulonglong)uVar2 *
                                                                     (ulonglong)uVar12 >> 0x22) *
                                                              -0xd) * 4),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar14 = fVar14 * fVar13;
    }
    iVar4 = (int)(fVar14 + 1.0);
    if (-1 < iVar4 << 0x1f) {
      iVar4 = iVar4 + 1;
    }
    sVar1 = *(short *)(iVar10 + 0xd64);
    *(short *)(iVar7 + 0x4a) = (short)iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    iVar8 = iVar7 + 0x60;
    uVar9 = uVar9 + 1;
    *(short *)(iVar7 + 0x46) = sVar1 - (short)(iVar4 >> 1);
    iVar7 = iVar8;
  } while (iVar10 + 0xd20 != iVar8);
  FUN_2c639858(local_34,iVar10 + 0x44,0x23);
  if ((local_3c != (int *)0x0) && (iVar7 = local_3c[1], local_3c[1] = iVar7 + -1, iVar7 + -1 == 0))
  {
    (**(code **)(*local_3c + 8))(local_3c);
    iVar7 = local_3c[2];
    local_3c[2] = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      (**(code **)(*local_3c + 0xc))(local_3c);
    }
  }
  if (local_38 == (int *)0x0) {
    return;
  }
  iVar7 = local_38[1] + -1;
  local_38[1] = iVar7;
joined_r0x2c55efd6:
  if (iVar7 == 0) {
    (**(code **)(*local_38 + 8))(local_38);
    iVar7 = local_38[2];
    local_38[2] = iVar7 + -1;
    if (iVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55efa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*local_38 + 0xc))(local_38);
      return;
    }
  }
  return;
}

