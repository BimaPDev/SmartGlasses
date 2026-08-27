/* FUN_2c474ba8 @ 0x2c474ba8 */

void FUN_2c474ba8(int param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint *extraout_r1_00;
  byte *pbVar5;
  undefined4 extraout_r1_01;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int unaff_pc;
  undefined8 uVar12;
  
  uVar6 = *DAT_2c474ea4;
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 < 0x20000000) {
    uVar8 = uVar7 * 8;
    if (uVar8 < 0x80) {
      iVar11 = 1;
      *param_3 = (byte)uVar8;
      puVar4 = param_2;
    }
    else {
      puVar4 = (uint *)((uVar7 & 0x1fffffff) >> 4);
      *param_3 = (byte)uVar8 | 0x80;
      bVar2 = (byte)puVar4;
      if (uVar8 < 0x4000) {
        iVar11 = 2;
        param_3[1] = bVar2;
      }
      else {
        param_3[1] = bVar2 | 0x80;
        puVar4 = (uint *)((uVar7 & 0x1fffffff) >> 0xb);
        bVar2 = (byte)puVar4;
        if (uVar8 < 0x200000) {
          iVar11 = 3;
          param_3[2] = bVar2;
        }
        else {
          param_3[2] = bVar2 | 0x80;
          puVar4 = (uint *)((uVar7 & 0x1fffffff) >> 0x12);
          if (uVar8 < 0x10000000) {
            iVar11 = 4;
            param_3[3] = (byte)puVar4;
          }
          else {
            iVar11 = 5;
            param_3[3] = (byte)(uint *)((uint)puVar4 | 0xffffff80);
            param_3[4] = ((byte)(uVar7 >> 0x18) & 0x1f) >> 1;
            puVar4 = (uint *)((uint)puVar4 | 0xffffff80);
          }
        }
      }
    }
  }
  else {
    uVar12 = FUN_2c474338(uVar7,uVar7 | unaff_pc << 3);
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    iVar11 = (int)uVar12;
  }
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
  case 0xd:
    uVar7 = *param_2;
    puVar4 = (uint *)(param_3 + iVar11);
    bVar1 = (byte)(uVar7 >> 0x18);
    bVar2 = (byte)uVar7;
    if ((int)uVar7 < 0) {
      param_3[iVar11] = bVar2 | 0x80;
      *(byte *)((int)puVar4 + 1) = (byte)(uVar7 >> 7) | 0x80;
      *(byte *)((int)puVar4 + 2) = (byte)(uVar7 >> 0xe) | 0x80;
      *(byte *)((int)puVar4 + 3) = (byte)(uVar7 >> 0x15) | 0x80;
      *(byte *)(puVar4 + 1) = bVar1 >> 4 | 0xf0;
      *(byte *)(puVar4 + 2) = 0xff;
      pbVar10 = (byte *)(iVar11 + 10);
      *(byte *)((int)puVar4 + 7) = 0xff;
      *(byte *)((int)puVar4 + 6) = 0xff;
      *(byte *)((int)puVar4 + 5) = 0xff;
      *(byte *)((int)puVar4 + 9) = 1;
    }
    else {
      if (uVar7 < 0x80) {
        iVar3 = 1;
        *(byte *)puVar4 = bVar2;
      }
      else {
        *(byte *)puVar4 = bVar2 | 0x80;
        bVar2 = (byte)(uVar7 >> 7);
        if (uVar7 < 0x4000) {
          iVar3 = 2;
          *(byte *)((int)puVar4 + 1) = bVar2;
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        else {
          *(byte *)((int)puVar4 + 1) = bVar2 | 0x80;
          bVar2 = (byte)(uVar7 >> 0xe);
          if (uVar7 < 0x200000) {
            iVar3 = 3;
            *(byte *)((int)puVar4 + 2) = bVar2;
            puVar4 = (uint *)((int)puVar4 + 2);
          }
          else {
            *(byte *)((int)puVar4 + 2) = bVar2 | 0x80;
            bVar2 = (byte)(uVar7 >> 0x15);
            if (uVar7 < 0x10000000) {
              iVar3 = 4;
              *(byte *)((int)puVar4 + 3) = bVar2;
              puVar4 = (uint *)((int)puVar4 + 3);
            }
            else {
              iVar3 = 5;
              *(byte *)((int)puVar4 + 3) = bVar2 | 0x80;
              *(byte *)(puVar4 + 1) = bVar1 >> 4;
              puVar4 = puVar4 + 1;
            }
          }
        }
      }
      pbVar10 = (byte *)(iVar3 + iVar11);
    }
    break;
  case 1:
    uVar7 = (int)*param_2 >> 0x1f ^ *param_2 << 1;
    if (0x7f < uVar7) goto LAB_2c474e2c;
LAB_2c474e18:
    pbVar10 = param_3 + iVar11;
    bVar2 = (byte)uVar7;
    puVar4 = (uint *)0x0;
    goto LAB_2c474e1a;
  case 2:
  case 7:
  case 10:
    pbVar10 = (byte *)(iVar11 + 4);
    *param_3 = *param_3 | 5;
    *(uint *)(param_3 + iVar11) = *param_2;
    break;
  case 3:
  case 8:
    uVar12 = FUN_2c474338(*param_2,param_2[1],param_3 + iVar11);
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    pbVar10 = (byte *)((int)uVar12 + iVar11);
    break;
  case 4:
    uVar8 = *param_2;
    uVar7 = (int)param_2[1] >> 0x1f;
    uVar12 = FUN_2c474338(uVar8 * 2 ^ uVar7,param_2[1] * 2 + (uint)CARRY4(uVar8,uVar8) ^ uVar7,
                          param_3 + iVar11);
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    pbVar10 = (byte *)((int)uVar12 + iVar11);
    break;
  case 5:
  case 9:
  case 0xb:
    *param_3 = *param_3 | 1;
    puVar4 = (uint *)param_2[1];
    *(uint *)(param_3 + iVar11) = *param_2;
    pbVar10 = (byte *)(iVar11 + 8);
    *(uint **)(param_3 + iVar11 + 4) = puVar4;
    break;
  case 6:
    uVar7 = *param_2;
    if (uVar7 < 0x80) goto LAB_2c474e18;
LAB_2c474e2c:
    param_3[iVar11] = (byte)uVar7 | 0x80;
    bVar2 = (byte)(uVar7 >> 7);
    if (uVar7 < 0x4000) {
      pbVar10 = param_3 + iVar11 + 1;
      puVar4 = (uint *)0x1;
    }
    else {
      bVar1 = bVar2 | 0x80;
      bVar2 = (byte)(uVar7 >> 0xe);
      param_3[iVar11 + 1] = bVar1;
      if (uVar7 < 0x200000) {
        pbVar10 = param_3 + iVar11 + 2;
        puVar4 = (uint *)0x2;
      }
      else {
        param_3[iVar11 + 2] = bVar2 | 0x80;
        bVar2 = (byte)(uVar7 >> 0x15);
        if (uVar7 < 0x10000000) {
          pbVar10 = param_3 + iVar11 + 3;
          puVar4 = (uint *)0x3;
        }
        else {
          bVar1 = bVar2 | 0x80;
          pbVar10 = param_3 + iVar11 + 4;
          bVar2 = (byte)(uVar7 >> 0x1c);
          puVar4 = (uint *)&Reset;
          param_3[iVar11 + 3] = bVar1;
        }
      }
    }
LAB_2c474e1a:
    *pbVar10 = bVar2;
    pbVar10 = (byte *)(iVar11 + 1 + (int)puVar4);
    break;
  case 0xc:
    pbVar10 = (byte *)(iVar11 + 1);
    param_3[iVar11] = *param_2 != 0;
    break;
  case 0xe:
    pbVar10 = param_3 + iVar11;
    *param_3 = *param_3 | 2;
    uVar7 = *param_2;
    if (uVar7 == 0) {
      iVar3 = 1;
      param_3[iVar11] = 0;
    }
    else {
      uVar8 = FUN_2c66c4ec(uVar7);
      if (uVar8 < 0x80) {
        iVar3 = 1;
        pbVar5 = pbVar10;
        uVar9 = uVar8;
      }
      else {
        *pbVar10 = (byte)uVar8 | 0x80;
        if (uVar8 < 0x4000) {
          iVar3 = 2;
          pbVar5 = pbVar10 + 1;
          uVar9 = uVar8 >> 7;
        }
        else {
          pbVar10[1] = (byte)(uVar8 >> 7) | 0x80;
          if (uVar8 < 0x200000) {
            iVar3 = 3;
            pbVar5 = pbVar10 + 2;
            uVar9 = uVar8 >> 0xe;
          }
          else {
            pbVar10[2] = (byte)(uVar8 >> 0xe) | 0x80;
            if (uVar8 < 0x10000000) {
              iVar3 = 4;
              pbVar5 = pbVar10 + 3;
              uVar9 = uVar8 >> 0x15;
            }
            else {
              iVar3 = 5;
              pbVar10[3] = (byte)(uVar8 >> 0x15) | 0x80;
              pbVar5 = pbVar10 + 4;
              uVar9 = uVar8 >> 0x1c;
            }
          }
        }
      }
      *pbVar5 = (byte)uVar9;
      FUN_2c674668(pbVar10 + iVar3,uVar7,uVar8);
      iVar3 = uVar8 + iVar3;
      puVar4 = extraout_r1;
    }
    goto LAB_2c474e04;
  case 0xf:
    pbVar10 = param_3 + iVar11;
    *param_3 = *param_3 | 2;
    uVar7 = *param_2;
    if (uVar7 < 0x80) {
      iVar3 = 1;
      pbVar5 = pbVar10;
      uVar8 = uVar7;
    }
    else {
      param_3[iVar11] = (byte)uVar7 | 0x80;
      if (uVar7 < 0x4000) {
        iVar3 = 2;
        pbVar5 = pbVar10 + 1;
        uVar8 = uVar7 >> 7;
      }
      else {
        pbVar10[1] = (byte)(uVar7 >> 7) | 0x80;
        if (uVar7 < 0x200000) {
          iVar3 = 3;
          pbVar5 = pbVar10 + 2;
          uVar8 = uVar7 >> 0xe;
        }
        else {
          pbVar10[2] = (byte)(uVar7 >> 0xe) | 0x80;
          if (uVar7 < 0x10000000) {
            iVar3 = 4;
            pbVar5 = pbVar10 + 3;
            uVar8 = uVar7 >> 0x15;
          }
          else {
            iVar3 = 5;
            pbVar10[3] = (byte)(uVar7 >> 0x15) | 0x80;
            pbVar5 = pbVar10 + 4;
            uVar8 = uVar7 >> 0x1c;
          }
        }
      }
    }
    *pbVar5 = (byte)uVar8;
    FUN_2c674668(pbVar10 + iVar3,param_2[1],uVar7);
    pbVar10 = (byte *)(iVar11 + uVar7 + iVar3);
    puVar4 = extraout_r1_00;
    break;
  case 0x10:
    pbVar10 = param_3 + iVar11;
    *param_3 = *param_3 | 2;
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      iVar3 = 1;
      param_3[iVar11] = 0;
    }
    else {
      pbVar5 = pbVar10 + 1;
      if (**(int **)*param_2 != DAT_2c474ea8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c668484(DAT_2c475034,0x5d6,DAT_2c475030,DAT_2c47502c);
      }
      uVar12 = FUN_2c475040();
      uVar7 = (uint)uVar12;
      if (uVar7 < 0x80) {
        iVar3 = 0;
      }
      else if (uVar7 < 0x4000) {
        FUN_2c673eb8(pbVar10 + 2,pbVar5,uVar7);
        iVar3 = 1;
        *pbVar10 = (byte)uVar12 | 0x80;
        uVar12 = CONCAT44(pbVar5,uVar7 >> 7);
        pbVar10 = pbVar5;
      }
      else {
        if (uVar7 < 0x200000) {
          iVar3 = 3;
        }
        else if (uVar7 < 0x10000000) {
          iVar3 = 4;
        }
        else {
          iVar3 = 5;
        }
        FUN_2c673eb8(pbVar10 + iVar3,pbVar5,uVar7);
        *pbVar10 = (byte)uVar12 | 0x80;
        pbVar10[1] = (byte)(uVar7 >> 7) | 0x80;
        uVar12 = CONCAT44(extraout_r1_01,uVar7 >> 0xe);
        if (uVar7 < 0x200000) {
          iVar3 = 2;
          pbVar10 = pbVar10 + 2;
        }
        else {
          uVar12 = CONCAT44(extraout_r1_01,uVar7 >> 0x15);
          pbVar10[2] = (byte)(uVar7 >> 0xe) | 0x80;
          if (uVar7 < 0x10000000) {
            iVar3 = 3;
            pbVar10 = pbVar10 + 3;
          }
          else {
            uVar12 = CONCAT44(extraout_r1_01,uVar7 >> 0x1c);
            pbVar10[3] = (byte)(uVar7 >> 0x15) | 0x80;
            iVar3 = 4;
            pbVar10 = pbVar10 + 4;
          }
        }
      }
      puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
      *pbVar10 = (byte)uVar12;
      iVar3 = iVar3 + uVar7 + 1;
    }
LAB_2c474e04:
    pbVar10 = (byte *)(iVar11 + iVar3);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c475034,0x481,DAT_2c47503c,DAT_2c475038);
  }
  if ((*DAT_2c474ea4 ^ uVar6) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(pbVar10,puVar4,*DAT_2c474ea4 ^ uVar6,0);
  }
  return;
}

