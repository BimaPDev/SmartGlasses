/* FUN_2c4d1e60 @ 0x2c4d1e60 */

uint FUN_2c4d1e60(char *param_1,uint *param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,int *param_9)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *local_64;
  undefined4 *local_5c;
  undefined4 local_4c;
  char local_39;
  undefined4 local_38;
  int local_34;
  
  local_34 = *DAT_2c4d2110;
  iVar12 = *param_5;
  if (param_6 == (undefined4 *)0x0) {
    local_5c = param_6;
  }
  else {
    local_5c = (undefined4 *)*param_6;
  }
  if (param_7 == (undefined4 *)0x0) {
    local_64 = param_7;
  }
  else {
    local_64 = (undefined4 *)*param_7;
  }
  local_38 = *param_8;
  if (param_2[9] == 0) {
    FUN_2c4d766c(param_2 + 2,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_2c4d7598(param_2 + 2,*param_2);
  }
  puVar13 = param_2 + 2;
  uVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = FUN_2c4d76a8(puVar13);
  cVar2 = *param_1;
  if (cVar2 < '\b') {
    if ('\x05' < cVar2) {
LAB_2c4d2090:
      if (0 < *(int *)(param_1 + 0x318)) goto LAB_2c4d1f76;
      if (param_2[9] == 0) {
        FUN_2c4d766c(puVar13,param_2[1]);
      }
      else if (param_2[1] != 0) {
        FUN_2c4d7598(puVar13,*param_2);
      }
      *param_2 = 0;
      param_2[1] = 0;
      uVar5 = FUN_2c4d76a8(puVar13);
      *(undefined4 *)(param_1 + 0x30c) = uVar5;
      uVar10 = FUN_2c4d4624(param_2,param_1 + 0x6c,(int)*param_1,param_1 + 4,param_1 + 0xd4,
                            &local_38,param_4);
      if (uVar10 != 0) {
        if (5 < (uVar10 - 0x200 & 0xffff)) {
          if (uVar10 == 0x101) {
            uVar10 = 0x101;
          }
          else {
            uVar10 = 0x102;
          }
        }
        goto LAB_2c4d2108;
      }
      uVar5 = FUN_2c4d4884(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x318) = uVar5;
      if (*param_1 == '\n') {
        if (param_2[9] == 0) {
          FUN_2c4d766c(puVar13,param_2[1]);
        }
        else if (param_2[1] != 0) {
          FUN_2c4d7598(puVar13,*param_2);
        }
        *param_2 = 0;
        param_2[1] = 0;
        iVar12 = FUN_2c4d76a8(puVar13);
        local_64 = (undefined4 *)((int)local_64 - ((iVar3 - iVar12) + -0xd));
      }
LAB_2c4d1f88:
      iVar12 = 0;
      for (iVar4 = 0; iVar11 = FUN_2c4d488c(param_1 + 0x6c,0), iVar4 < iVar11; iVar4 = iVar4 + 1) {
        iVar11 = FUN_2c4d4854(param_1 + 0x6c,0,iVar4);
        iVar12 = iVar12 + iVar11;
      }
      uVar10 = 0;
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -1;
      goto LAB_2c4d1fb8;
    }
    if (cVar2 == '\x02') {
      if (*(int *)(param_1 + 0x318) < 1) {
        if (param_2[9] == 0) {
          FUN_2c4d766c(puVar13,param_2[1]);
        }
        else if (param_2[1] != 0) {
          FUN_2c4d7598(puVar13,*param_2);
        }
        *param_2 = 0;
        param_2[1] = 0;
        uVar5 = FUN_2c4d76a8(puVar13);
        pcVar7 = param_1 + 0xd4;
        iVar4 = 1;
        local_39 = '\0';
        *(undefined4 *)(param_1 + 0x30c) = uVar5;
        local_4c = 1;
        do {
          uVar10 = FUN_2c4d1328(param_1 + 0x6c,pcVar7,param_2,param_4);
          if (uVar10 == 0) {
            iVar11 = (**(code **)(param_1 + 4))
                               (*(undefined4 *)(param_1 + 8),pcVar7,local_4c,&local_39);
            if (iVar11 != 0) {
              uVar10 = 0x203;
              if (iVar11 != 0x203) goto LAB_2c4d2174;
              goto LAB_2c4d1fb8;
            }
            local_38 = 1;
            *(uint *)(param_1 + 0x318) = (byte)param_1[0x7c] + 1;
            if (iVar4 != 1) goto LAB_2c4d2178;
            if (local_39 != '\0') {
              (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x10),pcVar7);
            }
          }
          else {
            if (uVar10 != 0x101) {
LAB_2c4d2174:
              uVar10 = 0x102;
            }
LAB_2c4d2178:
            if (iVar4 == 2) goto code_r0x2c4d217e;
          }
          iVar11 = *(int *)(param_1 + 0x30c);
          if (param_2[9] == 0) {
            FUN_2c4d766c(puVar13,param_2[1]);
          }
          else if (param_2[1] != 0) {
            FUN_2c4d7598(puVar13,*param_2);
          }
          *param_2 = 0;
          param_2[1] = 0;
          iVar6 = FUN_2c4d76a8(puVar13);
          uVar9 = param_2[1];
          uVar8 = param_2[9];
          uVar10 = (iVar11 - iVar6) + uVar9;
          if (uVar10 < 0x20) {
            if (uVar8 != 0) {
LAB_2c4d2210:
              if (uVar9 != 0) {
                FUN_2c4d7598(puVar13,*param_2,uVar9);
                uVar8 = param_2[9];
              }
              goto LAB_2c4d2214;
            }
            param_2[1] = uVar10;
            FUN_2c4d766c(puVar13);
            *param_2 = 0;
            param_2[1] = 0;
          }
          else {
            if (uVar8 != 0) goto LAB_2c4d2210;
            FUN_2c4d766c(puVar13,uVar9);
            uVar8 = param_2[9];
LAB_2c4d2214:
            *param_2 = 0;
            param_2[1] = 0;
            FUN_2c4d766c(puVar13,iVar11 - iVar6,uVar8 & 0xff);
          }
          iVar4 = iVar4 + 1;
          local_4c = 2;
        } while( true );
      }
      FUN_2c4d82c8(param_1 + 0x80);
      param_1[0x7d] = '\0';
      goto LAB_2c4d1f00;
    }
  }
  else if (cVar2 == '\n') {
    if (*(int *)(param_1 + 0x318) < 1) {
      uVar9 = param_2[1];
      uVar8 = 0xd - uVar9;
      if ((int)uVar8 < 1) {
        uVar8 = *param_2;
      }
      else {
        if (uVar8 != 0x20) {
          uVar10 = *param_2 << (uVar8 & 0xff);
        }
        uVar8 = FUN_2c4d74d4(puVar13);
        *param_2 = uVar8;
        uVar9 = param_2[1] + 0x20;
      }
      param_2[1] = uVar9 - 0xd;
      uVar10 = *(uint *)(DAT_2c4d2114 + 0x34) & (uVar10 | uVar8 >> (uVar9 - 0xd & 0xff));
      *(uint *)(param_1 + 0x84) = uVar10;
      local_64 = (undefined4 *)(uVar10 << 3);
      goto LAB_2c4d2090;
    }
LAB_2c4d1f76:
    iVar4 = FUN_2c4d4530(param_2,param_1 + 0x6c);
    if (iVar4 == 0) goto LAB_2c4d1f88;
    uVar10 = 0x102;
    goto LAB_2c4d2108;
  }
  local_64 = (undefined4 *)0x0;
LAB_2c4d1fb8:
  *param_5 = iVar12;
  if (param_9 != (int *)0x0) {
    if (param_2[9] == 0) {
      FUN_2c4d766c(puVar13,param_2[1]);
    }
    else if (param_2[1] != 0) {
      FUN_2c4d7598(puVar13,*param_2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar12 = FUN_2c4d76a8(puVar13);
    *param_9 = (iVar3 - iVar12) + *param_9;
  }
  if ((param_1[0x308] != '\0') && (uVar10 != 0)) {
    param_1[0x318] = '\0';
    param_1[0x319] = '\0';
    param_1[0x31a] = '\0';
    param_1[0x31b] = '\0';
    param_1[0x304] = '\0';
    param_1[0x305] = '\0';
    param_1[0x306] = '\0';
    param_1[0x307] = '\0';
    param_1[0x308] = '\0';
    param_1[0x309] = '\0';
    param_1[0x30a] = '\0';
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18),param_1 + 0x304);
  }
  *param_8 = local_38;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_5c;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_64;
  }
  if (*DAT_2c4d2110 == local_34) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
code_r0x2c4d217e:
  if (uVar10 == 0) {
LAB_2c4d1f00:
    iVar12 = *(int *)(param_1 + 0x318);
    *(int *)(param_1 + 0x318) = iVar12 + -1;
    iVar12 = FUN_2c4d1e10(param_1 + 0x6c,(uint)(byte)param_1[0x7c] - (iVar12 + -1));
    uVar1 = *(ushort *)(param_1 + 0x78);
    if (iVar12 < 1) {
      local_5c = (undefined4 *)0x0;
    }
    if (param_2[9] == 0) {
      FUN_2c4d766c(puVar13,param_2[1]);
    }
    else if (param_2[1] != 0) {
      FUN_2c4d7598(puVar13,*param_2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar4 = FUN_2c4d76a8(puVar13);
    local_64 = (undefined4 *)(((uint)uVar1 * 8 - (iVar3 - iVar4)) - param_3);
    if ((int)local_64 < 1) {
      uVar10 = 0x102;
    }
    else {
      uVar10 = 0;
    }
    goto LAB_2c4d1fb8;
  }
LAB_2c4d2108:
  param_1[0x318] = '\0';
  param_1[0x319] = '\0';
  param_1[0x31a] = '\0';
  param_1[0x31b] = '\0';
  goto LAB_2c4d1fb8;
}

