/* FUN_2c4d3d3c @ 0x2c4d3d3c */

int FUN_2c4d3d3c(uint *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                char param_6,undefined1 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  byte bVar14;
  uint *puVar15;
  char cVar16;
  uint local_194;
  byte *local_190;
  uint local_18c;
  int local_184;
  uint local_178;
  uint local_174;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint local_158;
  uint local_154;
  uint uStack_150;
  undefined1 auStack_14c [280];
  int local_34;
  
  local_34 = *DAT_2c4d3ec0;
  uVar11 = 0;
  *(undefined1 *)(param_2 + 0x26) = 0;
  uVar8 = param_1[1];
  uVar6 = 1 - uVar8;
  if ((int)uVar6 < 1) {
    uVar6 = *param_1;
  }
  else {
    if (uVar6 != 0x20) {
      uVar11 = *param_1 << (uVar6 & 0xff);
    }
    uVar6 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar6;
    uVar8 = param_1[1] + 0x20;
  }
  param_1[1] = uVar8 - 1;
  iVar7 = DAT_2c4d3ec4;
  uVar9 = *(uint *)(DAT_2c4d3ec4 + 4);
  uVar6 = (uVar6 >> (uVar8 - 1 & 0xff) | uVar11) & uVar9;
  uVar1 = (undefined1)uVar6;
  *(undefined1 *)(param_2 + 0x1d) = uVar1;
  if ((uVar6 & 0xff) == 0) {
    *(undefined1 *)(param_2 + 0x1e) = uVar1;
LAB_2c4d3da8:
    uVar8 = param_1[1];
    uVar6 = 1 - uVar8;
    if ((int)uVar6 < 1) {
      uVar6 = *param_1;
      bVar14 = 0;
    }
    else {
      if (uVar6 == 0x20) {
        bVar14 = 0;
      }
      else {
        bVar14 = (byte)(*param_1 << (uVar6 & 0xff));
      }
      uVar6 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar6;
      uVar8 = param_1[1] + 0x20;
    }
    param_1[1] = uVar8 - 1;
    *(byte *)(param_2 + 0x1f) = ((byte)(uVar6 >> (uVar8 - 1 & 0xff)) | bVar14) & (byte)uVar9;
    uVar8 = param_1[1];
    uVar6 = 6 - uVar8;
    if ((int)uVar6 < 1) {
      uVar6 = *param_1;
      bVar14 = 0;
    }
    else {
      if (uVar6 == 0x20) {
        bVar14 = 0;
      }
      else {
        bVar14 = (byte)(*param_1 << (uVar6 & 0xff));
      }
      uVar6 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar6;
      uVar8 = param_1[1] + 0x20;
    }
    param_1[1] = uVar8 - 6;
    *(byte *)(param_2 + 0x20) =
         (((byte)(uVar6 >> (uVar8 - 6 & 0xff)) | bVar14) & (byte)*(undefined4 *)(iVar7 + 0x18)) + 1;
    uVar6 = param_1[1];
    uVar8 = 4 - uVar6;
    if ((int)uVar8 < 1) {
      uVar8 = *param_1;
      uVar11 = 0;
    }
    else {
      if (uVar8 == 0x20) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_1 << (uVar8 & 0xff);
      }
      uVar8 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar8;
      uVar6 = param_1[1] + 0x20;
    }
    uVar2 = *(uint *)(iVar7 + 0x10);
    param_1[1] = uVar6 - 4;
    uVar6 = ((uVar8 >> (uVar6 - 4 & 0xff) | uVar11) & uVar2) + 1;
    uVar8 = uVar6 & 0xff;
    *(char *)(param_2 + 0x21) = (char)uVar6;
    if (1 < uVar8) goto LAB_2c4d3e14;
    cVar16 = '\0';
    if (uVar8 != 0) {
      uVar6 = *(uint *)(iVar7 + 0xc);
      cVar16 = '\0';
      local_190 = (byte *)(param_2 + 0x22);
      local_18c = 0;
      puVar12 = param_1 + 2;
      local_194 = 0;
      do {
        uVar8 = param_1[1];
        uVar11 = 3 - uVar8;
        if ((int)uVar11 < 1) {
          uVar11 = *param_1;
          uVar2 = 0;
        }
        else {
          if (uVar11 == 0x20) {
            uVar2 = 0;
          }
          else {
            uVar2 = *param_1 << (uVar11 & 0xff);
          }
          uVar11 = FUN_2c4d74d4(puVar12);
          *param_1 = uVar11;
          uVar8 = param_1[1] + 0x20;
        }
        param_1[1] = uVar8 - 3;
        uVar8 = ((uVar11 >> (uVar8 - 3 & 0xff) | uVar2) & uVar6) + 1;
        uVar11 = uVar8 & 0xff;
        *local_190 = (byte)uVar8;
        if (1 < uVar11) goto LAB_2c4d3e14;
        if (uVar11 != 0) {
          uVar8 = 0;
          puVar15 = (uint *)(param_2 + local_18c * 0x10);
          local_184 = local_18c * 0x118 + param_4;
          do {
            puVar15[2] = local_194;
            puVar15[3] = 0;
            if (local_18c == 0 && uVar8 == 0) {
LAB_2c4d3f90:
              if (*(char *)(param_2 + 0x1d) == '\x01') {
                uVar2 = FUN_2c4d3c94(param_1);
                if (param_1[9] == 0) {
                  FUN_2c4d766c(puVar12,param_1[1]);
                }
                else if (param_1[1] != 0) {
                  FUN_2c4d7598(puVar12,*param_1);
                }
                *param_1 = 0;
                param_1[1] = 0;
                uVar11 = FUN_2c4d76a8(puVar12);
                if (uVar11 < uVar2) goto LAB_2c4d418e;
                if (param_1[9] == 0) {
                  FUN_2c4d766c(puVar12,param_1[1]);
                }
                else if (param_1[1] != 0) {
                  FUN_2c4d7598(puVar12,*param_1);
                }
                *param_1 = 0;
                param_1[1] = 0;
                local_178 = *param_1;
                local_174 = param_1[1];
                uStack_16c = param_1[3];
                local_168 = param_1[4];
                uStack_164 = param_1[5];
                uStack_160 = param_1[6];
                uStack_15c = param_1[7];
                local_158 = param_1[8];
                local_154 = param_1[9];
                uStack_150 = param_1[10];
                local_170 = uVar2;
                if (*(char *)(param_2 + 0x27) == '\0') {
                  iVar3 = FUN_2c4d6528(auStack_14c,&local_178,1,param_3,param_6,param_7,0);
                }
                else {
                  iVar3 = FUN_2c4d6528(local_184,&local_178,1,param_3,param_6,param_7,0);
                }
                if (iVar3 != 0) goto LAB_2c4d3e18;
                if (local_154 == 0) {
                  FUN_2c4d766c(&local_170,local_174);
                }
                else if (local_174 != 0) {
                  FUN_2c4d7598(&local_170,local_178);
                }
                local_178 = 0;
                local_174 = 0;
                iVar3 = FUN_2c4d76a8(&local_170);
                if (iVar3 < 0) goto LAB_2c4d418e;
                uVar11 = param_1[1];
                uVar4 = param_1[9];
                if (uVar2 < uVar11) {
                  if (uVar4 == 0) {
                    uVar11 = uVar11 - uVar2;
                    param_1[1] = uVar11;
                    goto LAB_2c4d3fc2;
                  }
LAB_2c4d4392:
                  if (uVar11 != 0) {
                    FUN_2c4d7598(puVar12,*param_1,uVar11);
                    uVar4 = param_1[9];
                  }
                }
                else {
                  if (uVar4 != 0) goto LAB_2c4d4392;
                  FUN_2c4d766c(puVar12);
                  uVar4 = param_1[9];
                }
                *param_1 = 0;
                param_1[1] = 0;
                FUN_2c4d768c(puVar12,uVar2,uVar4 & 0xff);
                uVar11 = param_1[1];
              }
              else {
                if (*(char *)(param_2 + 0x27) == '\0') {
                  iVar3 = FUN_2c4d6528(auStack_14c,param_1,0,param_3,param_6,param_7,0);
                }
                else {
                  iVar3 = FUN_2c4d6528(local_184,param_1,0,param_3,param_6,param_7,0);
                }
                if (iVar3 != 0) goto LAB_2c4d3e18;
                uVar11 = param_1[1];
              }
LAB_2c4d3fc2:
              cVar16 = *(char *)(param_2 + 0x27);
              if (cVar16 != '\0') {
                cVar16 = '\x01';
              }
            }
            else {
              uVar11 = param_1[1];
              uVar2 = 1 - uVar11;
              if ((int)uVar2 < 1) {
                uVar4 = *param_1;
                uVar2 = 0;
              }
              else {
                if (uVar2 == 0x20) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = *param_1 << (uVar2 & 0xff);
                }
                uVar4 = FUN_2c4d74d4(puVar12);
                *param_1 = uVar4;
                uVar11 = param_1[1] + 0x20;
              }
              param_1[1] = uVar11 - 1;
              if (((uVar4 >> (uVar11 - 1 & 0xff) | uVar2) & uVar9) == 0) goto LAB_2c4d3f90;
              if (uVar8 == 0) goto LAB_2c4d418e;
              FUN_2c674668(local_184,local_184 + -0x118,0x118);
              uVar11 = param_1[1];
            }
            uVar2 = 3 - uVar11;
            if ((int)uVar2 < 1) {
              uVar4 = *param_1;
              uVar2 = 0;
            }
            else {
              if (uVar2 == 0x20) {
                uVar2 = 0;
              }
              else {
                uVar2 = *param_1 << (uVar2 & 0xff);
              }
              uVar4 = FUN_2c4d74d4(puVar12);
              *param_1 = uVar4;
              uVar11 = param_1[1] + 0x20;
            }
            param_1[1] = uVar11 - 3;
            uVar11 = (uVar4 >> (uVar11 - 3 & 0xff) | uVar2) & uVar6;
            *puVar15 = uVar11;
            if (uVar11 == 0) {
              uVar4 = param_1[1];
              uVar2 = 8 - uVar4;
              uVar11 = 0;
              if ((int)uVar2 < 1) {
                uVar2 = *param_1;
              }
              else {
                if (uVar2 != 0x20) {
                  uVar11 = *param_1 << (uVar2 & 0xff);
                }
                uVar2 = FUN_2c4d74d4(puVar12);
                uVar4 = param_1[1] + 0x20;
                *param_1 = uVar2;
              }
              param_1[1] = uVar4 - 8;
              puVar15[1] = (uVar11 | uVar2 >> (uVar4 - 8 & 0xff)) & *(uint *)(iVar7 + 0x20);
              if ((((*(char *)(param_2 + 0x1f) == '\0') && (uVar8 != 0)) &&
                  ((*(short *)(local_184 + 0xf2) == 0x14 || (*(short *)(local_184 + 0xf2) == 6))))
                 && ((*(ushort *)(local_184 + -0x26) & 0xffef) == 8)) {
                uVar11 = param_1[1];
                if (0 < (int)(6 - uVar11)) {
                  uVar11 = FUN_2c4d74d4(puVar12);
                  *param_1 = uVar11;
                  uVar11 = param_1[1] + 0x20;
                }
                param_1[1] = uVar11 - 6;
              }
            }
            else {
              if (uVar11 != 1) goto LAB_2c4d418e;
              uVar11 = param_1[1];
              uVar2 = 9 - uVar11;
              if ((int)uVar2 < 1) {
                uVar4 = *param_1;
                uVar2 = 0;
              }
              else {
                if (uVar2 == 0x20) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = *param_1 << (uVar2 & 0xff);
                }
                uVar4 = FUN_2c4d74d4(puVar12);
                *param_1 = uVar4;
                uVar11 = param_1[1] + 0x20;
              }
              param_1[1] = uVar11 - 9;
              puVar15[3] = (uVar4 >> (uVar11 - 9 & 0xff) | uVar2) & *(uint *)(iVar7 + 0x24);
            }
            uVar8 = uVar8 + 1;
            puVar15 = puVar15 + 4;
            local_194 = local_194 + 1;
            local_184 = local_184 + 0x118;
          } while (uVar8 < *local_190);
        }
        local_190 = local_190 + 1;
        local_18c = local_18c + 1;
      } while (local_18c < *(byte *)(param_2 + 0x21));
    }
    uVar8 = param_1[1];
    uVar6 = 1 - uVar8;
    if ((int)uVar6 < 1) {
      uVar6 = *param_1;
      uVar11 = 0;
    }
    else {
      if (uVar6 == 0x20) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_1 << (uVar6 & 0xff);
      }
      uVar6 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar6;
      uVar8 = param_1[1] + 0x20;
    }
    param_1[1] = uVar8 - 1;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar6 = (uVar6 >> (uVar8 - 1 & 0xff) | uVar11) & uVar9;
    *(char *)(param_2 + 0x23) = (char)uVar6;
    if ((uVar6 & 0xff) == 0) {
LAB_2c4d441e:
      uVar8 = param_1[1];
      uVar6 = 1 - uVar8;
      if ((int)uVar6 < 1) {
        uVar6 = *param_1;
        uVar11 = 0;
      }
      else {
        if (uVar6 == 0x20) {
          uVar11 = 0;
        }
        else {
          uVar11 = *param_1 << (uVar6 & 0xff);
        }
        uVar6 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar6;
        uVar8 = param_1[1] + 0x20;
      }
      param_1[1] = uVar8 - 1;
      uVar9 = (uVar6 >> (uVar8 - 1 & 0xff) | uVar11) & uVar9;
      *(char *)(param_2 + 0x24) = (char)uVar9;
      if ((uVar9 & 0xff) != 0) {
        uVar6 = param_1[1];
        if (0 < (int)(8 - uVar6)) {
          uVar6 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar6;
          uVar6 = param_1[1] + 0x20;
          param_1[1] = uVar6;
        }
        param_1[1] = uVar6 - 8;
      }
      uVar6 = (uint)*(byte *)(param_2 + 0x21);
      if (uVar6 != 0) {
        uVar8 = 0;
        pbVar13 = (byte *)(param_2 + 0x22);
        do {
          if (*pbVar13 != 0) {
            uVar6 = 0;
            iVar7 = uVar8 * 0x118 + param_4;
            do {
              if (cVar16 == '\0') {
LAB_2c4d44ca:
                *param_5 = 1;
              }
              else {
                iVar3 = (*(code *)*param_3)(param_3[1],iVar7,*(undefined1 *)(iVar7 + 0x112),
                                            iVar7 + 0x113);
                if (iVar3 == 0x203) {
                  iVar3 = 0x203;
                  *param_5 = 0;
                  goto LAB_2c4d3e18;
                }
                if (iVar3 == 0) goto LAB_2c4d44ca;
                *param_5 = 0;
                if (uVar6 == 0) {
                  iVar3 = 0x102;
                  goto LAB_2c4d3e18;
                }
              }
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0x118;
            } while (uVar6 < *pbVar13);
            uVar6 = (uint)*(byte *)(param_2 + 0x21);
          }
          uVar8 = uVar8 + 1;
          pbVar13 = pbVar13 + 1;
        } while (uVar8 < uVar6);
      }
      if (param_6 == '\x02') {
        iVar3 = 0;
        *(undefined1 *)(param_2 + 0x27) = 0;
      }
      else {
        iVar3 = 0;
      }
      goto LAB_2c4d3e2a;
    }
    if (*(char *)(param_2 + 0x1d) == '\x01') {
      uVar2 = FUN_2c4d3c94(param_1);
      *(uint *)(param_2 + 0x14) = uVar2;
    }
    else {
      uVar6 = *(uint *)(iVar7 + 0x20);
      do {
        *(uint *)(param_2 + 0x14) = uVar2 << 8;
        uVar11 = param_1[1];
        uVar8 = 1 - uVar11;
        if ((int)uVar8 < 1) {
          uVar2 = *param_1;
          uVar8 = 0;
        }
        else {
          if (uVar8 == 0x20) {
            uVar8 = 0;
          }
          else {
            uVar8 = *param_1 << (uVar8 & 0xff);
          }
          uVar2 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar2;
          uVar11 = param_1[1] + 0x20;
        }
        uVar11 = uVar11 - 1;
        uVar4 = uVar2 >> (uVar11 & 0xff);
        param_1[1] = uVar11;
        uVar10 = 8 - uVar11;
        if ((int)uVar10 < 1) {
          uVar10 = 0;
        }
        else {
          if (uVar10 == 0x20) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar2 << (uVar10 & 0xff);
          }
          uVar2 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar2;
          uVar11 = param_1[1] + 0x20;
        }
        param_1[1] = uVar11 - 8;
        uVar2 = ((uVar2 >> (uVar11 - 8 & 0xff) | uVar10) & uVar6) + *(int *)(param_2 + 0x14);
        *(uint *)(param_2 + 0x14) = uVar2;
      } while (((uVar8 | uVar4) & uVar9) != 0);
    }
    if (uVar2 >> 3 <= *(uint *)(param_2 + 0x18)) goto LAB_2c4d441e;
LAB_2c4d418e:
    iVar3 = 0x401;
  }
  else {
    uVar6 = param_1[1];
    uVar8 = 1 - uVar6;
    if ((int)uVar8 < 1) {
      uVar8 = *param_1;
      uVar11 = 0;
    }
    else {
      if (uVar8 == 0x20) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_1 << (uVar8 & 0xff);
      }
      uVar8 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar8;
      uVar6 = param_1[1] + 0x20;
    }
    param_1[1] = uVar6 - 1;
    uVar6 = (uVar8 >> (uVar6 - 1 & 0xff) | uVar11) & uVar9;
    *(char *)(param_2 + 0x1e) = (char)uVar6;
    if ((uVar6 & 0xff) == 0) {
      if (*(char *)(param_2 + 0x1d) == '\x01') {
        uVar5 = FUN_2c4d3c94(param_1);
        *(undefined4 *)(param_2 + 0x10) = uVar5;
      }
      goto LAB_2c4d3da8;
    }
LAB_2c4d3e14:
    iVar3 = 0x402;
  }
LAB_2c4d3e18:
  uVar1 = *(undefined1 *)(param_2 + 0x27);
  FUN_2c674268(param_2,0,0x2c);
  *(undefined1 *)(param_2 + 0x27) = uVar1;
LAB_2c4d3e2a:
  if (*DAT_2c4d3ec0 == local_34) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

