/* FUN_2c4ca4c8 @ 0x2c4ca4c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ca4c8(uint param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  
  FUN_2c6741e8(0x42,_LAB_2c4ca5f4,_LAB_2c4ca5f0,param_1);
  puVar2 = _LAB_2c4ca5fc;
  puVar1 = _LAB_2c4ca5f8;
  if ((param_3 & 1) == 0) {
    *_LAB_2c4ca5fc = 0;
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  else {
    *_LAB_2c4ca5f8 = *_LAB_2c4ca5f8 | 1;
  }
  puVar3 = _LAB_2c4ca600;
  if ((param_3 & 2) == 0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    uVar13 = *puVar1;
    *puVar3 = 0;
    uVar17 = 0;
    uVar18 = 0;
    if (uVar13 != 1) goto LAB_2c4ca50a;
LAB_2c4ca5c0:
    uVar13 = 0x28;
    *puVar2 = 0x28;
  }
  else {
    *puVar1 = *puVar1 | 1;
    uVar17 = *puVar3;
    uVar18 = uVar17;
    if (*puVar1 == 1) goto LAB_2c4ca5c0;
LAB_2c4ca50a:
    uVar13 = *puVar2;
    uVar17 = uVar18;
  }
  piVar6 = _LAB_2c4ca62c;
  FUN_2c6741e8(0x43,_LAB_2c4ca604,_LAB_2c4ca5f0,uVar13,uVar17);
  if (*piVar6 != 0) goto LAB_2c4ca58e;
  if (param_1 < 0xc65e) {
    if ((int)(*puVar2 + *puVar3) < 0x23) {
      func_0x2c4b7c54(_LAB_2c4ca8f4);
    }
    else {
LAB_2c4ca536:
      func_0x2c4b7c54(_LAB_2c4ca608);
    }
  }
  else if (_LAB_2c4ca624 < param_1) {
    if (_LAB_2c4ca8ec < param_1) {
      if (0x22 < (int)(*puVar2 + *puVar3)) {
        func_0x2c4b7c54(_LAB_2c4ca900);
        goto LAB_2c4ca53c;
      }
    }
    else if ((int)(*puVar2 + *puVar3) < 0x23) goto LAB_2c4ca5e6;
    func_0x2c4b7c54(_LAB_2c4ca8f0);
  }
  else {
    if ((int)(*puVar2 + *puVar3) < 0x23) goto LAB_2c4ca536;
LAB_2c4ca5e6:
    func_0x2c4b7c54(_LAB_2c4ca628);
  }
LAB_2c4ca53c:
  puVar4 = _LAB_2c4ca610;
  iVar12 = _LAB_2c4ca60c;
  *(uint *)(_LAB_2c4ca60c + 600) = *(uint *)(_LAB_2c4ca60c + 600) & 0xfffffffe;
  *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfffffffd;
  *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfffffffb;
  *(undefined4 *)(iVar12 + 0x318) = 0x28;
  *(uint *)(iVar12 + 0xdc) = *(uint *)(iVar12 + 0xdc) & 0xffffffef;
  *(uint *)(iVar12 + 0xdc) = *(uint *)(iVar12 + 0xdc) & 0xffffffdf;
  puVar16 = _LAB_2c4ca614;
  *puVar4 = 0;
  *puVar16 = 0;
LAB_2c4ca58e:
  piVar5 = _LAB_2c4ca618;
  if (*_LAB_2c4ca618 == 0) {
    iVar12 = FUN_2c4c2564(_LAB_2c4ca8f8);
    *piVar5 = iVar12;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4ca8fc);
    }
  }
  uVar7 = _LAB_2c4ca898;
  if (param_2 == 1) {
    *_LAB_2c4ca894 = 0;
    puVar1 = _LAB_2c4ca89c;
    *piVar6 = 1;
    *puVar1 = param_1;
    uVar8 = _LAB_2c4ca8a4;
    *_LAB_2c4ca8a0 = 1;
    uVar9 = _LAB_2c4ca8ac;
    puVar16 = _DAT_2c4ca8a8;
    *_DAT_2c4ca8a8 = 1;
    FUN_2c6741e8(0x41,uVar8,uVar7,puVar16,uVar17);
    uVar7 = _LAB_2c4ca904;
    iVar12 = _LAB_2c4ca8ae_2;
    *(uint *)(_LAB_2c4ca8ae_2 + 600) = *(uint *)(_LAB_2c4ca8ae_2 + 600) & 0xfffffffe;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfffffffd;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfffffffb;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfeffffff;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xff7fffff;
    iVar10 = _LAB_2c4ca8b4;
    *(undefined4 *)(_LAB_2c4ca8b4 + 0x20) = uVar7;
    *(undefined4 *)(iVar10 + 0x24) = uVar9;
    *(undefined4 *)(iVar10 + 0x30) = 0x77ef;
    *(undefined4 *)(iVar10 + 0x28) = 0xefde;
    *(undefined4 *)(iVar10 + 0x2c) = 0x77ef;
    *(undefined4 *)(iVar12 + 0x2f20) = uVar7;
    *(undefined4 *)(iVar12 + 0x2f24) = uVar9;
    *(undefined4 *)(iVar12 + 0x2f30) = 0x77ef;
    *(undefined4 *)(iVar12 + 0x2f28) = 0xefde;
    *(undefined4 *)(iVar12 + 0x2f2c) = 0x77ef;
    *(undefined4 *)(iVar10 + 0x34) = uVar7;
    *(undefined4 *)(iVar10 + 0x38) = uVar9;
    *(undefined4 *)(iVar10 + 0x44) = 0x77ef;
    *(undefined4 *)(iVar10 + 0x3c) = 0xefde;
    *(undefined4 *)(iVar10 + 0x40) = 0x77ef;
    *(undefined4 *)(iVar12 + 0x2f34) = uVar7;
    *(undefined4 *)(iVar12 + 0x2f38) = uVar9;
    *(undefined4 *)(iVar12 + 0x2f44) = 0x77ef;
    *(undefined4 *)(iVar12 + 0x2f3c) = 0xefde;
    *(undefined4 *)(iVar12 + 0x2f40) = 0x77ef;
    puVar16 = _LAB_2c4ca8b8;
    puVar14 = (undefined4 *)(iVar12 + 0x2800);
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar15 = puVar14 + 5;
      puVar14[4] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0x100] = 0;
      puVar14[0x101] = 0;
      puVar14[0x104] = 0;
      puVar14[0x102] = 0;
      puVar14[0x103] = 0;
      puVar11 = _LAB_2c4ca8bc;
      puVar14 = puVar15;
    } while (puVar15 != puVar16);
    do {
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar16 = puVar15 + 5;
      puVar15[4] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[0x100] = 0;
      puVar15[0x101] = 0;
      puVar15[0x104] = 0;
      puVar15[0x102] = 0;
      puVar15[0x103] = 0;
      puVar4 = _LAB_2c4ca8c0;
      iVar12 = _LAB_2c4ca8ae_2;
      puVar15 = puVar16;
    } while (puVar16 != puVar11);
    *(uint *)(_LAB_2c4ca8ae_2 + 600) = *(uint *)(_LAB_2c4ca8ae_2 + 600) | 8;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) | 0x10;
    *(uint *)(iVar12 + 600) = (*puVar2 & 0x3f) << 0xb | *(uint *)(iVar12 + 600) & 0xfffe07ff;
    *(uint *)(iVar12 + 600) = (*puVar3 & 0x3f) << 0x11 | *(uint *)(iVar12 + 600) & 0xff81ffff;
    *(uint *)(iVar12 + 0xdc) = *(uint *)(iVar12 + 0xdc) | 0x10;
    *(uint *)(iVar12 + 0xdc) = *(uint *)(iVar12 + 0xdc) | 0x20;
    *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfffbffff;
    *(uint *)(iVar12 + 0x25c) = *(uint *)(iVar12 + 0x25c) & 0xfff7ffff;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xffffffdf;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xffffffbf;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xffffff7f;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) & 0xfffffeff;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) | 0x1000000;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) | 2;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) | 4;
    *(uint *)(iVar12 + 600) = *(uint *)(iVar12 + 600) | 1;
    puVar16 = _LAB_2c4ca8c4;
    *puVar4 = 0;
    puVar14 = _LAB_2c4ca8c8;
    *puVar16 = 0x14;
    puVar16 = _LAB_2c4ca8cc;
    *puVar14 = 0x14;
    puVar14 = _LAB_2c4ca8d0;
    *puVar16 = 0;
    puVar16 = _LAB_2c4ca8d4;
    *puVar14 = 0x14;
    puVar14 = _LAB_2c4ca8d8;
    *puVar16 = 0x14;
    puVar4 = _LAB_2c4ca8dc;
    *puVar14 = 0;
    *puVar4 = 0;
    puVar4 = DAT_2c4ca8e8;
    puVar16 = _LAB_2c4ca8e4;
    *_LAB_2c4ca8e0 = 0;
    *puVar4 = 0;
    *puVar16 = 800;
    FUN_2c4c9dac();
    return 0;
  }
  FUN_2c6741e8(0x41,_LAB_2c4ca620,_LAB_2c4ca61c);
  return 0;
}

