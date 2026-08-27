/* FUN_2c612220 @ 0x2c612220 */

undefined1 FUN_2c612220(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  int local_24;
  
  local_24 = *DAT_2c612450;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar2 = FUN_2c62e148(*(undefined4 *)(param_2 + 4),param_2,param_3,0);
    iVar5 = FUN_2c66b624(uVar2,DAT_2c612458);
    if (iVar5 == 0) {
      iVar5 = FUN_2c62dd10(&local_30,*(undefined4 *)(param_2 + 4),2);
      if (iVar5 == 0) {
        puVar9 = *(undefined1 **)(param_2 + 0x24);
        if (puVar9 == (undefined1 *)0x0) {
          iVar5 = lv_mem_alloc(0x14);
          *(int *)(param_2 + 0x24) = iVar5;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c612464,0x15d,DAT_2c612460,DAT_2c61245c);
          }
          FUN_2c62c3b0(iVar5,0x14);
          puVar9 = *(undefined1 **)(param_2 + 0x24);
        }
        puVar7 = puVar9;
        puVar11 = &local_30;
        do {
          puVar8 = puVar7 + 1;
          *puVar7 = *(undefined1 *)puVar11;
          puVar7 = puVar8;
          puVar11 = (undefined2 *)((int)puVar11 + 1);
        } while (puVar9 + 0xc != puVar8);
        uVar6 = *(byte *)(param_2 + 0x14) & 0x1f;
        if ((uVar6 < 0x15) && ((int)((DAT_2c612454 >> uVar6) << 0x1f) < 0)) {
          if (*(char *)(param_2 + 0x10) == '\0') {
            iVar5 = *(int *)(*(int *)(param_2 + 4) + 8);
            goto LAB_2c612254;
          }
          goto LAB_2c612282;
        }
        goto LAB_2c6122c4;
      }
    }
    uVar10 = 0;
    goto LAB_2c612258;
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    iVar5 = *(int *)(*(int *)(param_2 + 4) + 8);
    uVar10 = 0;
    if (iVar5 == 0) goto LAB_2c612258;
    uVar6 = *(byte *)(param_2 + 0x14) & 0x1f;
    if ((uVar6 < 0x15) && ((int)((DAT_2c612454 >> uVar6) << 0x1f) < 0)) {
LAB_2c612254:
      uVar10 = 1;
      *(int *)(param_2 + 0x18) = iVar5;
      goto LAB_2c612258;
    }
LAB_2c6122c4:
    if (uVar6 - 7 < 4) {
      uVar6 = FUN_2c614f2c(uVar6);
      iVar5 = *(int *)(param_2 + 0x24);
      uVar12 = 1 << (uVar6 & 0xff);
      if (iVar5 == 0) {
        iVar5 = lv_mem_alloc(0x14);
        *(int *)(param_2 + 0x24) = iVar5;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c612464,0x189,DAT_2c612460,DAT_2c61245c);
        }
        FUN_2c62c3b0(iVar5,0x14);
        iVar5 = *(int *)(param_2 + 0x24);
      }
      uVar2 = lv_mem_alloc(4 << (uVar6 & 0xff));
      *(undefined4 *)(iVar5 + 0xc) = uVar2;
      iVar3 = lv_mem_alloc(uVar12);
      iVar4 = *(int *)(iVar5 + 0xc);
      *(int *)(iVar5 + 0x10) = iVar3;
      if ((iVar3 == 0) || (uVar6 = (uint)(iVar4 == 0), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c612464,0x195,DAT_2c612460,DAT_2c61245c);
      }
      if (*(char *)(param_2 + 0x10) == '\x01') {
        FUN_2c62e030(iVar5,4,uVar6);
        uVar10 = 1;
        if (uVar12 != 0) {
          do {
            FUN_2c62de74(iVar5,&local_30,4,0);
            iVar3 = *(int *)(iVar5 + 0xc);
            *(undefined2 *)(iVar3 + uVar6 * 4) = local_30;
            iVar3 = iVar3 + uVar6 * 4;
            *(undefined1 *)(iVar3 + 2) = local_2e;
            *(undefined1 *)(iVar3 + 3) = 0xff;
            *(undefined1 *)(*(int *)(iVar5 + 0x10) + uVar6) = local_2d;
            uVar6 = uVar6 + 1;
          } while (uVar12 != uVar6);
        }
        goto LAB_2c612258;
      }
      puVar9 = *(undefined1 **)(*(int *)(param_2 + 4) + 8);
      if (uVar12 != 0) {
        while( true ) {
          uVar10 = puVar9[2];
          uVar1 = puVar9[1];
          *(undefined1 *)(iVar4 + uVar6 * 4) = *puVar9;
          iVar4 = iVar4 + uVar6 * 4;
          *(undefined1 *)(iVar4 + 1) = uVar1;
          *(undefined1 *)(iVar4 + 2) = uVar10;
          *(undefined1 *)(iVar4 + 3) = 0xff;
          *(undefined1 *)(*(int *)(iVar5 + 0x10) + uVar6) = puVar9[3];
          uVar6 = uVar6 + 1;
          if (uVar12 == uVar6) break;
          iVar4 = *(int *)(iVar5 + 0xc);
          puVar9 = puVar9 + 4;
        }
      }
    }
    else if (2 < uVar6 - 0xb) {
      uVar10 = 0;
      FUN_2c6121ec(param_1,param_2);
      goto LAB_2c612258;
    }
  }
  else {
    uVar6 = *(byte *)(param_2 + 0x14) & 0x1f;
    if ((0x14 < uVar6) || (-1 < (int)((DAT_2c612454 >> uVar6) << 0x1f))) goto LAB_2c6122c4;
  }
LAB_2c612282:
  uVar10 = 1;
LAB_2c612258:
  if (*DAT_2c612450 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar10;
}

