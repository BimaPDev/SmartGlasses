/* FUN_2c4b31a0 @ 0x2c4b31a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4b31a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,int param_6,undefined1 param_7,float param_8,undefined1 *param_9
                )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iStack_5c;
  undefined4 *puStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  
  uStack_3c = *_LAB_2c4b34b4;
  iStack_5c = 0;
  puVar1 = param_5;
  if ((param_9 == (undefined1 *)0x0 || param_6 != 3) ||
     (fVar5 = (float)(uint)(param_5 == (undefined4 *)0x0), param_5 == (undefined4 *)0x0)) {
    iVar3 = 1;
  }
  else if (param_8 == 0.0) {
    *(undefined1 *)(param_5 + 4) = param_7;
    *param_5 = param_1;
    *(undefined1 *)((int)param_5 + 0x11) = 3;
    param_5[1] = param_2;
    param_5[2] = param_3;
    param_5[3] = param_4;
    *(undefined2 *)(param_5 + 0xc) = 0x101;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    iVar3 = 0;
  }
  else {
    FUN_2c674268(param_5,fVar5,0x44);
    fStack_54 = fVar5;
    fStack_50 = fVar5;
    fStack_4c = fVar5;
    fStack_48 = fVar5;
    fStack_44 = fVar5;
    fStack_40 = fVar5;
    puVar1 = (undefined4 *)FUN_2c4b4980(param_8);
    puStack_58 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = 2;
    }
    else {
      do {
        puVar4 = param_9 + 4;
        switch(*param_9) {
        case 0:
          fVar5 = (float)((int)fVar5 + 4);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 0;
          iStack_5c = iStack_5c + 4;
          break;
        case 1:
          fVar5 = (float)((int)fVar5 + 4);
          fStack_4c = fStack_54;
          fStack_44 = fStack_54;
          fStack_48 = fStack_50;
          fStack_40 = fStack_50;
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 1;
          iStack_5c = iStack_5c + 4;
          break;
        case 2:
          fStack_4c = *(float *)(param_9 + 4);
          fStack_48 = *(float *)(param_9 + 8);
          uVar6 = 2;
          fStack_54 = fStack_4c;
          fStack_50 = fStack_48;
          goto LAB_2c4b35f8;
        case 3:
          fVar12 = *(float *)(param_9 + 4);
          fVar13 = *(float *)(param_9 + 8);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 3;
          *(float *)((int)puStack_58 + iStack_5c + 4) = fVar12;
          *(float *)((int)puStack_58 + iStack_5c + 8) = fVar13;
          fStack_4c = fVar12 + fStack_4c;
          fStack_48 = fVar13 + fStack_48;
          fStack_54 = fStack_4c;
          fStack_50 = fStack_48;
          goto LAB_2c4b35c8;
        case 4:
          fStack_4c = *(float *)(param_9 + 4);
          fStack_48 = *(float *)(param_9 + 8);
          uVar6 = 4;
LAB_2c4b35f8:
          fVar5 = (float)((int)fVar5 + 0xc);
          puVar4 = param_9 + 0xc;
          *(undefined1 *)((int)puStack_58 + iStack_5c) = uVar6;
          *(float *)((int)puStack_58 + iStack_5c + 4) = fStack_4c;
          *(float *)((int)puStack_58 + iStack_5c + 8) = fStack_48;
          iStack_5c = iStack_5c + 0xc;
          fStack_44 = fStack_4c;
          fStack_40 = fStack_48;
          break;
        case 5:
          fVar12 = *(float *)(param_9 + 4);
          fVar13 = *(float *)(param_9 + 8);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 5;
          *(float *)((int)puStack_58 + iStack_5c + 4) = fVar12;
          *(float *)((int)puStack_58 + iStack_5c + 8) = fVar13;
          fStack_4c = fVar12 + fStack_4c;
          fStack_48 = fVar13 + fStack_48;
LAB_2c4b35c8:
          fVar5 = (float)((int)fVar5 + 0xc);
          puVar4 = param_9 + 0xc;
          iStack_5c = iStack_5c + 0xc;
          fStack_44 = fStack_4c;
          fStack_40 = fStack_48;
          break;
        case 6:
          fStack_44 = *(float *)(param_9 + 4);
          fStack_40 = *(float *)(param_9 + 8);
          fVar5 = (float)((int)fVar5 + 0x14);
          fStack_4c = *(float *)(param_9 + 0xc);
          puVar4 = param_9 + 0x14;
          fStack_48 = *(float *)(param_9 + 0x10);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 6;
          *(float *)((int)puStack_58 + iStack_5c + 4) = fStack_44;
          *(float *)((int)puStack_58 + iStack_5c + 8) = fStack_40;
          *(float *)((int)puStack_58 + iStack_5c + 0xc) = fStack_4c;
          *(float *)((int)puStack_58 + iStack_5c + 0x10) = fStack_48;
          iStack_5c = iStack_5c + 0x14;
          break;
        case 7:
          fStack_44 = *(float *)(param_9 + 4);
          fStack_40 = *(float *)(param_9 + 8);
          fVar5 = (float)((int)fVar5 + 0x14);
          fVar12 = *(float *)(param_9 + 0xc);
          puVar4 = param_9 + 0x14;
          fVar13 = *(float *)(param_9 + 0x10);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 7;
          *(float *)((int)puStack_58 + iStack_5c + 4) = fStack_44;
          *(float *)((int)puStack_58 + iStack_5c + 8) = fStack_40;
          *(float *)((int)puStack_58 + iStack_5c + 0xc) = fVar12;
          *(float *)((int)puStack_58 + iStack_5c + 0x10) = fVar13;
          fStack_44 = fStack_4c + fStack_44;
          fStack_40 = fStack_48 + fStack_40;
          iStack_5c = iStack_5c + 0x14;
          fStack_4c = fStack_4c + fVar12;
          fStack_48 = fStack_48 + fVar13;
          break;
        case 8:
          fStack_44 = *(float *)(param_9 + 0xc);
          fStack_40 = *(float *)(param_9 + 0x10);
          fVar5 = (float)((int)fVar5 + 0x1c);
          fStack_4c = *(float *)(param_9 + 0x14);
          puVar4 = param_9 + 0x1c;
          fStack_48 = *(float *)(param_9 + 0x18);
          uVar2 = *(undefined4 *)(param_9 + 4);
          uVar7 = *(undefined4 *)(param_9 + 8);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 8;
          *(undefined4 *)((int)puStack_58 + iStack_5c + 4) = uVar2;
          *(undefined4 *)((int)puStack_58 + iStack_5c + 8) = uVar7;
          *(float *)((int)puStack_58 + iStack_5c + 0xc) = fStack_44;
          *(float *)((int)puStack_58 + iStack_5c + 0x10) = fStack_40;
          *(float *)((int)puStack_58 + iStack_5c + 0x14) = fStack_4c;
          *(float *)((int)puStack_58 + iStack_5c + 0x18) = fStack_48;
          iStack_5c = iStack_5c + 0x1c;
          break;
        case 9:
          fStack_44 = *(float *)(param_9 + 0xc);
          uVar7 = *(undefined4 *)(param_9 + 4);
          uVar2 = *(undefined4 *)(param_9 + 8);
          fVar5 = (float)((int)fVar5 + 0x1c);
          fStack_40 = *(float *)(param_9 + 0x10);
          puVar4 = param_9 + 0x1c;
          fVar12 = *(float *)(param_9 + 0x14);
          fVar13 = *(float *)(param_9 + 0x18);
          *(undefined1 *)((int)puStack_58 + iStack_5c) = 9;
          *(undefined4 *)((int)puStack_58 + iStack_5c + 4) = uVar7;
          *(undefined4 *)((int)puStack_58 + iStack_5c + 8) = uVar2;
          *(float *)((int)puStack_58 + iStack_5c + 0xc) = fStack_44;
          *(float *)((int)puStack_58 + iStack_5c + 0x10) = fStack_40;
          *(float *)((int)puStack_58 + iStack_5c + 0x14) = fVar12;
          *(float *)((int)puStack_58 + iStack_5c + 0x18) = fVar13;
          fStack_44 = fStack_4c + fStack_44;
          fStack_40 = fStack_48 + fStack_40;
          iStack_5c = iStack_5c + 0x1c;
          fStack_4c = fStack_4c + fVar12;
          fStack_48 = fStack_48 + fVar13;
          break;
        case 10:
          uVar11 = *(undefined4 *)(param_9 + 0x14);
          uVar10 = *(undefined4 *)(param_9 + 0x10);
          uVar2 = 0;
          uVar9 = *(undefined4 *)(param_9 + 0xc);
          uVar8 = *(undefined4 *)(param_9 + 8);
          uVar7 = *(undefined4 *)(param_9 + 4);
          goto LAB_2c4b33aa;
        case 0xb:
          iVar3 = FUN_2c4b2cc8(*(undefined4 *)(param_9 + 4),*(undefined4 *)(param_9 + 8),
                               *(undefined4 *)(param_9 + 0xc),*(undefined4 *)(param_9 + 0x10),
                               *(undefined4 *)(param_9 + 0x14),0,0,1,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
          goto joined_r0x2c4b332c;
        case 0xc:
          iVar3 = FUN_2c4b2cc8(*(undefined4 *)(param_9 + 4),*(undefined4 *)(param_9 + 8),
                               *(undefined4 *)(param_9 + 0xc),*(undefined4 *)(param_9 + 0x10),
                               *(undefined4 *)(param_9 + 0x14),1,0,0,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
          goto joined_r0x2c4b33ec;
        case 0xd:
          uVar11 = *(undefined4 *)(param_9 + 0x14);
          uVar10 = *(undefined4 *)(param_9 + 0x10);
          uVar2 = 1;
          uVar9 = *(undefined4 *)(param_9 + 0xc);
          uVar8 = *(undefined4 *)(param_9 + 8);
          uVar7 = *(undefined4 *)(param_9 + 4);
LAB_2c4b33aa:
          iVar3 = FUN_2c4b2cc8(uVar7,uVar8,uVar9,uVar10,uVar11,uVar2,0,uVar2,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
joined_r0x2c4b33ec:
          puVar4 = param_9 + 0x18;
          fVar5 = (float)((int)fVar5 + 0x18);
          if (iVar3 == 0) break;
          goto LAB_2c4b332e;
        case 0xe:
          uVar11 = *(undefined4 *)(param_9 + 0x14);
          uVar10 = *(undefined4 *)(param_9 + 0x10);
          uVar2 = 0;
          uVar9 = *(undefined4 *)(param_9 + 0xc);
          uVar8 = *(undefined4 *)(param_9 + 8);
          uVar7 = *(undefined4 *)(param_9 + 4);
          goto LAB_2c4b32b6;
        case 0xf:
          iVar3 = FUN_2c4b2cc8(*(undefined4 *)(param_9 + 4),*(undefined4 *)(param_9 + 8),
                               *(undefined4 *)(param_9 + 0xc),*(undefined4 *)(param_9 + 0x10),
                               *(undefined4 *)(param_9 + 0x14),0,1,1,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
          goto joined_r0x2c4b332c;
        case 0x10:
          iVar3 = FUN_2c4b2cc8(*(undefined4 *)(param_9 + 4),*(undefined4 *)(param_9 + 8),
                               *(undefined4 *)(param_9 + 0xc),*(undefined4 *)(param_9 + 0x10),
                               *(undefined4 *)(param_9 + 0x14),1,1,0,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
          goto joined_r0x2c4b332c;
        case 0x11:
          uVar11 = *(undefined4 *)(param_9 + 0x14);
          uVar10 = *(undefined4 *)(param_9 + 0x10);
          uVar2 = 1;
          uVar9 = *(undefined4 *)(param_9 + 0xc);
          uVar8 = *(undefined4 *)(param_9 + 8);
          uVar7 = *(undefined4 *)(param_9 + 4);
LAB_2c4b32b6:
          iVar3 = FUN_2c4b2cc8(uVar7,uVar8,uVar9,uVar10,uVar11,uVar2,1,uVar2,&fStack_54,&puStack_58,
                               &iStack_5c,(int)param_8 - ((int)fVar5 + 0x18U));
joined_r0x2c4b332c:
          puVar4 = param_9 + 0x18;
          fVar5 = (float)((int)fVar5 + 0x18);
          if (iVar3 != 0) {
LAB_2c4b332e:
            puVar1 = (undefined4 *)FUN_2c4b4990(puStack_58);
            goto LAB_2c4b31d8;
          }
        }
        param_9 = puVar4;
      } while ((uint)fVar5 < (uint)param_8);
      *(undefined1 *)((int)param_5 + 0x11) = 3;
      param_5[10] = iStack_5c;
      iVar3 = 0;
      *(undefined1 *)(param_5 + 4) = param_7;
      *param_5 = param_1;
      param_5[1] = param_2;
      param_5[2] = param_3;
      param_5[3] = param_4;
      param_5[0xb] = puStack_58;
      *(undefined2 *)(param_5 + 0xc) = 0x101;
      param_5[7] = 0;
      param_5[8] = 0;
      param_5[5] = 0;
      param_5[6] = 0;
      puVar1 = puStack_58;
    }
  }
LAB_2c4b31d8:
  if ((*_LAB_2c4b34b4 ^ uStack_3c) == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(puVar1,*_LAB_2c4b34b4 ^ uStack_3c,0);
}

