/* FUN_2c632900 @ 0x2c632900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c632900(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *_LAB_2c6329e0;
  uVar7 = FUN_2c5ff4d8();
  iVar8 = FUN_2c5ff624();
  if (iVar8 != 0) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x38);
    if (*_LAB_2c6329e0 == uStack_14) {
      iVar8 = *DAT_2c607e4c;
      sVar2 = FUN_2c600c2c();
      uStack_14 = CONCAT22(*(short *)(param_1 + 0x16) - sVar2,*(short *)(param_1 + 0x14) - sVar2);
      FUN_2c6078f0(param_1,&uStack_14);
      if (*DAT_2c607e4c != iVar8) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    goto LAB_2c6329dc;
  }
  iVar8 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x24),1);
  if (iVar8 != 0) {
    if (*_LAB_2c6329e0 != uStack_14) goto LAB_2c6329dc;
    FUN_2c606b6c(param_1,1,0,0);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = FUN_2c604178(param_1);
    FUN_2c604458(uVar10,uVar7);
    FUN_2c604550(*(undefined4 *)(param_1 + 0x24),0xffffffff);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
    FUN_2c602340(param_1,0x1f,0);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar7 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0);
    }
    FUN_2c63888c(uVar7,*(undefined4 *)(param_1 + 0x30));
    FUN_2c6070bc(*(undefined4 *)(param_1 + 0x24),0x27d1);
    FUN_2c608c7c(uVar7);
    iVar8 = FUN_2c6073ec(*(undefined4 *)(param_1 + 0x24));
    iVar6 = FUN_2c6073ec(param_1);
    if ((iVar8 <= iVar6) && ((bVar9 = *(byte *)(param_1 + 0x3c) & 0xf, bVar9 == 4 || (bVar9 == 8))))
    {
      uVar11 = *(undefined4 *)(param_1 + 0x24);
      uVar10 = FUN_2c6073ec(param_1);
      FUN_2c6070bc(uVar11,uVar10);
    }
    sVar2 = FUN_2c6073f8(uVar7);
    sVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x32);
    sVar4 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x10);
    sVar5 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x11);
    bVar9 = *(byte *)(param_1 + 0x3c) & 0xf;
    iVar8 = (int)(short)(sVar4 + sVar5 + sVar3 * 2 + sVar2);
    if (bVar9 == 8) {
      sVar2 = *(short *)(param_1 + 0x1a);
      FUN_2c62a470();
      iVar6 = FUN_2c62a4a0();
      if (sVar2 + iVar8 <= iVar6) goto LAB_2c632772;
      sVar2 = *(short *)(param_1 + 0x16);
      FUN_2c62a470();
      iVar6 = FUN_2c62a4a0();
      if ((int)sVar2 <= iVar6 - *(short *)(param_1 + 0x1a)) {
        FUN_2c62a470();
        sVar2 = FUN_2c62a4a0();
        iVar6 = (int)(short)(~*(ushort *)(param_1 + 0x1a) + sVar2);
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
        goto LAB_2c632772;
      }
      iVar6 = (int)(short)(*(short *)(param_1 + 0x16) + -1);
      if (iVar8 <= iVar6) {
        iVar6 = iVar8;
      }
      FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar6);
      FUN_2c63202c(param_1);
LAB_2c632876:
      FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,10,0,0);
    }
    else {
      if ((bVar9 == 4) && (sVar2 = *(short *)(param_1 + 0x16), sVar2 - iVar8 < 0)) {
        FUN_2c62a470();
        iVar6 = FUN_2c62a4a0();
        if (iVar6 - *(short *)(param_1 + 0x1a) <= (int)sVar2) {
          if (*(short *)(param_1 + 0x16) <= iVar8) {
            iVar8 = (int)*(short *)(param_1 + 0x16);
          }
          goto LAB_2c632772;
        }
        FUN_2c62a470();
        sVar2 = FUN_2c62a4a0();
        iVar6 = (int)(short)(sVar2 - *(short *)(param_1 + 0x1a));
        if (iVar8 <= iVar6) {
          iVar6 = iVar8;
        }
        FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar6);
        FUN_2c63202c(param_1);
      }
      else {
LAB_2c632772:
        FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar8);
        FUN_2c63202c(param_1);
        if (bVar9 != 8) {
          if (bVar9 != 4) {
            if (bVar9 == 1) {
              FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0x10,0,0);
            }
            else if (bVar9 == 2) {
              FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0x13,0,0);
            }
            goto LAB_2c632796;
          }
          goto LAB_2c632876;
        }
      }
      FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0xd,0,0);
    }
LAB_2c632796:
    FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
    if ((*(byte *)(param_1 + 0x3c) & 0xf) - 1 < 2) {
      sVar2 = FUN_2c607394(*(undefined4 *)(param_1 + 0x24));
      iVar8 = FUN_2c6073d4(*(undefined4 *)(param_1 + 0x24));
      FUN_2c62a470();
      iVar6 = FUN_2c62a4a0();
      if (iVar6 <= iVar8) {
        uVar10 = *(undefined4 *)(param_1 + 0x24);
        FUN_2c62a470();
        sVar3 = FUN_2c62a4a0();
        FUN_2c606ff8(uVar10,(int)(short)(sVar3 + ((sVar2 + -1) - (short)iVar8)));
      }
    }
    iVar8 = FUN_2c604148(uVar7,0,*(undefined4 *)(param_1 + 0x30));
    if ((iVar8 != 2) && (iVar8 != 3)) {
      iVar8 = 1;
    }
    FUN_2c6072bc(uVar7,iVar8,0);
    return;
  }
  FUN_2c606b80(param_1,1);
  *(undefined2 *)(param_1 + 0x3a) = 0xffff;
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
  FUN_2c602340(param_1,0x20,0);
  uVar1 = *(ushort *)(param_1 + 0x36);
  if ((uint)*(ushort *)(param_1 + 0x38) == (uint)uVar1) {
LAB_2c6329b2:
    iVar8 = FUN_2c5ff4e4(uVar7);
    if (iVar8 == 4) {
      iVar8 = FUN_2c606bc0(param_1);
      if (*_LAB_2c6329e0 == uStack_14) {
        if (iVar8 == 0) {
          return;
        }
        if ((int)((uint)*(byte *)(iVar8 + 0x1c) << 0x1e) < 0) {
          *(byte *)(iVar8 + 0x1c) = *(byte *)(iVar8 + 0x1c) & 0xfd;
          if ((*(int **)(iVar8 + 0xc) != (int *)0x0) &&
             (iVar8 = **(int **)(iVar8 + 0xc), iVar8 != 0)) {
            uVar7 = FUN_2c602bd8();
            iVar6 = FUN_2c602340(iVar8,0xe,uVar7);
            if (iVar6 == 1) {
              FUN_2c607df0(iVar8);
              return;
            }
          }
        }
        return;
      }
      goto LAB_2c6329dc;
    }
  }
  else {
    *(ushort *)(param_1 + 0x38) = uVar1;
    uStack_18 = (uint)uVar1;
    iVar8 = FUN_2c602340(param_1,0x1c,&uStack_18);
    if (iVar8 == 1) {
      FUN_2c607df0(param_1);
      goto LAB_2c6329b2;
    }
  }
  if (*_LAB_2c6329e0 == uStack_14) {
    return;
  }
LAB_2c6329dc:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

