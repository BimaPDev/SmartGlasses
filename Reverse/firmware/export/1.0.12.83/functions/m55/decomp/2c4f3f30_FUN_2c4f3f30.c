/* FUN_2c4f3f30 @ 0x2c4f3f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4f3f30(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uStack_50;
  undefined4 auStack_4c [2];
  uint auStack_44 [3];
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c4f41e0;
  auStack_4c[0] = param_3;
  if (((int)(param_4 << 0x1e) < 0) && (uVar2 = FUN_2c4f3d9c(), uVar2 != 0)) goto LAB_2c4f4048;
  param_2[0x14] = param_5;
  puVar5 = param_2 + 2;
  param_2[0xf] = 0;
  param_2[0x13] = 0;
  param_2[0xc] = param_4;
  param_2[0xd] = 0;
  uVar2 = FUN_2c4f278c(param_1,puVar5,auStack_4c,param_2 + 1);
  uVar1 = auStack_4c[0];
  if ((int)uVar2 < 0) {
    if ((uVar2 == 0xfffffffe) && (*(short *)(param_2 + 1) != 0x3ff)) {
      *(undefined1 *)((int)param_2 + 6) = 1;
      *param_2 = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 **)(param_1 + 0x28) = param_2;
      if ((int)(param_4 << 0x17) < 0) {
        uVar2 = FUN_2c66c4ec(auStack_4c[0]);
        uStack_50 = _LAB_2c4f41e4;
        if (uVar2 <= *(uint *)(param_1 + 0x6c)) {
          uVar4 = (uint)*(ushort *)(param_2 + 1);
          uStack_38 = uVar1;
          auStack_44[1] = 0;
          auStack_44[2] = uVar2 | uVar4 << 10 | 0x100000;
          uStack_30 = 0;
          auStack_44[0] = _LAB_2c4f41e8 | uVar4 << 10;
          uStack_34 = _LAB_2c4f41e4 | uVar4 << 10;
          iVar7 = FUN_2c4f384c(param_1,puVar5,auStack_44,3);
          if (iVar7 == 0) {
            goto LAB_2c4f3fb4;
          }
        }
        uVar2 = 0xffffffdc;
      }
    }
LAB_2c4f4066:
    uVar4 = param_2[0xc];
  }
  else {
    *(undefined1 *)((int)param_2 + 6) = 1;
    *param_2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 **)(param_1 + 0x28) = param_2;
    if ((int)(param_4 << 0x16) < 0) {
      uVar4 = param_2[0xc];
      uVar2 = 0xffffffef;
    }
    else {
      if (uVar2 >> 0x14 == 1) {
        if ((param_4 & 0x400) == 0) {
          uVar2 = FUN_2c4f221c(param_1,puVar5,_DAT_2c4f41f0,
                               _LAB_2c4f41ec | (uint)*(ushort *)(param_2 + 1) << 10,0,param_2 + 10,8
                              );
          uStack_50 = uVar2;
          if ((int)uVar2 < 0) {
            uVar4 = param_2[0xc];
            goto LAB_2c4f4068;
          }
        }
        else {
          uStack_50 = _LAB_2c4f41e4 | (uint)*(ushort *)(param_2 + 1) << 10;
          param_2[0xc] = param_2[0xc] | 0x10000;
        }
LAB_2c4f3fb4:
        uVar1 = _DAT_2c4f41f4;
        piVar3 = (int *)param_2[0x14];
        if (piVar3[2] != 0) {
          iVar7 = 0;
          uVar8 = 0;
          do {
            uVar4 = param_2[0xc];
            if ((int)(uVar4 << 0x1f) < 0) {
              iVar9 = piVar3[1] + iVar7;
              uVar2 = *(uint *)(iVar9 + 8);
              uVar2 = FUN_2c4f221c(param_1,puVar5,uVar1,
                                   uVar2 | (uint)*(ushort *)(param_2 + 1) << 10 |
                                   (*(byte *)(piVar3[1] + iVar7) + 0x300) * 0x100000,0,
                                   *(undefined4 *)(iVar9 + 4),uVar2 & 0x3ff);
              uVar4 = param_2[0xc];
              if (((int)uVar2 < 0) && (uVar2 != 0xfffffffe)) goto LAB_2c4f4068;
              piVar3 = (int *)param_2[0x14];
            }
            if ((int)(uVar4 << 0x1e) < 0) {
              if (*(uint *)(param_1 + 0x74) < *(uint *)(piVar3[1] + iVar7 + 8)) {
                uVar2 = 0xffffffe4;
                goto LAB_2c4f4068;
              }
              param_2[0xc] = uVar4 | 0x10000;
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 0xc;
          } while (uVar8 < (uint)piVar3[2]);
        }
        iVar7 = *piVar3;
        if (iVar7 == 0) {
          iVar7 = FUN_2c47245c(2,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
          param_2[0x13] = iVar7;
          if (iVar7 == 0) {
            uVar4 = param_2[0xc];
            uVar2 = 0xfffffff4;
            goto LAB_2c4f4068;
          }
        }
        else {
          param_2[0x13] = iVar7;
        }
        FUN_2c674268(iVar7,0xff,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
        param_2[0x10] = 0xffffffff;
        if (uStack_50 >> 0x14 == 0x201) {
          param_2[10] = 0xfffffffe;
          param_2[0x10] = 0xfffffffe;
          param_2[0xb] = uStack_50 & 0x3ff;
          param_2[0x11] = 0;
          param_2[0xc] = param_2[0xc] | 0x100000;
          uVar2 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
          param_2[0x12] = uVar2;
          if ((uStack_50 & 0x3ff) != 0) {
            if (0x3fd < uVar2) {
              uVar2 = 0x3fe;
            }
            uVar2 = FUN_2c4f221c(param_1,puVar5,_DAT_2c4f41f0,
                                 uVar2 | (uint)*(ushort *)(param_2 + 1) << 10 | 0x20000000,0,
                                 param_2[0x13],uVar2 & 0x3ff);
            if ((int)uVar2 < 0) goto LAB_2c4f4066;
          }
        }
        uVar2 = 0;
        goto LAB_2c4f4048;
      }
      uVar4 = param_2[0xc];
      uVar2 = 0xffffffeb;
    }
  }
LAB_2c4f4068:
  param_2[0xc] = uVar4 | 0x80000;
  func_0x2c4f3ce8(param_1,param_2);
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5 == param_2) {
      puVar6 = (undefined4 *)(param_1 + 0x28);
    }
    else {
      do {
        puVar6 = puVar5;
        puVar5 = (undefined4 *)*puVar6;
        if (puVar5 == (undefined4 *)0x0) {
          iVar7 = *(int *)param_2[0x14];
          goto joined_r0x2c4f4094;
        }
      } while (param_2 != puVar5);
    }
    *puVar6 = *puVar5;
  }
  iVar7 = *(int *)param_2[0x14];
joined_r0x2c4f4094:
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(2,param_2[0x13]);
  }
LAB_2c4f4048:
  if (*_LAB_2c4f41e0 == iStack_2c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

