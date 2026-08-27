/* FUN_2c4a72aa @ 0x2c4a72aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a72aa(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 unaff_lr;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar14;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  int iStack_8;
  
  do {
    piVar13 = unaff_r7;
    puVar12 = (undefined4 *)register0x00000054;
    if ((bool)in_CY && !(bool)in_ZR) goto LAB_2c4a7320;
    iVar6 = unaff_r4 + -1;
    if (iVar6 == 0 || unaff_r4 < 1) {
      iVar6 = unaff_r4 + -2;
    }
    param_1 = (int)piVar13 << 1;
    in_CY = iVar6 != 0;
    unaff_r4 = iVar6 + -1;
    in_ZR = unaff_r4 == 0;
    unaff_r7 = piVar13 + 2;
  } while (iVar6 < 1);
  piVar3 = (int *)piVar13[2];
  iVar6 = piVar13[4];
  iVar9 = piVar13[5];
  piVar14 = piVar13 + 7;
  iVar4 = *piVar3;
  iVar10 = piVar3[2];
  puVar11 = (undefined4 *)register0x00000054;
  if (iVar6 == 2 || iVar6 + -1 < 1) {
    if (!SBORROW4(iVar6 + -2,1)) {
      if (iVar6 + -2 < 1) {
SUB_2c4a6030:
        FUN_2c4a62bc(param_1);
        uVar8 = puVar12[4];
        puVar12[5] = puVar12[5];
        puVar12[4] = unaff_r8;
        puVar12[3] = piVar14;
        puVar12[2] = iVar10;
        puVar12[1] = iVar9;
        *puVar12 = uVar8;
        puVar12[-10] = _LAB_2c4a6274;
        puVar12[-9] = _LAB_2c4a6278;
        puVar12[-8] = 0x2e4;
        puVar12[-7] = 1;
        puVar12[-1] = *_LAB_2c4a6280;
        puVar12[-4] = 0;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2e4,_LAB_2c4a627c,_LAB_2c4a6284);
      }
      *piVar14 = iVar4;
      piVar13[8] = iVar9;
      piVar13[9] = iVar10;
      piVar13[10] = (int)piVar14;
      iVar6 = iVar6 + -5;
      iVar5 = *DAT_2c4a7430;
      puVar12 = &local_18;
      piVar13 = &local_18;
      iStack_8 = iVar6;
      if (iVar5 == 1) {
        param_1 = *DAT_2c4a7444;
        iVar6 = FUN_2c4a578c(0x4c,0);
        if (iVar6 != 0) {
          FUN_2c4a578c(0x4c,0);
        }
        FUN_2c6444fc(5);
        iVar6 = FUN_2c4a578c(0x2c,0xa5);
        if ((iVar6 != 0) && (iVar6 = FUN_2c4a578c(0x2c,0xa5), iVar6 != 0)) {
          local_18 = DAT_2c4a744c;
          local_14 = DAT_2c4a7448;
          uStack_10 = 0x6c9;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x6c9,DAT_2c4a7440,DAT_2c4a743c);
        }
        FUN_2c6444fc(100);
        goto SUB_2c4a6030;
      }
      if (iVar5 == 2) {
        bVar1 = false;
        goto LAB_2c4a4988;
      }
      if (iVar5 == 3) {
        bVar1 = false;
        goto LAB_2c49e72c;
      }
      if (iVar5 != 4) {
        param_2 = 0x7e7;
        param_1 = DAT_2c4a7438;
        iVar6 = DAT_2c4a7434;
        goto LAB_2c4a7394;
      }
      bVar1 = false;
      goto LAB_2c4a0f4c;
    }
    if (1 < iVar6 - 3U) {
      param_5 = uRam2c4a72c8;
      param_6 = iVar10;
      param_7 = param_2;
      param_9 = piVar3[1];
                    /* WARNING: Subroutine does not return */
      TRACE(param_1,param_2,uRam2c4a72bc,uRam2c4a72b8);
    }
    iVar9 = piVar13[8];
    iVar4 = *(int *)*piVar14;
    iVar6 = iVar9 + -2;
    piVar13 = (int *)register0x00000054;
    if (iVar9 != 1 && iVar9 + -2 != 0) {
LAB_2c4a7394:
      *piVar13 = param_1;
      piVar13[1] = iVar6;
      piVar13[2] = param_2;
                    /* WARNING: Subroutine does not return */
      TRACE(4,param_2,DAT_2c4a7440,DAT_2c4a743c);
    }
    iStack_8 = iVar9 + -3;
    param_2 = *DAT_2c4a7358;
    puVar12 = local_20;
    puVar11 = local_20;
    if (param_2 == 1) {
      local_c = param_2;
      param_1 = FUN_2c4a578c(0x4c,1,iVar4);
LAB_2c4a7320:
      if (param_1 != 0) {
        FUN_2c4a578c(0x4c,*(undefined4 *)((int)puVar12 + 0x14));
      }
      uVar2 = 0x7bc;
      uVar8 = uRam2c4a7370;
      uVar7 = uRam2c4a736c;
      goto LAB_2c4a7304;
    }
    iVar6 = iStack_8;
    if (param_2 == 2) {
      bVar1 = true;
LAB_2c4a4988:
      local_c = *_LAB_2c4a4a54;
      local_14 = 0;
      uStack_10 = 0;
      iStack_8 = iVar6;
      if (bVar1) {
        iVar6 = FUN_2c4a41bc(0x104,0,iVar4,0);
        if (iVar6 != 0) {
          FUN_2c4a41bc(0x104,0);
        }
        local_14 = 0xf;
        iVar6 = FUN_2c4a41bc(0x100);
        if (iVar6 != 0) {
          FUN_2c4a41bc(0x100,0xf);
        }
        FUN_2c4a4514(0x100,&local_14);
        local_20[0] = 0x29e;
        uVar8 = _LAB_2c4a4a5c;
      }
      else {
        local_14 = 0x707;
        iVar6 = FUN_2c4a41bc(0x104,0x707,iVar4,0);
        if (iVar6 != 0) {
          FUN_2c4a41bc(0x104,0x707);
        }
        local_14 = 0xf;
        iVar6 = FUN_2c4a41bc(0x100);
        if (iVar6 != 0) {
          FUN_2c4a41bc(0x100,0xf);
        }
        FUN_2c4a4514(0x100,&local_14);
        local_20[0] = 0x2ac;
        uVar8 = _LAB_2c4a4a68;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,local_20[0],_LAB_2c4a4a64,_LAB_2c4a4a60,uVar8,_LAB_2c4a4a58);
    }
    if (param_2 == 3) {
      bVar1 = true;
LAB_2c49e72c:
      local_c = *_LAB_2c49e7fc;
      local_14 = 0;
      uStack_10 = 0;
      iStack_8 = iVar6;
      if (bVar1) {
        iVar6 = FUN_2c49e080(0x104,0,iVar4,0);
        if (iVar6 != 0) {
          FUN_2c49e080(0x104,0);
        }
        local_14 = 0xf;
        iVar6 = FUN_2c49e080(0x100);
        if (iVar6 != 0) {
          FUN_2c49e080(0x100,0xf);
        }
        FUN_2c49e3b0(0x100,&local_14);
        local_20[0] = _LAB_2c49e800;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x344,_LAB_2c49e808,_LAB_2c49e804);
      }
      local_14 = 0x3f3f;
      iVar6 = FUN_2c49e080(0x104,0x3f3f,iVar4,0);
      if (iVar6 != 0) {
        FUN_2c49e080(0x104,0x3f3f);
      }
      local_14 = 0xf;
      iVar6 = FUN_2c49e080(0x100);
      if (iVar6 != 0) {
        FUN_2c49e080(0x100,0xf);
      }
      uVar8 = _LAB_2c49e80c;
      FUN_2c49e3b0(0x100,&local_14);
      local_20[0] = uVar8;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x352,_LAB_2c49e808,_LAB_2c49e804);
    }
  }
  if (param_2 != 4) {
    uVar2 = 0x7d8;
    uVar8 = DAT_2c4a7360;
    uVar7 = DAT_2c4a735c;
    puVar12 = puVar11;
LAB_2c4a7304:
    *puVar12 = uVar8;
    puVar12[1] = uVar7;
    puVar12[2] = uVar2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,uVar2,DAT_2c4a7368,DAT_2c4a7364);
  }
  bVar1 = true;
  iVar6 = *(int *)((int)puVar11 + 0x18);
  unaff_lr = *(undefined4 *)((int)puVar11 + 0x1c);
  register0x00000054 = (BADSPACEBASE *)((int)puVar11 + 0x20);
LAB_2c4a0f4c:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = iVar6;
  *(undefined4 *)((int)register0x00000054 + -0xc) = *_LAB_2c4a101c;
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
  if (bVar1) {
    iVar6 = FUN_2c4a05cc(0x104,0,iVar4,0);
    if (iVar6 != 0) {
      FUN_2c4a05cc(0x104,0);
    }
    *(undefined4 *)((int)register0x00000054 + -0x14) = 0xf;
    iVar6 = FUN_2c4a05cc(0x100);
    if (iVar6 != 0) {
      FUN_2c4a05cc(0x100,0xf);
    }
    FUN_2c4a09bc(0x100,(undefined1 *)((int)register0x00000054 + -0x14));
    *(undefined4 *)((int)register0x00000054 + -0x20) = _LAB_2c4a1020;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2de,_LAB_2c4a1028,_LAB_2c4a1024);
  }
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0xf0f;
  iVar6 = FUN_2c4a05cc(0x104,0xf0f,iVar4,0);
  if (iVar6 != 0) {
    FUN_2c4a05cc(0x104,0xf0f);
  }
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0xf;
  iVar6 = FUN_2c4a05cc(0x100);
  if (iVar6 != 0) {
    FUN_2c4a05cc(0x100,0xf);
  }
  uVar8 = _LAB_2c4a102c;
  FUN_2c4a09bc(0x100,(undefined1 *)((int)register0x00000054 + -0x14));
  *(undefined4 *)((int)register0x00000054 + -0x20) = uVar8;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2ec,_LAB_2c4a1028,_LAB_2c4a1024);
}

