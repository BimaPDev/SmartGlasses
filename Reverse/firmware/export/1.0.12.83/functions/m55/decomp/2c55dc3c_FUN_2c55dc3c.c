/* FUN_2c55dc3c @ 0x2c55dc3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55dc3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined1 auStack_d4 [2];
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined4 uStack_d0;
  undefined1 auStack_7c [88];
  int iStack_24;
  
  iStack_24 = *_LAB_2c55df28;
  uVar4 = FUN_2c606a10(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if (iVar8 != 0) {
    FUN_2c58d410(param_1 + 0x14);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
  }
  uVar3 = _LAB_2c55df3c;
  uVar5 = lv_mem_alloc(0x5600);
  uVar6 = _DAT_2c55df2c;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  FUN_2c603a04(uVar4,0,uVar6);
  FUN_2c607048(uVar4,0x280,0x58);
  FUN_2c606fa8(uVar4,0);
  FUN_2c606ff8(uVar4,0xffffffd4);
  FUN_2c6072b4(uVar4,5);
  lv_obj_add_flag_invalidate(uVar4,1);
  uVar6 = FUN_2c637344(uVar4);
  puVar7 = (undefined4 *)FUN_2c64ca5c(0x10);
  piVar12 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  puVar7[3] = uVar6;
  *puVar7 = uVar3;
  *(undefined4 **)(param_1 + 0x1c) = puVar7;
  puVar7[1] = 1;
  puVar7[2] = 1;
  if (piVar12 != (int *)0x0) {
    iVar8 = piVar12[1];
    piVar12[1] = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      iVar8 = piVar12[2];
      piVar12[2] = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_2c606ff8(uVar6,0);
  FUN_2c6072b4(uVar6,2);
  FUN_2c607048(uVar6,0x280,0x18);
  FUN_2c638730(uVar6,_LAB_2c55df30);
  FUN_2c606d60(uVar6,0xff00ff00,0);
  FUN_2c606d6c(uVar6,0);
  FUN_2c606e5c(uVar6,2,0);
  FUN_2c606e20(uVar6,0xff00ff00,0);
  FUN_2c606e2c(uVar6,0xff,0);
  uVar5 = FUN_2c5e2e80(_LAB_2c55df34);
  FUN_2c606e38(uVar6,uVar5,0);
  lv_obj_add_flag_invalidate(uVar6,1);
  uVar4 = func_0x2c639728(uVar4);
  puVar7 = (undefined4 *)FUN_2c64ca5c(0x10);
  piVar12 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *puVar7 = uVar3;
  puVar7[3] = uVar4;
  *(undefined4 **)(param_1 + 0x24) = puVar7;
  puVar7[1] = 1;
  puVar7[2] = 1;
  if (piVar12 != (int *)0x0) {
    iVar8 = piVar12[1];
    piVar12[1] = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      iVar8 = piVar12[2];
      piVar12[2] = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  iVar11 = 0;
  FUN_2c603a04(uVar4,0,_DAT_2c55df2c);
  FUN_2c607048(uVar4,0xac,0x20);
  FUN_2c6072b4(uVar4,5);
  FUN_2c606f34(uVar4,0,0xfffffff2);
  FUN_2c606abc(uVar4,0x10);
  FUN_2c606d60(uVar4,0xff00ff00,0);
  FUN_2c606d6c(uVar4,0);
  FUN_2c606d9c(uVar4,0);
  FUN_2c606abc(uVar4,0x10);
  func_0x2c639740(uVar4,*(undefined4 *)(param_1 + 0x40),0xac,0x20,5);
  uVar2 = _LAB_2c55df38;
  FUN_2c639778(uVar4,0xff000000,0);
  iVar8 = param_1;
  do {
    FUN_2c61314c(auStack_d4);
    iVar9 = 0x12 - iVar11;
    uStack_d0 = 0xff00ff00;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    uStack_d2 = 0;
    uStack_d1 = (undefined1)
                (uint)((ulonglong)uVar2 * (ulonglong)(uint)((iVar9 * -5 + 100) * 0xff) >> 0x25);
    FUN_2c674668(auStack_7c,auStack_d4,0x58);
    iVar9 = iVar11 << 2;
    sVar1 = (short)iVar11;
    iVar11 = iVar11 + 1;
    *(short *)(iVar8 + 0x44) = sVar1 + (short)iVar9;
    *(undefined2 *)(iVar8 + 0x46) = 0;
    *(undefined2 *)(iVar8 + 0x48) = 2;
    *(undefined2 *)(iVar8 + 0x4a) = 0;
    FUN_2c674668(iVar8 + 0x4c,auStack_7c,0x58);
    iVar8 = iVar8 + 0x60;
  } while (iVar11 != 0x23);
  puVar7 = *(undefined4 **)(param_1 + 0x2c);
  uStack_dc = *(undefined4 *)(param_1 + 0x20);
  piStack_d8 = *(int **)(param_1 + 0x24);
  pcVar10 = *(code **)*puVar7;
  if (piStack_d8 != (int *)0x0) {
    piStack_d8[1] = piStack_d8[1] + 1;
  }
  (*pcVar10)(puVar7,&uStack_dc);
  piVar12 = piStack_d8;
  if ((piStack_d8 != (int *)0x0) &&
     (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*piStack_d8 + 8))(piStack_d8);
    iVar8 = piVar12[2];
    piVar12[2] = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
  }
  piStack_f8 = *(int **)(param_1 + 0xc);
  iVar8 = (int)*(int **)(param_1 + 0x2c) + *(int *)(**(int **)(param_1 + 0x2c) + -0x10);
  if ((piStack_f8 != (int *)0x0) && (piStack_f8[1] != 0)) {
    piStack_f8[1] = piStack_f8[1] + 1;
    uStack_fc = *(undefined4 *)(param_1 + 8);
    func_0x2c55d278(iVar8,&uStack_fc);
    piVar12 = piStack_f8;
    if ((piStack_f8 != (int *)0x0) &&
       (iVar8 = piStack_f8[1], piStack_f8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*piStack_f8 + 8))(piStack_f8);
      iVar8 = piVar12[2];
      piVar12[2] = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 0x3c);
    uStack_dc = *(undefined4 *)(param_1 + 0x20);
    piStack_d8 = *(int **)(param_1 + 0x24);
    pcVar10 = *(code **)*puVar7;
    if (piStack_d8 != (int *)0x0) {
      piStack_d8[1] = piStack_d8[1] + 1;
    }
    (*pcVar10)(puVar7,&uStack_dc);
    piVar12 = piStack_d8;
    if ((piStack_d8 != (int *)0x0) &&
       (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*piStack_d8 + 8))(piStack_d8);
      iVar8 = piVar12[2];
      piVar12[2] = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
    }
    piStack_f0 = *(int **)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0x3c);
    if ((piStack_f0 != (int *)0x0) && (piStack_f0[1] != 0)) {
      piStack_f0[1] = piStack_f0[1] + 1;
      uStack_f4 = *(undefined4 *)(param_1 + 8);
      func_0x2c55d278(iVar8,&uStack_f4);
      piVar12 = piStack_f0;
      if ((piStack_f0 != (int *)0x0) &&
         (iVar8 = piStack_f0[1], piStack_f0[1] = iVar8 + -1, iVar8 + -1 == 0)) {
        (**(code **)(*piStack_f0 + 8))(piStack_f0);
        iVar8 = piVar12[2];
        piVar12[2] = iVar8 + -1;
        if (iVar8 + -1 == 0) {
          (**(code **)(*piVar12 + 0xc))(piVar12);
        }
      }
      puVar7 = *(undefined4 **)(param_1 + 0x38);
      uStack_dc = *(undefined4 *)(param_1 + 0x20);
      piStack_d8 = *(int **)(param_1 + 0x24);
      pcVar10 = *(code **)*puVar7;
      if (piStack_d8 != (int *)0x0) {
        piStack_d8[1] = piStack_d8[1] + 1;
      }
      (*pcVar10)(puVar7,&uStack_dc);
      piVar12 = piStack_d8;
      if ((piStack_d8 != (int *)0x0) &&
         (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
        (**(code **)(*piStack_d8 + 8))(piStack_d8);
        iVar8 = piVar12[2];
        piVar12[2] = iVar8 + -1;
        if (iVar8 + -1 == 0) {
          (**(code **)(*piVar12 + 0xc))(piVar12);
        }
      }
      piStack_e8 = *(int **)(param_1 + 0xc);
      iVar8 = (int)*(int **)(param_1 + 0x38) + *(int *)(**(int **)(param_1 + 0x38) + -0x10);
      if ((piStack_e8 != (int *)0x0) && (piStack_e8[1] != 0)) {
        piStack_e8[1] = piStack_e8[1] + 1;
        uStack_ec = *(undefined4 *)(param_1 + 8);
        func_0x2c55d278(iVar8,&uStack_ec);
        piVar12 = piStack_e8;
        if ((piStack_e8 != (int *)0x0) &&
           (iVar8 = piStack_e8[1], piStack_e8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
          (**(code **)(*piStack_e8 + 8))(piStack_e8);
          iVar8 = piVar12[2];
          piVar12[2] = iVar8 + -1;
          if (iVar8 + -1 == 0) {
            (**(code **)(*piVar12 + 0xc))(piVar12);
          }
        }
        puVar7 = *(undefined4 **)(param_1 + 0x34);
        uStack_dc = *(undefined4 *)(param_1 + 0x20);
        piStack_d8 = *(int **)(param_1 + 0x24);
        pcVar10 = *(code **)*puVar7;
        if (piStack_d8 != (int *)0x0) {
          piStack_d8[1] = piStack_d8[1] + 1;
        }
        (*pcVar10)(puVar7,&uStack_dc);
        piVar12 = piStack_d8;
        if ((piStack_d8 != (int *)0x0) &&
           (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
          (**(code **)(*piStack_d8 + 8))(piStack_d8);
          iVar8 = piVar12[2];
          piVar12[2] = iVar8 + -1;
          if (iVar8 + -1 == 0) {
            (**(code **)(*piVar12 + 0xc))(piVar12);
          }
        }
        piStack_e0 = *(int **)(param_1 + 0xc);
        iVar8 = (int)*(int **)(param_1 + 0x34) + *(int *)(**(int **)(param_1 + 0x34) + -0x10);
        if ((piStack_e0 != (int *)0x0) && (piStack_e0[1] != 0)) {
          piStack_e0[1] = piStack_e0[1] + 1;
          uStack_e4 = *(undefined4 *)(param_1 + 8);
          func_0x2c55d278(iVar8,&uStack_e4);
          piVar12 = piStack_e0;
          if ((piStack_e0 != (int *)0x0) &&
             (iVar8 = piStack_e0[1], piStack_e0[1] = iVar8 + -1, iVar8 + -1 == 0)) {
            (**(code **)(*piStack_e0 + 8))(piStack_e0);
            iVar8 = piVar12[2];
            piVar12[2] = iVar8 + -1;
            if (iVar8 + -1 == 0) {
              (**(code **)(*piVar12 + 0xc))(piVar12);
            }
          }
          puVar7 = *(undefined4 **)(param_1 + 0x30);
          uStack_dc = *(undefined4 *)(param_1 + 0x20);
          piStack_d8 = *(int **)(param_1 + 0x24);
          pcVar10 = *(code **)*puVar7;
          if (piStack_d8 != (int *)0x0) {
            piStack_d8[1] = piStack_d8[1] + 1;
          }
          (*pcVar10)(puVar7,&uStack_dc);
          piVar12 = piStack_d8;
          if ((piStack_d8 != (int *)0x0) &&
             (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
            (**(code **)(*piStack_d8 + 8))(piStack_d8);
            iVar8 = piVar12[2];
            piVar12[2] = iVar8 + -1;
            if (iVar8 + -1 == 0) {
              (**(code **)(*piVar12 + 0xc))(piVar12);
            }
          }
          piStack_d8 = *(int **)(param_1 + 0xc);
          iVar8 = (int)*(int **)(param_1 + 0x30) + *(int *)(**(int **)(param_1 + 0x30) + -0x10);
          if ((piStack_d8 != (int *)0x0) && (piStack_d8[1] != 0)) {
            piStack_d8[1] = piStack_d8[1] + 1;
            uStack_dc = *(undefined4 *)(param_1 + 8);
            func_0x2c55d278(iVar8,&uStack_dc);
            piVar12 = piStack_d8;
            if ((piStack_d8 != (int *)0x0) &&
               (iVar8 = piStack_d8[1], piStack_d8[1] = iVar8 + -1, iVar8 + -1 == 0)) {
              (**(code **)(*piStack_d8 + 8))(piStack_d8);
              iVar8 = piVar12[2];
              piVar12[2] = iVar8 + -1;
              if (iVar8 + -1 == 0) {
                (**(code **)(*piVar12 + 0xc))(piVar12);
              }
            }
            piVar12 = DAT_2c5ff370;
            if (*_LAB_2c55e1f0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            iVar8 = *(int *)(param_1 + 0x14);
            if (iVar8 == 0) {
              return;
            }
            if (*DAT_2c5ff370 == 0) {
              iVar11 = FUN_2c602d28();
              *piVar12 = iVar11;
              FUN_2c602f64(iVar11,iVar8);
              return;
            }
            FUN_2c602f64();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c668474(iVar8);
}

